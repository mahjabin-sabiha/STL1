#include<bits/stdc++.h>
 using namespace std;
 int main(){
    list<string>doc_1={"Data","is","the","new","oil","of","the","company"};
    list<string>doc_2={"Data","is","a","new","oil"};
    list<string>c;
    list<string>d;
    doc_1.sort();
    doc_2.sort();
    set_intersection(doc_1.begin(),doc_1.end(),doc_2.begin(),doc_2.end(),back_inserter(c));
    set_union(doc_1.begin(),doc_1.end(),doc_2.begin(),doc_2.end(),inserter (d,d.begin())); 
    cout << c.size()<< " "<<d.size()<< " "<<doc_1.size()<<" "<< doc_2.size()<< endl;
    cout << "jaccard similarity is: " << (float)c.size()/d.size() << endl;
  
   }
  
 