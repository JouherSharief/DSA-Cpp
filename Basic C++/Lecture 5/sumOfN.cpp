#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int sumOf_N(int n){
    long long int sum = 0;
    for (int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

int main(){
    auto start = high_resolution_clock::now();
    // cout << sumOf_N(100000000);
    printf("%d",sumOf_N(100000000));
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop-start);
    cout << "\n" <<duration.count();
    return 0;
}