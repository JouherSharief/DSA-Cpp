#include <iostream>
using namespace std;

class Dog {
    public:
        void bark(string woof,int n){
            for ( int i =0; i < n; i++){cout << woof << endl;}
        }
};

int main() {
    Dog labrador;
    labrador.bark("noob",4);
}