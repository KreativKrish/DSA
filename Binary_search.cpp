// Sqrt of a number using binary search 
//

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[] = {3,5,6,8,9,10,13,15};
    int hi=n,lo = 0,mid;
    while(hi>=lo){
        mid = (hi+lo)/2;
        if(arr[mid]<n){
            lo = mid+1;
        }
        else if(arr[mid]>n){
            hi = mid-1;
        }
        else{
            cout << mid<<endl;
            break;
        }
    } 
    if(arr[mid]!= n){
        cout << "Not Found"<<endl;
    }
    return 0;
}
