#include<iostream>

using namespace std;

int main(){
	int ar[10], res[10], count=0;
	
	for(int i=0; i<10; i++){
		cin>>ar[i];
		res[i]=ar[i]%42;
	}
	
	for(int i=0; i<10; i++){
		if(res[i]>=0){
			count++;
			for(int j=i+1; j<10; j++){
				if(res[i]==res[j]) res[j]=-1;
				else continue;
			}
		}
		
	}	
	cout<<count;
	return 0;
}