#include<iostream>
using namespace std;
int InsertionSort(int arr[], int n)
{   
    for(int i=1; i<n; i++ ) {
        int temp=arr[i];
        int j = i-1;
        
        for( ; j>=0; j--) {
            
            if(arr[j] > temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
     
}
int main(){
int even[8]={4,7,9,6,1,5,3,2};
int evenindex= InsertionSort(even,8);
 cout << "Sorted array is: ";
    for(int i = 0; i < 8; i++) {
        cout << even[i] << " ";
    }
return 0;

}