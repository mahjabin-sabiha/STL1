#include<bits/stdc++.h>
 using namespace std;
 int main(){
    stack<int>st;
    stack<int>bt;
    st.push(1);
     st.push(2);
      st.push(3);
       st.push(4);

   //pushing elements to bt
   bt.push(9);  
   bt.push(10);  
   bt.push(11);  
   bt.push(12);   
   bt.push(12);
   bt.push(12);
   st.swap(bt);
   cout << "st="<< " ";
   while(!st.empty()){
    cout << st.top()<< " ";
    st.pop();
   }
    cout << "bt="<<" ";
    while(!bt.empty()){
    cout << bt.top()<< " ";
    bt.pop();
   }
   } 
 