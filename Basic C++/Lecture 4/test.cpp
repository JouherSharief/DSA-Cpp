#include <iostream>
using namespace std;

int reversed_number(int a){
        int rem = 0;
        while (a != 0){
            // if (rem > MAX_INT/10 || rem < MIN_INT/10)return 0;
            rem = rem*10 + a %10;
            a /= 10;
        }
        return rem;
    }
    
int main() {
    cout << reversed_number(123);
}