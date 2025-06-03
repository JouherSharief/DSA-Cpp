#include <iostream>
using namespace std;

int main ( ) {
    int a, b;

    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;

    cout<< "Results =>\n";
    cout << "Addition : " << a+b << endl;
    cout << "Subtraction : " << a-b << endl;
    cout  << "Multiplication : " << a*(double)b << endl;
    cout << "Division : " << a/(double)b << endl;
    return 0;
}