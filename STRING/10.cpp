#include<iostream>

using namespace std;

bool anal(string str){
	int ap[26]={'\0',};
	
	for(int i=0; str[i]!='\0'; i++){
		if(str[i]==str[i+1]) continue;
		else {
			if(ap[str[i]-'a']==0) ap[str[i]-'a']++;
			else return false;
		}
	}
	return true;
}

int main(){
	int N, count=0;
	string str;
	
	cin>>N;
	for(int i=0; i<N; i++){
		cin>>str;
		if(anal(str)==true) count++;
	}
	cout<<count;
	return 0;
}