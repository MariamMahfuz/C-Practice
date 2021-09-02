#include<iostream>
using namespace std;
int main(){
    string S,T,W,SUM;
    int i,j;
    cout<<"Enter two string here:";
    cin>>S>>T;
    i=0;
    j=0;
    for((i=0 && j=0);(i<=S.length() && j<=T.length());(i++ && j++)){
        SUM=S[0]+T[0];
        W=SUM+S[i]+T[j];
    } 
    cout<<W;
}