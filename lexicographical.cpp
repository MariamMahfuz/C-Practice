#include<iostream>
#include <string>
#include <boost/algorithm/string.hpp>
using namespace std;
int main(){
    string A,B;
    cout<<"Enter two strings:";
    cin>>A>>B;
    string newData1 = boost::to_lower_copy(A);
    string newData2 = boost::to_lower_copy(B);
    if(A.length()>B.length()){
        cout<<newData1;
    }
    else{
        cout<<newData2;
    }
}