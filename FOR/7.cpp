#include<iostream>

using namespace std;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	int a, b, T;
	
	cin>>T;
	
	for(int i=0; i<T; i++){
		cin>>a>>b;
		cout<<"Case #"<<i+1<<": "<<a+b<<"\n";
	}
	return 0;
}