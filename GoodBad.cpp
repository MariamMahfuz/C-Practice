#include<iostream>
#include <string.h>
using namespace std;
int main(){
    string S;
    cin>>S;
    if((S.substr() == "101") || (S.substr() == "010")){
        cout<<"Good";
    }
    else{
        cout<<"Bad";
    }

}