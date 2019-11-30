#include<iostream>
#include<cstdio>

using namespace std;

void check(int* ar){
	int now, sum;
	
	for(int i=1; i<=10000; i++){
		now = i;
		sum = i;
		
		sum+=now/10000;
		now=now%10000;
		sum+=now/1000;
		now=now%1000;
		sum+=now/100;
		now=now%100;
		sum+=now/10;
		now=now%10;
		sum+=now;
	
		if(sum<=10000) ar[sum]++;
	}
}

int main(){
	int ar[10000]={'\0',};
	
	check(ar);
	
	for(int i=1; i<=10000; i++){
		if(ar[i]==0) printf("%d\n", i);//cout<<i<<endl;
	}
	return 0;
}