#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    for (int i = 0; i < 2*n; ++i){
        for (int j = 0 ; j < 2*n; ++j){
            if (i == 0 || i == 2*n-1)cout << "*";
            else if(i > 0  && i < n && j >= 0 && j <= i-2) cout << " ";
            else if(i > 0 && i < n && j >= i-2 && j < n-1) cout << "*";
            else if(i > 0 && i < n && j >= n-1 && j <= n) cout << " ";
            else if(i > 0 && i < n && j > n && j <= 2*n -i) cout << "*";
            else if(i >= n && i < 2*n && j >= 0 && j < 2*n-i-2) cout <<" ";
            else if(i >= n && i < 2*n && j >= 2*n-i-2 && j < n-1) cout << "*";
            else if(i >= n && i < 2*n && j >= n-1 && j <= n) cout << " ";
            else if(i >= n && i < 2*n && j > n && j <= i+1) cout << "*";
            
        }
        cout << '\n';
    }
}