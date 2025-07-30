#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

bool isAnagram(string s, string t){
    if(s.length() !=t.length()) return false;
    unordered_map<char,int>count;

    for(char c: s){
        count[c]++;

    }
    for(char c: t){
        count[c]--;
        if(count[c]<0) return false;
    }
    return true;
}
int main(){
    string s,t;
    cout<<" Enter a first string name :";
    cin>>s;
    cout<<" Enter a 2nd string name : ";
    cin>>t;

    if(isAnagram(s,t)) {
        cout<<" the stings are anagrams ";
    
    }
    else{
         cout<<" the stings are  not anagrams ";
    }
cout<<endl;
return 0;

}
