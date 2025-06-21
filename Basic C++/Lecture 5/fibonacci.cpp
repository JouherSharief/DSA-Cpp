#include <iostream>
#include <vector>
using namespace std;

int help_fibonacci(int n,vector<int>& memo){
    if (n < 0)throw invalid_argument("Input should be a positive integer");
    if (n == 0)return 0;
    if (n == 1 || n==2)return 1;
    // else return help_fibonacci(n-1)+help_fibonacci(n-2);
    if (memo[n] != -1)return memo[n];
    else return memo[n] = help_fibonacci(n-1,memo)+help_fibonacci(n-2,memo);
}

int nth_fibonacci(int n){
    vector<int> memo(n+1,-1);
    return help_fibonacci(n,memo);
}