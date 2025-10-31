#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    cout << "Input: ";
    cin >> text;

    bool Palindrome = true;
    int length = text.length();

    for (int i = 0; i < length / 2; i++) {
        if (text[i] != text[length - 1 - i]) {
            Palindrome = false;
            break;
        }
    }

    if (Palindrome)
        cout << '"' << text << '"' << " adalah palindrome" << endl;
    else
        cout << '"' << text << '"' << " bukan palindrome" << endl;

    return 0;
}
