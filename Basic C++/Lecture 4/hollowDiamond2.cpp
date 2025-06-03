#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    for(int i = 0; i < 2*n-1; ++i){
        if ( i < n){
        for(int j = 0; j <= n-i-1; ++j){
            if (j != n-i-1){cout << " ";}
            else {cout << "*";}
        }
        for (int j = n-i ; j <= n-1+i; ++j){
            if(j != n-1+i){cout << " ";}
            else{cout << "*";}
        }
    }else {
        for(int j =0; j <= i-n+1 ; ++j){
            if(j != i-n+1){cout << " ";}
            else {cout <<"*";}
        }
        for(int j = i-n+1; j <  3*(n-1)-i; ++j){
            if(j == 3*(n-1)-i-1){cout << "*";}
            else{cout <<" ";}
        }
    }
        cout << '\n';
    }
}