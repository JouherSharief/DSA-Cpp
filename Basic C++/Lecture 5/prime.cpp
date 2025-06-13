#include <iostream>
using namespace std;

string isPrime(int a){
    if (a <= 1)return " is not a prime \n";
    for(int i = 2; i*i <= a; ++i){
        if (a %i == 0)return " is not a prime \n";
    }
    return " is a prime \n";
}

int main(){
    int n;
    while (true){
        cout << "Enter the value of n (ctrl-z to quit): ";
        cin >> n;
        if (n <=0)break;
        cout << n  << isPrime(n);
    }
}