#include<iostream>
using namespace std;
int binarysearch(int arr[], int size, int key){
    int start=0;
    int end = size-1;
    int mid = start + (end-start)/2;

    while(start <= end){
        if(arr[mid]==key){ //when mid is equal to key
            return mid;
        }
        if(key>arr[mid]){//righ side of the key
            start=mid+1;
        }
        else{//left side of the key
            end=mid-1;
        }
        mid = start + (end-start)/2;

    }
    return -1;
}
int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};

    int evenindex=binarysearch(even,6,12);
    int oddindex=binarysearch(odd,5,16);


    cout<< "index of 12 is "<< evenindex <<endl;
     cout<< "index of 16 is "<< oddindex <<endl;




return 0;
}