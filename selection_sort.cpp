// Section sort algo

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[]  = {5,86,7,8,9};
    int n = sizeof(arr)/sizeof(int);
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if(arr[j]< arr[i]){
                int temp = arr[j] ;
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for(int k = 0;k<n;k++){
        cout << arr[k]<<" ";
    }
    return 0;
}

