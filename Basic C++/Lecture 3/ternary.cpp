#include <iostream>
using namespace std;
    

int main(){
    int age;
    cout << "Enter Your Age : ";
    cin >> age;
    string result;
    result = age<18?"Driving License cannot be given" : "Driving License Can be given";
    cout<<result;
}