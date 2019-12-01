#include<iostream>

using namespace std;

int main(){
	int T, R, k=0;
	string S;
	
	cin>>T;
	
	for(int i=0; i<T; i++){
		cin>>R>>S;
		k=0;
		while(S[k]!='\0'){
			for(int j=0; j<R; j++){
				cout<<S[k];
			}
			k++;
		}
		cout<<endl;
	}
	return 0;
}