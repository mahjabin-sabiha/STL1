#include<bits/stdc++.h>
using namespace std;
int main(){
    deque <int>d;
    d.push_back(1);
    d.push_back(2);
    for(auto x:d){
        cout << x << " "<< endl;

    }
    d.push_front(3);
    d.push_front(7);
     for(auto x:d){
        cout << x << " "<< endl;

    }
    cout <<"--------"<< endl;
   d.pop_front();
    for(auto x:d){
        cout << x << " "<< endl;

    }

}