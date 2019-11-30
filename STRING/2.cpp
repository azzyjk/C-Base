#include<iostream>

using namespace std;

int main(){
	int N, sum=0, i=0;
	string num;
	
	cin>>N>>num;
	
	while(num[i]!='\0'){
		sum+=(int)num[i]-'0';
		i++;
		
	}
	cout<<sum;
	
	return 0;
}