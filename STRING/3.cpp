#include<iostream>

using namespace std;

void init(int *ar){
	for(int i=0; i<26; i++){
		ar[i]=-1;
	}
}

int main(){
	int alpha[26]={'\0',}, i=0;
	init(alpha);
	
	string str;
	cin>>str;
	
	while(str[i]!='\0'){
		if(alpha[str[i]-'a']==-1) alpha[str[i]-'a'] = i;
		i++;
	}
	
	for(int j=0; j<26; j++){
		cout<<alpha[j]<<" ";
	}
	return 0;
}