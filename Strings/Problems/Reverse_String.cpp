// Reverse String
#include<iostream>
#include<string>
#include<sstream>
#include<stack>
using namespace std;
string ReverseWords(string s){
    stack<string> st;
    string words;
    stringstream ss(s);

    while(ss >> words){
        st.push(words);
    }
    string result="";
    while(!st.empty()){
        result+=st.top();
         st.pop();
        if (!st.empty()) result += " ";
    }
    return result;
}

int main() {
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);

    string reversed = ReverseWords(s);
    cout << "Reversed words: " << reversed << endl;

    return 0;
}
