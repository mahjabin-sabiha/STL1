#include<bits/stdc++.h>
 using namespace std;
 int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(2);
    cout << "V contains ";
    for(size_t s=0;s<v.size();++s){
        cout << v[s]<<" ";
    }
    cout << endl;
    cout << "the sum of the elements in v is"
      << accumulate(v.begin(),v.end(),0)<< endl;
      cout << "the inner_product of v and itself is"<< inner_product(v.begin(),v.end(),v.begin(),0)<< endl;
      return 0;
 }