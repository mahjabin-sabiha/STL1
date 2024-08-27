#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>books;
    stack<int>apps;
    apps.push(9);
    apps.push(8);
    books.push(1);
    books.push(2);
    books.push(3);
    books.push(4);
    cout << books.size()<< endl;
    cout <<"Last item: "<< books.top()<< endl;
    cout << "-----------------------------"<< endl;
    books.pop();
    cout << books.size()<< endl;
    cout <<"Last item: "<< books.top()<< endl;
    cout << books.empty()<< endl;
    cout << "---------------------------"<< endl;
    apps.swap(books);
    cout << "Last item:"<< books.top() << endl;
    cout << "Last item:"<< apps.top() << endl;
}
