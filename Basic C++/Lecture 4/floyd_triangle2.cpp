#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the Value of n : ";
    cin >> n;

    char ch = 'A';

    for(int i = 0; i < n; ++i){
        for (int j = i + 1; j > 0; j--){
            cout << ch  << " ";
            ch++;
        }
        if (i != n-1){
            cout << '\n';
        }
    }
}