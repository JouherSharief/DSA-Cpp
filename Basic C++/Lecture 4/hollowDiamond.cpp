#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    for(int i = 0; i < 2*(n)-1; ++i){
        //spaces and * with hollow spaces inside
        for(int j = 0; j <= n-1+i; ++j){
            if( i < n){
            if(j < n-1-i ){
                cout << " ";
            }else if(j == n-1-i || j == n-1+i){
                cout << "*";
            }
            else {
                cout << " ";
            }}else{
                if (j < i+1-n){
                    cout <<" ";
                }else if(j == i+1-n || j ==3*n -3 -i ){
                    cout << "*";
                }else {
                    cout <<" ";
                }
            }
        }
        cout << '\n';
    }
}