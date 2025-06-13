#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

long long factorial_recursive(int n){
    if ( n < 0) throw invalid_argument("Negative Integers not allowed");
    if (n == 0 || n == 1) return 1;
    return n*factorial_recursive(n-1);
}

long long factorial_loop(int n){
    if (n < 0) throw invalid_argument("Negative Integers not allowed");
    long long fact = 1;
    for(int i = 1; i <=n; i++){
        fact *= i;
    }
    return fact;
}

long long helper(int n, int r){
    if (n,r < 0 )throw invalid_argument("Negative Integers not allowed");
    long long mul = 1;
    for (int i = n; i > max(n-r,r); i--){
        mul *= i;
    }
    return mul/factorial_loop(min(n-r,r));
}

long long binomial_coeff(int n, int r){
    return helper(n,r);
}

int test (){
    auto start = high_resolution_clock::now();
    int result;
    // test your function here
    // result = factorial_recursive(19);
    // result = factorial_loop(19);
    result = helper(1000,232);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop-start);
    cout << "Test function output :" << result << endl; 
    cout << "Time Taken : " << duration.count() <<" (micro)s" << '\n';
}

int main(){
    test();
}