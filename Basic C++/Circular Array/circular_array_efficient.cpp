#include <iostream>
using namespace std;

void c_array_eff(string a[], int n, int ind){
    // printing array 'a' in circular fashion using mod function
    for ( int i = ind  ; i < ind + n; i++ )
    cout << a[i%n] << " ";

}

int main(){
    string a[] = {"A", "B", "C", "D", "E", "F"};
    int n = sizeof(a)/sizeof(a[0]);
    c_array_eff(a,n,19783);
    // cout << n << '\n' << sizeof(a) << '\n' << sizeof(a[0]);
}