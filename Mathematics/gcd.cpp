// find greatest common divisors of two numbers;

#include <iostream>
using namespace std;

// naive solution - O(min(a,b))

int gcd1(int a,int b){
    int res = min(a,b);
    while(res>0){
        if(a%res == 0&& b%res==0){
            break;
        }
        res--;
    }
    return res;
}

// optimized approach - Euclidean Algo 
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
//  Euclidean approach in m=other form 
int gcd3(int a , int b){
    while(a != b){
        if(a>b){
            a =a-b;
        }
        else{
            b= b-a;
        }
    }
    return a;
}

int main() {

    int a,b;
    cin >>a>> b;
    
    cout << "GCD Of both ARE - " << gcd3(a,b) <<endl;
    return 0;
}