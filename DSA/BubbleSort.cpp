#include<iostream>
using namespace std;
int bubbleSort(int arr[], int n)
{   
    for(int i = 0; i < n; i++ ) {
        bool swapped=false;

        for(int j = 0; j<n-i; j++) {
            
            if(arr[j] > arr[j+1]) 
            swap(arr[j], arr[j+1]);  
            swapped=true;
        }
    }
        // if(swapped == false) {
            //already sorted
       //      break;
        //}
    
}
int main(){
int even[8]={4,7,9,6,1,5,3,2};
int evenindex= bubbleSort(even,8);
 cout << "Sorted array is: ";
    for(int i = 0; i < 8; i++) {
        cout << even[i] << " ";
    }
return 0;

}