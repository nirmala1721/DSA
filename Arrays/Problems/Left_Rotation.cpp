// Left Rotation in array 
#include<iostream>
using namespace std;
void LeftRotation(int arr[],int n){
    int temp=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}
int main(){
    int arr[5]={20,30,40,50,60};
    int n=5;
    LeftRotation(arr,n);
    cout<<" After Left Roatation : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}
