#include<bits/stdc++.h>
 using namespace std;
 int main(){
    set<int>s;
     s.insert(100);//set a number in set is to insert//
    s.insert(2000);
    s.insert(300);
    cout << *s.begin()<<endl;
    auto it=s.begin();
    it++;
    it++;
   
    cout << *it << endl;//printing element of index 2//
    cout << *s.rbegin()<< endl;
    cout << s.size()<< endl;
 }