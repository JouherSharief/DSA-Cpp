#include <iostream>
#include <string>
using namespace std;

string timeConversion(string s) {
    int hour = stoi(s.substr(0,2));
    string am_pm = s.substr(8,2);
    if (hour == 12 && am_pm == "AM") {
        return "00" + s.substr(2,6);
    }else if (hour < 12 && am_pm == "PM") {
        return to_string(hour+12) + s.substr(2,6);
    }else {
        return s.substr(0,8);
    }
}



int main() {
    cout << timeConversion("12:00:00PM");
}