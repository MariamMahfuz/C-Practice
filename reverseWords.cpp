#include <iostream>
#include <bits/stdc++.h>
#include <sstream>

using namespace std;

int main(){
    string line;
    getline(cin, line);
    int l = line.length();
    string arr[l];
    
    int i = 0;
    stringstream ssin(line);
    while (ssin.good() && i < l){
        ssin >> arr[i];
        ++i;
    }
    
    for(i = 0; i < l; i++){
    	reverse(arr[i].begin(), arr[i].end());
    }
    
    for(i = 0; i < l; i++){
    	cout << arr[i] << " ";
    }
}
