// // Removing Duplicate Elements using Extra array in DSA 
#include<iostream>
using namespace std;

void removeDuplicates(int arr[], int n) {
    int uniqueArr[100]; 
    int uniqueCount = 0;
    for(int i = 0; i < n; i++) {
        bool isDuplicate = false;
         for(int j = 0; j < uniqueCount; j++) {
            if(arr[i] == uniqueArr[j]) {
                isDuplicate = true;
                break;
            }
        }
            if(!isDuplicate) {
            uniqueArr[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }
      cout << "Array after removing duplicates: ";
    for(int i = 0; i < uniqueCount; i++) {
        cout << uniqueArr[i] << " ";
    }
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = 7;

    removeDuplicates(arr, n);

    return 0;
}
