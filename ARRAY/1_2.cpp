#include<iostream>

using namespace std;

int main(){
	int n, min, max=-1000000, num=-max;
	cin>>n;
	
	for(int i=0; i<n; i++){
		cin>>num;
			if(min>num) min=num;
			if(max<num) max=num;
	}
	cout<<min<<" "<<max;
	return 0;
}