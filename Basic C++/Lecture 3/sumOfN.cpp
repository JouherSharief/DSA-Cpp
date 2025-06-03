#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter the Value till you want Sum : ";
    cin >> N;
    int sum = 0;
    for (int i=1; i<=N; i++){
        sum += i;
    }
    cout << "Sum : " << sum;

    return 0;
}