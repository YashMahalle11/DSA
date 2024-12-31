#include<iostream>
using namespace std;
int firstOccurance(int arr[], int size, int key){
    int start=0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start <= end){
        if(arr[mid]==key){ //when mid is equal to key
            ans = mid;
            end = mid - 1;
        }
        if(key>arr[mid]){//righ side of the key
            start=mid+1;
        }
        else{//left side of the key
            end=mid-1;
        }
        mid = start + (end-start)/2;

    }
    return ans;
}
//last occurance is not working
int lastOccurance(int arr[], int size, int key){
    int start=0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start <= end){
        if(arr[mid]==key){ //when mid is equal to key
            ans = mid;
            start = mid + 1;
        }
        if(key>arr[mid]){//righ side of the key
            start=mid+1;
        }
        else{//left side of the key
            end=mid-1;
        }
        mid = start + (end-start)/2;

    }
    return ans;
}


int main(){
    int even[7]={3,4,5,6,6,6,7};
    cout<< "first occurance of 6 is at index "<< firstOccurance(even,7,6) <<endl;
    cout<< "last occurance of 6 is at index "<< lastOccurance(even,7,6) <<endl;


return 0;
}