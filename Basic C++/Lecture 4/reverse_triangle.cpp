#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    for (int i = n; i > 0; i--){
        for (int j = i; j > 0; j--){
            cout << j << " ";
        }
        if (i != 1){cout << '\n';}
    }
}