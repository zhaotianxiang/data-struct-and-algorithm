#include<iostream>
#include<string>

using namespace std;

bool isPalindrom(string s, int start, int end) {
    while(start < end) {
        if(s[start++] != s[end--]) {
            return false;
        }
    }
    return true;
}

int main() {
    string str = "bbd";
    cout << isPalindrom(str, 0, str.size()-1) << endl;
    return 0;
}

