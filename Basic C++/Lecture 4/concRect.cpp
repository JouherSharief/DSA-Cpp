#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int size = 2 * n - 1;

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            int top = i;
            int left = j;
            int right = size - 1 - j;
            int bottom = size - 1 - i;

            // Find the minimum distance to any edge
            int min_dist = min(min(top, bottom), min(left, right));
            
            cout << n - min_dist;
        }
        cout << '\n';
    }

    return 0;
}
