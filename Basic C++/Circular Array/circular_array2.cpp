#include <iostream>
using namespace std;

void c_array(char a[], int n, int ind){
    // create an array of size 2n
    char b[2*n];

    // copy the value of array a into array b 2 times
    for (int i = 0; i < n; i++)
    b[i] = b[n+i] = a[i];
    
    // print array a from the index ind 
    for (int i = ind %n; i < n+ (ind %n); i++){
        cout << b[i] << " ";
    }
}

int main(){
    char a[]={'A','B','C','D', 'E', 'F'};
    int n = sizeof(a)/sizeof(a[0]);
    c_array(a,n,20);
}