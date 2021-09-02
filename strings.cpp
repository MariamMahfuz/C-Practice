#include<iostream>
using namespace std;
int main(){
    string S, T;
    cout<<"Enter the strings:";
    cin>>S>>T;
    cout<<S.length( )<<"\t"<<T.length()<<endl;
    cout<<S+T<<endl;
    
     char temp = S[0]; 
     S[0] = T[0];
     T[0] = temp;
    cout<<S+T<<endl;     
}