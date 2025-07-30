// #Frequency in string using DSA
#include<iostream>
#include<string>
#include<sstream>
#include<Unordered_map>
using namespace std;
int main(){
    string s;
    cout<<" Enter a sentence : ";
    getline(cin,s);

    unordered_map<string,int>frequency;
    stringstream ss(s);
    string word;

    while(ss >> word){
        frequency[word]++;
    }
  
    cout<<" Word Frequency : /n" ;
    for(auto pair : frequency){
        cout<<pair.first<<" : "<<pair.second<<endl;
    }

    return 0;
}