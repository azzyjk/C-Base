#include<iostream>

using namespace std;

int main(){
    string str = "";
    int sum = 0;
    getline(cin, str);
    
    for(int i = 1; i<str.length()-1; i++){
        if(str[i] == ' ') sum++;
    }
    cout << sum+1;
    return 0;
}