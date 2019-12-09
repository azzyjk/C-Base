#include<iostream>

using namespace std;

int main(){
	int word=0;
	string str;
	
	getline(cin, str);
	
	for(int i=0; str[i]!='\0'; i++){
		if(i==0&&str[0]==' ') continue;
		while(str[i]!=' '&&str[i]!='\0'){
			i++;
		}
		word++;
	}
	cout<<word;
	return 0;
}