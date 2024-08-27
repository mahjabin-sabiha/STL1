#include<bits/stdc++.h>
 using namespace std;
 int main(){
    multiset<int>ms;
    multiset<int>ms1={78,45,34,12,90};
    ms.insert(1);
    ms.insert(2);
    ms.insert(9);
    ms.insert(9);
    ms.insert(6);
    ms.insert(1);
    ms.insert(9);
    ms.erase(ms.find(9));
    ms.erase(ms.begin());
    ms.swap(ms1);
    cout << *ms.begin()<< endl;
    cout <<"-------------------"<< endl;
    for(auto x:ms){
        cout << x<< " "<< endl;
    }
     cout <<"-------------------"<< endl;
     auto it=ms.begin();
     cout << *it << endl;
      cout <<"-------------------"<< endl;
      while(it!=ms.end()){
        cout << *it << endl;
        it++;
      }
      cout << "\n";
      //ms.end=null(0),ms=12,34,45,78,90;for printing 90;
      auto it1=ms.end();
      it1--;
      cout << *it1<< endl;
       cout <<"-------------------"<< endl;
       cout << *ms.rbegin()<< endl;
        cout <<"-------------------"<< endl;
        cout << *ms.rend() << endl;
         cout <<"-------------------"<< endl;
         cout << ms.empty()<< endl;
          cout <<"-------------------"<< endl;
          cout << ms.size()<< endl;
           cout <<"-------------------"<< endl;
           cout << ms.count(12)<< endl;
            cout <<"-------------------"<< endl;
            cout << *ms.lower_bound(34)<< endl;
         

 }