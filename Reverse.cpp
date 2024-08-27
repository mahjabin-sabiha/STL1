#include<bits/stdc++.h>
 using namespace std;
 int main(){
    stack<string>st;
    string s1;
    getline(cin,s1);
    stringstream ss(s1);
    string word;
    while(ss>> word){
        st.push(word); 
    }
    


    while(!st.empty()){
    cout << st.top()<< " ";
    st.pop();
    }
 }
    