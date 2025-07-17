#include<iostream>
using namespace std;
int main(){
    int x,y,temp=0;
    cout<<" enter 2 numbers : ";
    cin>>x>>y;
  
    while(x!=0){
    temp=x;
    x=y%x;
    y=temp;
}
 cout<<" after gcd : "<<y<<endl;
 return 0;
}