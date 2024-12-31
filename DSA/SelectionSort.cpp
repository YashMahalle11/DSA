#include<iostream>
using namespace std;
int selectionSort(int arr[], int size, int n)
{   
    for(int i = 0; i < n-1; i++ ) {
        int minIndex = i;
        
        for(int j = i+1; j<n; j++) {
            
            if(arr[j] < arr[minIndex]) 
                minIndex = j;
            
        }
        swap(arr[minIndex], arr[i]);
    }
}
int main(){

int even[8]={0,1,2,0,1,2,0,1};
int evenindex= selectionSort(even,8,8);
 cout << "Sorted array is: ";
    for(int i = 0; i < 8; i++) {
        cout << even[i] << " ";
    }
return 0;

}

/*#include<iostream>
using namespace std;

void selectionSort(int arr[], int n) {   
    for(int i = 0; i < n-1; i++ ) {
        int minIndex = i;
        
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[minIndex]) 
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main() {
    int even[8] = {34, 67, 45, 98, 23, 56, 12, 26};
    selectionSort(even, 8);
    
    cout << "Sorted array is: ";
    for(int i = 0; i < 8; i++) {
        cout << even[i] << " ";
    }
    cout << endl;
    return 0;
}*/
