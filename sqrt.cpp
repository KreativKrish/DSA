// Sqrt of a number using binary search 
// epsilon is the number to which decimal places we want are our answer 

#include <iostream>
using namespace std;

double sqrt(double x){
    double eps = 1e-6;
    double hi = x,lo = 1,mid;
    while(hi-lo>eps){
        mid = (lo+hi)/2;
        
        if(mid*mid > x){
            hi = mid;
        }
        else {
            lo = mid;
        }
        cout << mid << " ";
    }
    return mid;
}
int main(int argc, char const *argv[])
{
    double x;
    cin >> x;
    cout << sqrt(x)<<endl;
    
    return 0;
}
