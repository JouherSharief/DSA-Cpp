#include <iostream>
#include <string>
using namespace std;

int main() {
    string greet = "Hello World";
    cout << greet <<endl;
    // String Concatination

    string statement_1 = "Jouher";
    string statement_2 = " Sharief";

    cout << statement_1+statement_2 <<endl;
    // string concatenation using append function
    string full_statement = statement_1.append(statement_2);
    cout << full_statement << endl;
    // finding the lenght of a string using length method.
    cout << statement_1.length() << '\n' << statement_2.length() <<'\n' <<full_statement.length() <<endl;

    //accessing string 
    string new_sent = "I'm Jouher Sharief";
    cout << new_sent[11] << endl;

    // print the first,second and the last character of the string new_sent

    cout << new_sent[0] << '\t' << new_sent[1] << '\t' << new_sent[new_sent.length()-1] <<endl;

    // changing a character in a string 

    new_sent[1] = 'a';
    cout << new_sent << endl;

    // using at() function to access elements

    cout << new_sent.at(0) << '\t' << new_sent.at(1) << '\t' << new_sent.at(new_sent.length() -1) << endl;

    new_sent.at(1) = '\'';
    cout << new_sent << endl;
}