// Input: An integer n – size of the array , An array of n integers ,An integer target – the element to search
// Output: Print "Found" if the target exists in the array, otherwise print "Not Found"
#include<iostream>
using namespace std;
int main(){
    int n,target;
    cout<<" enter numbers : ";
    cin>>n;
    int arr[100];
    cout<<" Enter  the "<<n << " Elements :  ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<" enter the number to search :";
    cin>> target;
    bool found =false;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            found=true;
            break;
        }
    }
       if(found)
        cout<<" found ";
       
       else
        cout<<" not found ";
       
    
    
    return 0;
}