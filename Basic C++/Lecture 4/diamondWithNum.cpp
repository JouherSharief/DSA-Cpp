#include <iostream>
using namespace std;

int main(){
    int n; 
    cout << "Enter the value of n : ";
    cin >> n;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n-i-1; ++j){
            cout << "  ";
        }
        for(int j = n-1; j >= n-1-i; --j){
            cout << n-j << " ";
        }
        for(int j = n-i; j < n; ++j){
            cout << n-j << " ";
        }
        cout << '\n';
    }
    for(int i = 1; i < n; ++i){
        for(int j = 1; j <= i; ++j){
            cout << "  ";
        }
        for(int j = n-1; j >= i; --j){
            cout << n-j << ' ';
        }
        for(int j = 2*n-i-1; j > n; --j){
            cout << j-n << ' ';
        }
        cout << '\n';
    }
}