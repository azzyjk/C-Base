#include<iostream>

using namespace std;

int anal(char a){
	if(a<='C') return 3;
	else if(a<='F') return 4;
	else if(a<='I') return 5;
	else if(a<='L') return 6;
	else if(a<='O') return 7;
	else if(a<='S') return 8;
	else if(a<='V') return 9;
	else if(a<='Z') return 10;
}

int main(){
	int sum=0;
	string str;
	
	cin>>str;
	
	for(int i=0; str[i]!='\0'; i++)	sum+=anal(str[i]);
	cout<<sum;
	return 0;
}