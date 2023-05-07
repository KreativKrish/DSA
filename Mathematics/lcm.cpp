// finding the lowest number that is divisible by two numbers

#include <iostream>
using namespace std;

// most effeicient approach 
// Time complexity - O(min(a,b))
// space complexity - O(1)

int lcm(int a,int b){
    int mx = max(a,b);
    int mn = min(a,b);
    for(int i= mx;;i+= mx){
        if(i%mn == 0){
            return i;
        }
    }
}
int main() {

    int a,b;
    cin >>a>> b;
    
    cout << "LCM Of both ARE - " << lcm(a,b) <<endl;
    return 0;
}
