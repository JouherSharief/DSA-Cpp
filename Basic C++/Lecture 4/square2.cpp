#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n; // n=3
    int num = 1;
    for (int i = 0; i < n; ++i){

        for (int j = 0; j < n; ++j){
            
            cout << num << " ";
            num++;
        }
        if (i != n-1)
        {cout << endl;}
    }
    return 0;
}