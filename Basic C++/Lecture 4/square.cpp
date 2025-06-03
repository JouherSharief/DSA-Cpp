#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main(){
    int n;
    cout << "Enter the number of lines you want to print : " ;
    cin >> n;
    string line;
    auto start = high_resolution_clock::now();
    for (int i=1; i<=n; ++i){
        line += to_string(i)+ " ";
    }

    for (int i=1; i<=n; ++i){
        cout<< line << "\n";
    }
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Time Taken (in ms) : " << duration.count() << endl;
}