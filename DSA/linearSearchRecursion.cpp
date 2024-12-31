#include<iostream>
using namespace std;

int linearSearch(int arr[], int size,int key){
    // base case
    if(size == 0)
        return false;
    
    if(arr[0] == key){
        return true;
    }
    else{
         bool remainingPart = linearSearch(arr + 1, size - 1, key);
         return remainingPart;
    }

   
}

int main(){
    int arr[5] = {1, 2, 9, 4, 5};
    int size = 5;
    int key =9;

    int ans  = linearSearch(arr, size,key);

    if(ans){
        cout << "present" << endl;
    }
    else{
         cout << "absent" << endl;
    }

    return 0;
}
