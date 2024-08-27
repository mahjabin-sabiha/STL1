#include<iostream>
using namespace std;
int main(){
    string hello="HELLO,";
    string world="WORLD!";
    string msg=hello + " "+ world;
    msg[0]='h';
    cout << msg << endl;
    cout << msg.size()<< endl;
    return 0;
}