#include<bits/stdc++.h>
 using namespace std;
 int main(){
    set<char>a;
    a.insert('G');
    a.insert('F');
    a.insert('G');
    for(char st:a){
        cout << st << " ";
    }
    cout << "\n";
    return 0;
 }