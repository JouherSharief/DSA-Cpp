#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> spaces (string sentence) {
    int size = sentence.size();
    vector<int> indices;
    for (int i = 0; i < size; ++i) {
        if (sentence[i] == ' '){
            indices.push_back(i);
            indices.push_back(i+1);
        }
    }
    return indices;
}

int main() {
    string input = "C;M;white sheet of paper";
    string sentence = input.substr(4,input.size()-4);
    vector<int> index = spaces(sentence);
    int size = index.size();
    int sent_size = sentence.size();
    for (int i = 0; i < size; ++i) {
        cout << index[i] << endl;
    }

}