#include<bits/stdc++.h>
 using namespace std;
 int main(){
    string str;
    map<string,int>freqmap;
    getline(cin,str);
    stringstream ss(str);
    string word;
    while(ss>>word){
        if(freqmap.find(word)==freqmap.end()){
            freqmap.insert({word,1});
        }
        else{
            freqmap[word]++;
        }
    }
     map< string,int>::iterator itr;
    for(itr=freqmap.begin();itr!=freqmap.end(); ++itr){
        cout << "\t"<<(*itr).first<<"\t"<<(*itr).second<<"\n";
    }
 }