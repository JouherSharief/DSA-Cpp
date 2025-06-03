#include <iostream>
#include <sstream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main(){
	
    int n;
    cout << "Enter Number of lines : ";
	cin >> n;
	
	string line = "";
	
    auto start = high_resolution_clock::now();

for (int i = 1; i <= n; ++i){
line += to_string(i) + " ";
}

ostringstream output;
for (int i = n; i >= 1; --i){
		output << line << "\n";
	}

cout << output.str(); //flush once
auto stop = high_resolution_clock::now();

auto duration = duration_cast<microseconds>(stop - start);
cout <<"Time taken (in ms) :" <<duration.count() <<endl;
}
