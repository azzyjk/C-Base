#include<iostream>

using namespace std;

int main(){
	int ar[9], max=0, count;
	
	for(int i=0; i<9; i++){
		cin>>ar[i];
		if(max<ar[i]){
			max=ar[i];
			count = i;
		}
	}
	cout<<ar[count]<<endl<<count+1;
	return 0;
}