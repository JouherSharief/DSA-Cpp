#include <iostream>
using namespace std;

class Myclass {
    public:
        int myNum;
        string myString;
        void print(){
            cout << myNum << '\n';
            cout << myString << '\n';
        }
};

int main(){
    Myclass myObj1;
    myObj1.myNum = 12;
    myObj1.myString = "Hello World";
    myObj1.print();
    // cout << myObj1.myNum << endl;
    // cout << myObj1.myString <<endl;

    Myclass myObj2;
    myObj2.myNum = 999;
    myObj2.myString = "Hello Duniya";
    myObj2.print();
    return 0;
}