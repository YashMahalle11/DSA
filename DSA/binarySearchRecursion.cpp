#include<iostream>
using namespace std;

bool binarySearch(int *arr,int s, int e, int k){

    // Base case
    if(s > e)
        return false;

    int mid = s + (e - s)/2;

    // Check if the middle element is the key
    if(arr[mid] == k)
        return true;  
    
    // Recursive call on the right half
    if(arr[mid] < k){
        return binarySearch(arr,mid + 1, e, k);
    }    
    // Recursive call on the left half
    else {
        return binarySearch(arr, s, mid - 1, k);
    }
}

int main(){
    int arr[6] = {2, 4, 6, 10, 14, 18};
    int size = 6;
    int key = 1;

    if(binarySearch(arr, 0, size - 1, key)) {
        cout << "Present" << endl;
    } else {
        cout << "Not Present" << endl;
    }

    return 0;
}
