#include <iostream>
#include <chrono>
using namespace std::chrono;
using namespace std;


// import your test module here
#include "seive.cpp"

int test(){
    // call your test function here 
    seive_eratos(156985);
    return 0;
}

int main (){
    auto start = high_resolution_clock::now();
    int result = test();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop-start);
    cout << "\nOutput from function under test : " << result << endl;
    cout << "Time taken by the function under test : " << duration.count();
}