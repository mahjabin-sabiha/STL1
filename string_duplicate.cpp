#include<bits/stdc++.h>
 using namespace std;
 int main(){
    string s1,s2;
    int count=0,f=0;
    cout << "Enter x: " << "\n";
    getline(cin,s1);
    cout << "Enter y: "<< "\n";
    getline(cin,s2);
    for(int i=0;i<s1.size();i++)
    {
        if( s1[i]=='#')
        count++;
      
    }
    for(int i=0;i<s2.size();i++){
        if(s2[i]=='#'){
            f++;
        }
    }
    cout << count << endl;
    cout << f << endl;
    if(count == f){
        cout <<"True"<<"\n";
    }
      else{
        cout << "False"<<"\n"<< endl;
      } 
   
            }   
           
     