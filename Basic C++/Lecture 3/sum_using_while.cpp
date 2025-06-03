#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter the value of N : ";
    cin>> N;
    int oddSum = 0, evenSum = 0 , counter = 0;
    while (counter <= N){
        (counter %2 != 0)?oddSum += counter:evenSum += counter;
        counter++;
    }

    cout << "Odd Sum till " << N << " : " << oddSum << endl;
    cout << "Even Sum till " << N << " : " << evenSum << endl;
}