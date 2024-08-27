#include<bits/stdc++.h>
 using namespace std;
 int main(){
    vector<string>v;
    v.push_back("abc");
    v.push_back("xyz");
    if(find(v.begin(),v.end(),"abc")!=v.end())
     {
        cout << "word Found"<< endl;
     }
     else {
        cout << "Word not Found"<< endl;
     }
     return 0;
 }
