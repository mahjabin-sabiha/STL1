#include<bits/stdc++.h>
 using namespace std;
 int main(){
    stack<char>mystack1,s1;
    string str;
    cin>> str;
   
    for(int i=0;i<str.size();i++){
        if(!mystack1.empty()&& mystack1.top()==str[i]){
            mystack1.pop();
        }
        else{
            mystack1.push(str[i]);
        }
    }
    if(mystack1.empty()){
        cout << "Empty";

    }
    else{
        while(!mystack1.empty()){
            s1.push(mystack1.top());
            mystack1.pop();
        }
        while(!s1.empty()){
            cout << s1.top();
            s1.pop();
        }
        cout << "\n";
    }
    return 0;
 }