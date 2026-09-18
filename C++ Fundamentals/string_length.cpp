#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    char cString[] = "Hello";
    string cppString = "Hello";

    cout << strlen(cString) << endl;
    cout << cppString.length() << endl;

    return 0;
}