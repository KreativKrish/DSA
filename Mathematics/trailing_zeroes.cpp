// find the number of trailing zeroes in factorial
#include <iostream>
using namespace std;

int zeroes(int n){
    int temp = n;
    int ans =0;
    while(temp>0){
        ans += temp/5 ;
        temp /= 5;
    }
    return ans;
}

int main() {

    int n;
    cin >>n;
    
    cout << "NO. OF TRAILING ZEROES ARE - " << zeroes(n) <<endl;
    return 0;
}