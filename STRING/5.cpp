#include<iostream>

using namespace std;

int main(){
	int i=0, check[26]={}, max=0, lot=0, now=0;
	string str;
	
	cin>>str;
	
	while(str[i]!='\0'){
		if(str[i]>='a') check[(str[i]-'a')]++;
		else check[(str[i]-'A')]++;
		i++;
	}
	for(int j=0; j<26; j++){
		if(check[j]>max){
			max=check[j];
			now=j;
			lot=0;
		}
		else if(check[j]==max) lot++;
	}
	if(lot!=0) cout<<"?";
	else if(lot==0) cout<<(char)(now+'A');
	return 0;
}