#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	int a, b, t;
	
	cin>>t;
	for(int i = 0; i<t; i++){
	cin>>a>>b;
	printf("Case #%d: %d + %d = %d\n", i+1, a, b, a+b);
	}
	
	return 0;
}