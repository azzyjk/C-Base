#include<iostream>

using namespace std;

void set(int ar[][14]){
	int n=0;
	
	for(int i=0; i<14; i++){
		ar[0][i]=i;
	}
	
	for(int i=1; i<14; i++){
		for(int j=1; j<14; j++){
			n=0;
			while(n<=j){
				ar[i][j] += ar[i-1][n];
				n++;
			}
		}
	}
}



int main(){
	int T, k, n;
	int ar[14][14]={'\0',};
	set(ar);
	
	cin>>T;
	for(int i=0; i<T; i++){
		cin>>k>>n;
		cout<<ar[k][n]<<endl;
	}
	return 0;
}