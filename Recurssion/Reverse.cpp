#include<iostream>
using namespace std;
int reverse(int n){
    int digit,reverse=0;
    while(n>0){
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
return reverse;
   
}
int main(){
    int n;
    cout<<" print numbers : ";
    cin>>n;
    int result=reverse(n);
    cout<<n <<" reversed number :"<< result<<endl;
    return 0;
}