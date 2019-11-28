#include<iostream>

using namespace std;

void div(int& a, int& b, int num){
	if(num<10){
		a=0;
		b=num;
	}
	else{
		a=num/10;
		b=num%10;
	}
}

int main(){
	int count=0, n, number, a, b, a1, b1;
	cin>>n;
	number = n;
	
	do{
		div(a, b, n);
		n=a+b;
		n = (b*10)+(n%10);
		
		count++;
	}while(n!=number);
	
	cout<<count;
	
	return 0;
}