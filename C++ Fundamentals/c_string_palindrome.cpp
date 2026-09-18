#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    cin >> str;

    int left = 0;
    int right = strlen(str) - 1;
    bool palindrome = true;

    while (left < right) {
        if (str[left] != str[right]) {
            palindrome = false;
            break;
        }

        left++;
        right--;
    }

    cout << (palindrome ? "Palindrome" : "Not a palindrome") << endl;
    return 0;
}