#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    for(int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            if (j < i){
                cout << " ";
            }else {
                cout << (char)(i+65) ;
            }
        }
        cout << '\n';
    }
}