#include<iostream>

using namespace std;

int main(){
	int ar[8], acs=0, des=0;
	
	for(int i=0; i<8; i++){
		cin>>ar[i];
	}
	
	for(int i=0; i<8-1; i++){
		if(ar[i]<ar[i+1]) acs++;
		if(ar[i]>ar[i+1]) des++;
	}
	
	if(acs==7) cout<<"ascending";
	else if(des==7) cout<<"descending";
	else cout<<"mixed";
	return 0;
}