// Right Rotation
#include<iostream>
using namespace std;
void RightRotation(int arr[],int n){
    int temp=arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp; 

}
int main(){
    int arr[5]={20,30,40,50,60};
    int n=5;
    RightRotation(arr,n);
    cout<<" After Right  notation :  ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";

    }
return 0;
}