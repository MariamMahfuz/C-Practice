// question g

#include <string>
#include <algorithm>
#include <cctype>
#include <iostream>

using namespace std;

char change_case (char c) {
    if (std::isupper(c)) 
        return std::tolower(c); 
    else
        return std::toupper(c); 
}

int main() {
    string str;
    getline(cin, str);
    replace(str.begin(), str.end(), ',', ' ');     
    transform(str.begin(), str.end(), str.begin(), change_case);
    cout << str;
    return 0;
}