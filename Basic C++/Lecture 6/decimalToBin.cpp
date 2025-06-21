#include <iostream>
#include <bitset>
using namespace std;

string convertToBin(int n){
    if ( n = 0)return "0";
    string binaryNum= "";
    while (n){
        binaryNum += to_string(n%2);
        n /= 2;
    }
    return string(binaryNum.rbegin(), binaryNum.rend());
}

int main(){
    cout << bitset<8>(0);
}