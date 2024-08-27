#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>list;
    list.push(1);
     list.push(2);
      list.push(3);
       list.push(4);
       cout << list.size()<< endl;
       cout << "Front:"<<list.front()<<" "<<"Back:"<<list.back()<<endl;
       cout << list.empty()<< endl;
       list.pop();
       cout << "----------"<< endl;
       cout << list.size()<< endl;
       cout << "Front:"<<list.front()<<" "<<"Back:"<<list.back()<<endl;
       

}