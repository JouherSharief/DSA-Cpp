#include <iostream>
using namespace std;

int main(){
    unsigned long long int N;
    cout << "Enter your Number N : ";
    cin >> N;
    bool flag = true;
    if (N <= 1){flag=false;}
    
    for ( int i = 2; i*i <N; ++i){
        if (N %i == 0){
            flag = false;
            break;
        }
    }
    (flag)?cout<< N << " is a Prime Number" : cout << N << " is not a Prime Number";

    return 0;
}