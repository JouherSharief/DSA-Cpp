#include <iostream>
using namespace std;

int sumOfDigits_a(int n){
    int sum=0;
    while (n){
        sum += n %10;
        n = n /10;
    }
    return sum;
}

int main(){
    int num = 999999999;
    cout << sumOfDigits_a(num) << endl;
}