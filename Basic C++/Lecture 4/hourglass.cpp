#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    for(int i = 0; i < n; ++i){
        if (i != 0){
            for (int j = 0; j < i+1; ++j){
                cout << " ";
            }
            for (int j = 0; j < n-i; ++j){
                cout << "*";
            }
            cout << "  ";
            for (int j = 0; j < n-i; ++j){
                cout << "*";
            }
        }else {
            cout << "  ";
            for (int j = 0; j < 2*(n-i); ++j){
                cout << "*";
            }
        }
        if(i != n-1){cout << '\n';}
    }
    cout << '\n';
    for(int i = 0; i < n; ++i){
        if(i != n-1){
            for (int j = 0; j < n-i; ++j){
                cout << " ";
            }
            for(int j = 0; j < i+1; ++j){
                cout << "*";
            }
            cout << "  ";
            for(int j = 0; j < i+1; ++j){
                cout << "*";
            }
        }else {
            cout << "  ";
            for(int j = 0; j < 2*i+2; ++j){
                cout << "*";
            }
        }
        cout << '\n';
    }
}