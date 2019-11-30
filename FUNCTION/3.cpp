#include<iostream>

using namespace std;

bool check(int num){
	int chck[4]={'\0',}, i=0, j=0, res=0, diff=0;
	while(1){
		if(num==0) break;
		chck[i]=num%10;
		num=num/10;
		i++;
	}
	
	if(i==1||i==2) 	return true;
	
	else{
		for(int j=0; j<i-1; j++){
			if(i<=j) break;
			if(j==0){
				diff = chck[j]-chck[j+1];
			}
			else {
				if(diff!=(chck[j]-chck[j+1])) res++;
			}
		}
	}
	if(res==0) 	return true;
	else return false;
}

int main(){
	int N, count=0;
	bool ar[1000];
	
	cin>>N;
	
	for(int i=0; i<N; i++){
		ar[i] = check(i+1);
	}
	
	for(int j=0; j<N; j++){
		if(ar[j]==true) count++;
	}
	cout<<count;
	return 0;
}