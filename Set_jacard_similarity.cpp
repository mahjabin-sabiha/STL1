#include<bits/stdc++.h>
 using namespace std;
 int main(){
    string s1,s2;
    set<string>doc1,doc2;
    cout <<"Doc1= "<< endl;
    getline(cin,s1);
    cout << "Doc2= "<< endl;
    getline(cin,s2);
    stringstream ss(s1);
    string word;
    while(ss>>word){
        doc1.insert(word);
    }
    stringstream ss2(s2);
    string word2;
    while(ss2>>word){
        doc2.insert(word);
    }
    set<string>common_words;
    set_intersection(doc1.begin(),doc1.end(),doc2.begin(),doc2.end(),inserter(common_words,common_words.begin()));
    doc1.merge(doc2);
    cout<< "Jaccard Similarity= "<<(float)common_words.size()/doc1.size()<< endl;
    return 0;
 }