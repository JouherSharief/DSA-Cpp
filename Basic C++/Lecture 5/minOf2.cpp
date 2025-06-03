#include <iostream>
using namespace std;

int minOfTwo(int a, int b){
    if ( a >= b){
        return b;
    }else {
        return a;
    }
}

int main(){
    int a,b;
    cout << "Enter the value of a : ";
    cin >> a;
    cout << "Enter the value of b : ";
    cin >> b;

    int result = minOfTwo(a,b);
    
    cout << "result : "<< result;
}