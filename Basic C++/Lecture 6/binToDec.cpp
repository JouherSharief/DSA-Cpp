#include <iostream>
using namespace std;

int power(int a, int n){
    int power = 1;
    while (n)
    {
        power *= a;
        n--;
    }
    
    return power;
}

int binDec (string binary) {
    int size = binary.length();
    int decimal = 0;
    for (int i = 0; i < size; i++){
        int num = (int)(binary[i]);
        if (num == '1'){
            decimal += power(2,(size-(i+1)));
        }
        // cout << (binary[i]=='1') <<endl;
    }
    // cout << size;
    return decimal;
}

int main () {
    cout << binDec("110");
}