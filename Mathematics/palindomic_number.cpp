// Checking whether a number is palindromic or not ;returns true if it is palindromic otherwise false 
#include <iostream>
using namespace std;

bool palindrome(int n){
    int rev =0;
    int orig = n;
    while(n!=0){
        int rem = n%10;
        rev = rev*10 + rem;
        n /= 10; 
    }
    return rev==orig;
}

int main(int argc, char const *argv[])
{
    int n ;
    cin >>n;
    cout << palindrome(n) <<endl;
    return 0;
}
