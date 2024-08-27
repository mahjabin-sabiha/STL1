#include<bits/stdc++.h>
using namespace std;
int main(){


    string s="Dept of CSE CU";
    stringstream ss(s);
    string word;
    while(ss>>word){
        cout << word << endl;
    }
  cout << endl;
  return 0;
}