#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n-1-i; ++j){
            cout << "  ";
        }
        for(int j = n-1 ; j >= n-1-i ; j-- ){
            cout << n-j <<" ";
        }
        for(int j = n+i ; j > n; j--){
            cout << j-n << " ";
        }
        cout << '\n';
    }
}