#include <iostream>
using namespace std;

void print(char a[], int n, int ind){
    // Create an array of size 2*n
    char b[2*n];

    // Copy array a to array b 2 times
    for (int i = 0; i < n; i++)
    b[i] = b[n+i] = a[i];

    // Print the elements in circular array from ind-th index to n+ind 
    for (int i = ind; i < n+ind; i++)
    cout << b[i] <<" ";

}

int main(){
    char a[] = {'A','B','C','D','E','F'};
    int n = sizeof(a)/sizeof(a[0]);
    print(a,n,8);
}