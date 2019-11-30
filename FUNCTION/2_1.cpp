#include<iostream>
#include<cstdio>

using namespace std;

int check(int num){
	int sum;
	sum = num;
	
	while(1){		
		if(num==0) break;
		sum += num%10;
		num = num/10;
	}
	return sum;
}

int main(){
	int ar[10001]={'\0',}, sum;
	
	
	for(int i=1; i<=10000; i++){
		sum = check(i);
		if(sum<=10000) ar[sum]++;
		if(ar[i]==0) printf("%d\n", i);
	}
	return 0;
}