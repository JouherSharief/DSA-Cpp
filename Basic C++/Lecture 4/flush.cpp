#include <iostream>
#include <sstream>
using namespace std;

int main(){
	int n;
    cout << "Enter Number of lines : ";
	cin >> n;
	
	string line = "";
	

for (int i = 1; i <= n; ++i){
line += to_string(i) + " ";
}

ostringstream output;
for (int i = n; i >= 1; --i){
		output << line << "\n";
	}

cout << output.str(); //flush once

}