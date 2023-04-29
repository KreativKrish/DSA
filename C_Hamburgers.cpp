#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long r;
    int n_b,n_s,n_c;
    int p_b,p_s,p_c;
    string S;
    cin>>S;
    cin >> n_b>>n_s>>n_c;
    cin >> p_b>>p_s>>p_c;
    cin >>r ;

    int s=0,b=0,c=0;
    for(int i=0;i<S.length();i++){
        if(S[i]=='B'){
            b+=1;
        }
        else if(S[i]=='S'){
            s+=1;
        }
        else if(S[i]=='C'){
            c+=1;
        }
    }
    while(r>=0){

    }
    return 0;
}
