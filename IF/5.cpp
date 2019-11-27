#include<iostream>

using namespace std;

void bubbleSort(int* ar){
	int temp;
	for(int i=0; i<2; i++){
		for(int j=i+1; j<3; j++){
			if(ar[i]>ar[j]) {
				temp = ar[i];
				ar[i] = ar[j];
				ar[j] = temp;
			}
		}
	}
}

int main(){
	int a[3], count=0;
	
	cin>>a[0]>>a[1]>>a[2];
	
	bubbleSort(a);
	
	cout<<a[1];

	
	return 0;
}