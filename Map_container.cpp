#include<bits/stdc++.h>
 using namespace std;
 int main(){
    map<string,int>priceMap;
    priceMap.insert({"avocado",80});
    priceMap.insert(make_pair("Mango",70));
    priceMap["Melon"]=90;
    for(auto st:priceMap){
        cout << st.first << " "<< st.second << "\n";
    }
    cout << "-----------------------"<< endl;
    map< string,int>::iterator itr;
    for(itr=priceMap.begin();itr!=priceMap.end(); ++itr){
        cout << "\t"<<(*itr).first<<"\t"<<(*itr).second<<"\n";
    }
    cout << "--------------------"<< endl;
    map<string,int>::iterator itr1;
    for(itr1=priceMap.begin();itr1!=priceMap.end();++itr1){
        cout << "\t"<< itr1->first <<"\t"<< itr1->second<< "\n";
    }
    return 0;
 }