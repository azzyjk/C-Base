#include<iostream>

using namespace std;

int main(){
	int N, sum;
	cin>>N;
	
	if(N>=5){
		sum+=N/5;
		N=N%5;
		if((N%3)!=0) {
			N=sum*5+N;
			if((N%3)==0) cout<<N/3;
			else cout<<"-1";
			
		}
		else {
			sum+=N/3;
			cout<<sum;
		}
	}
	else {
		cout<<"-1";
	}
	return 0;
}