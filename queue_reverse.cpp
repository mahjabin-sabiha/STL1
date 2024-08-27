 #include<bits/stdc++.h>
 using namespace std;
 int main(){
 queue<string>qu;
 stack<string>st;
 string s1;
 getline(cin,s1);
 string word;
 stringstream ss(s1);
 while(ss>>word){
    qu.push(word);
 }
    


    while(!qu.empty()){
   st.push( qu.front());
    qu.pop();
    }
     while(!st.empty()){
    cout << st.top()<< " ";
    st.pop();
    }
 }
    