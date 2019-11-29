#include<iostream>

using namespace std;

int main(){
	int n, max=0;
	cin>>n;
	double ar[n], sum=0;
	cout.precision(5);
	for(int i=0; i<(sizeof(ar)/sizeof(double)); i++){
		cin>>ar[i];
		if(max<ar[i]) max = ar[i];
	}
	
	for(int i=0; i<(sizeof(ar)/sizeof(double)); i++){
		ar[i]=ar[i]/max*100;
		sum+=ar[i];
	}
	cout<<sum/(sizeof(ar)/sizeof(double));
	
	return 0;
}