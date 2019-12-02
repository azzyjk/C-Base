#include<iostream>

using namespace std;

int main(){
	int a, b, c, i=1;
	cin>>a>>b>>c;
	
	while(1){
		if((c-b)<=0){
			cout<<-1;
			break;
		}
		else{
			if(a>=((c-b)*i)) i++;
			else if(a<((c-b)*i)){
				cout<<i;
				break;
			}
		}
	}
	return 0;
}