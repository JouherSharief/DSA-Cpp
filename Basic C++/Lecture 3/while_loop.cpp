#include <iostream>
using namespace std;
 
int main(){
    int n;
    cout << "Enter number upto which you want values : ";
    cin >> n;
    int i=1;
    while (i <= n){
        cout << i<< " ";
        i++;
    }
    return 0;
}