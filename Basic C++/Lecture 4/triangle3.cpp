#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the Value of n : ";
    cin >> n;

    for (int i = 0; i < n; ++i){
        for(int j = 0; j < i + 1; ++j){
            cout << (char)(i+65);
        }
        if (i != n-1){cout << "\n";}
    }
}