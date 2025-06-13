#include <iostream>
using namespace std;

void get_prime_numbers(int n){
    if (n <= 0) throw invalid_argument("Input should be an integer greater than 1 ");
    if (n == 1) throw invalid_argument("1 is neither prime nor composite");
    for (int j = 2; j <= n ; j++){
        bool flag = true;
        for (int i = 2; i*i <= j; i++){
        if (j %i == 0){
            flag = false;
            break;
        }
        }
        if (flag){
            cout << j <<" ";
        }
    }
    return ;
}

int main(){
    int n = 86;
    get_prime_numbers(n);
}