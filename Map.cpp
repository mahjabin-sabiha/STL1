#include<bits/stdc++.h>
 using namespace std;
 int main(){
    map <string,int>mp1={{"sabiha",1},{"shaila",2},{"Amena",3}};
    cout<< mp1["sabiha"]<< endl;
    cout<< mp1["shaila"]<< endl;
    cout<< mp1["Amena"]<< endl;
  cout<< "-------------------"<< endl;
  for(auto x:mp1){
    cout << x.first << " "<< x.second <<  " "<<endl;
  }
  if(mp1.find("sabiha")!=mp1.end()){
    cout << "found"<<"\n";
  }
  else{
    cout << "Found"<<endl;
  }
  cout << mp1.size()<< endl;
  cout << mp1.max_size()<< endl;
  cout << mp1.empty()<< endl;
  cout << mp1.count("sabiha")<< endl;

 }
