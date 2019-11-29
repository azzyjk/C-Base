#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	int C, N, sum=0, avr, count;
	cin>>C;
	for(int i=0; i<C; i++){
		sum = 0;
		avr = 0;
		count = 0;
		
		cin>>N;
		
		int ar[N];
		
		for(int j=0; j<N; j++){
			cin>>ar[j];
			sum+=ar[j];
		}
		avr = sum/N;
		for(int j=0; j<N; j++){
			if(avr<ar[j]) count++;
		}
		printf("%.3lf%%\n", (double)count/N*100);
	}
	return 0;
}