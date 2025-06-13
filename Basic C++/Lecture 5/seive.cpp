#include <iostream>
#include <vector>
using namespace std;


void seive_eratos(int n){
    vector<bool> isprime(n+1,true);
    isprime[0]=isprime[1]=false;

    for ( int i = 2; i*i <= n; ++i){
        if (isprime[i]){
            for (int j = i*i; j <= n; j += i){
                isprime[j]=false;
            }
        }
    }
    cout << "Prime numbers are : ";
    for (int i = 2; i <= n; ++i){
        if (isprime[i]){
            cout << i << " ";
        }
    }
}