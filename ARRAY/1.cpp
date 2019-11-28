#include<iostream>

using namespace std;

int main(){
	int n, min, max, num;
	cin>>n;
	
	for(int i=0; i<n; i++){
		cin>>num;
		if(i==0){
			min = num;
			max = num;
		}
		else{
			if(min>num) min=num;
			if(max<num) max=num;
		}
	}
	cout<<min<<" "<<max;
	return 0;
}