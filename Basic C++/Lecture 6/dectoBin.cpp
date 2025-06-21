#include <iostream>
using namespace std;

unsigned long long int powerof (unsigned long long int a, int n){
    while (n){
        a *= a;
        n--;
    }
    return a;
}

