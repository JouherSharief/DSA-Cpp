#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the value till you to calculate sum of Odd : ";
    cin >> N;
    int oddSum = 0;
    int evenSum = 0;
    for (int i=1; i<=N;i++){
        if (i %2 == 0){
            evenSum += i;
        }else {
            oddSum += i;
        }
    }
    cout << "Odd Sum till " << N <<" : "<< oddSum << endl;
    cout << "Even Sum till " << N <<" : "<< evenSum << endl;
    return 0;
}