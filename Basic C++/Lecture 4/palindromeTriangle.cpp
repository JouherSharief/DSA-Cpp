#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    for(int i = 0; i < n; ++i){
        for (int j = 0; j < n-1-i; ++j){
            cout << "  ";
        }
        for(int j = n-1-i; j < n; ++j){
            cout << n-j << " ";
        }
        for(int j = n-2; j > n-i-2; --j){
            cout << n-j << " ";
        }
        if (i != n-1){cout << "\n";}
    }
}