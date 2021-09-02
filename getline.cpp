// #include <iostream>
// #include<string>
// using namespace std;
// int main() {
//     int count, i;
//     string text, msg;
//     cout<<"Enter your text:";
//     getline(cin, text);
//     count=0;
//     for(i=0;i<=text.length();i++){
//         msg=text[i];
//         if( msg =" \"){
//             break;
//         }
//     }
//     cout<<msg;
// }

#include <iostream>
#include <string>
using namespace std;
int main() {
    int count, i;
    string msg;
    string text;
    cout << "Enter your text:";
    getline(cin, text);
    count=0;
    for(i=0;i<=text.length();i++){
        msg=text[i];
        if(msg=="'\'"){
            break;
        }
        count++;
    }
    cout <<msg<< endl;
}
