#include <iostream>
using namespace std;
int main()
{
    int number, mod, sum;
    cout << "Enter your number:";
    cin >> number;
    sum = 0;
    while(number> 0){
            mod = number % 10;
            sum = sum + mod;
            number=number/10;
    }
    if(sum<=9){
        cout<< sum;
    }
    else{
        cout<<"Sorry,your number doesnt match the condition";
    }
}