#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

void sortString(string &str)
{
    sort(str.begin(), str.end());
    cout << str;
}
int main()
{
    string S, Q;
    getline(cin, S);

    cout << "The initial string is : ";
    cout << S << endl;

    Q = S.pop_back();
    cout << "The string after pop_back operation is : ";
    cout << Q << endl;

    //PRINTING FIRST CHARACTER
    cout << "FIRST CHARACTER:" << S[0] << endl;
    //PRINTING last CHARACTER
    cout << "Last CHARACTER:" << S[S.length()] << endl;

    sortString(S);
    return 0;
}