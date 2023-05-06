//Bubble Sort 
// Repeatedly swap two elements if they are in wrong order
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[]  = {5,8,6,9,2,1,3,4,99 };
    int n = sizeof(arr)/sizeof(int);
    for(int i= 0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1]= arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int k = 0;k<n;k++){
        cout << arr[k]<<" ";
    }
    return 0;
}
