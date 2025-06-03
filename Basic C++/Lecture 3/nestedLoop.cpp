#include <iostream>
#include <string>
using namespace std;

int main(){
    int n = 5;
    string pattern = "*****";
    for (int i=0; i< n; i++){
        cout << pattern.substr(0,5-i);
        if (i == n-1) {break;}
        cout << "\n";
    }
    return 0;
}