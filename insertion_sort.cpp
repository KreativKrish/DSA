// Insertion sort 
// Insert an element from unsorted array to its correct position in sorted array 
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {5,4,8,6,7,9,3,1};
    int n = sizeof(arr)/sizeof(int);

    for(int i=1;i<n;i++){
        int current = arr[i];
        int j = i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]= arr[j];
            j--;
        }  
        arr[j+1] = current;   
    
    }
    for(int k = 0;k<n;k++){
        cout << arr[k]<<" ";
    }
    return 0;
}
