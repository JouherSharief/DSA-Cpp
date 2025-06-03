#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    for (int i = 0; i < n; ++i){
        bool flag = i %2 == 0;
        for (int j = 0; j < i+1; ++j){
            cout << flag << " ";
            flag = !flag;
        }
        cout << '\n';
    }
}