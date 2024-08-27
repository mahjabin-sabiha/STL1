 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    vector<int>v1;
    v1.push_back(10);
    cout << v1.size()<< endl;
    cout << v1[0]<< endl;
    cout << "-------------------"<< endl;
    v1.push_back(29);
    cout << v1.size()<< endl;
    for(int i=0;i<v1.size();i++){
        cout << v1[i]<< " "<<endl;
    }
     cout << "-------------------"<< endl;
     v1.pop_back();
     cout << v1.size()<< endl;
    for(int i=0;i<v1.size();i++){
        cout << v1[i]<< " "<<endl;
    }
 }