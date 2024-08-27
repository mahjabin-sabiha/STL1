#include<bits/stdc++.h>
#include<math.h>
#include<cmath>
 using namespace std;
 int main(){
    vector<int>v1;
    vector<int>v2;
    v1.push_back(1);
     v1.push_back(1);
     v1.push_back(1);
      v1.push_back(1);
       v1.push_back(1); 
       v1.push_back(0);
       v1.push_back(0);
       v2.push_back(0);
     v2.push_back(0);
     v2.push_back(1);
      v2.push_back(1);
       v2.push_back(0); 
       v2.push_back(1);
       v2.push_back(1);
       float D1D2=inner_product(v1.begin(),v1.end(),v2.begin(),0);
       cout<< D1D2 << endl;
       float p1=inner_product(v1.begin(),v1.end(),v1.begin(),0);
       float p2=inner_product(v2.begin(),v2.end(),v2.begin(),0);
       float D1=sqrt(p1);
       float D2=sqrt(p2);
       cout << D1<< endl;
       cout << D2<< endl;
       cout << "Similarity(D1,D2) "<< " "<< (float)((D1D2)/(D1*D2))<< endl;
       
 }