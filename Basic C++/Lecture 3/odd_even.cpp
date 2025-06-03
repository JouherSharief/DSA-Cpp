#include <iostream>
using namespace std;

int main(){
    int number ;
    cout<<"Enter your Number: ";
    cin>>number;

    if (number %2==0){
        cout<<"Your Number "<<number<<" is Even.";
    }else {
        cout<<"Your Number "<<number<<" is Odd.";
    }
    return 0;
}