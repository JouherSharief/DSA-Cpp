#include<iostream>
using namespace std;

int main(){
    char a;

    cout<<"Enter Your Character : ";
    cin>>a;

    if (a >= 'a'  && a <= 'z'){
        cout<<"LowerCase";
    }else if (a >='A' && a <= 'Z'){
        cout<<"UpperCase";
    }else {
        cout<<"Invalid character, Enter values between a-z or A-Z";
    }
}