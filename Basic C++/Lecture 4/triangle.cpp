#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the Value of n : ";
    cin >> n;

    string line(n,'*');

    for (int i = 1; i <= n; ++i){
        cout << line.substr(0,i) ;
        if (i != n){cout << "\n";}
    }

    return 0;
}


// using "*" for char gives construtor error, so only use '*'