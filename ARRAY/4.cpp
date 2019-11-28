#include<iostream>

using namespace std;

int main(){
	int a, b, c, num[10]={'\0'}, sum=0;
	cin>>a>>b>>c;
	sum = a*b*c;
	
	while(sum!=0){
		num[sum%10]++;
		sum=sum/10;
	}
	
	for(int i = 0; i<10; i++){
		cout<<num[i]<<endl;
	}
	return 0;
}