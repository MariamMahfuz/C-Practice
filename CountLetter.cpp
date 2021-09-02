
#include <iostream>
using namespace std;
int main() {
   char str[100];
   char c = 'a';

   cin >> str;
   while (c <= 'z') {
    int count = 0;
        for(int i = 0; str[i] != '\0'; i++) {
            if(str[i] == c)
            count++;
        }
    if (count != 0) {
        cout << c << " : " << count << endl;
        }
    c++;
   }
   
   return 0;
}
