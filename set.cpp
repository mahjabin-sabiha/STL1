#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    s.insert(1);//set a number in set is to insert//
    s.insert(2);
    s.insert(3);
    cout << "---------------"<<"\n";
    for(auto x:s){
        cout << x << "\n";
    }
    cout <<"\n";
    //printing in accending order always in set//
    s.insert(0);
    s.insert(8);
    s.insert(7);
    s.erase(7);//it will erase 7//
    for(auto x:s){
        cout << x << "\n";
    }
    }