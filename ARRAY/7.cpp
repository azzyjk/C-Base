#include<iostream>

using namespace std;

void reset(int* ar){
	for(int i=0; i<80; i++){
		ar[i]=0;
	}
}

int main(){
	int t, score=0, j=0;
	string str;
	cin>>t;
	int scr[80]={'\0'};
	
	for(int i=0; i<t; i++){
		reset(scr);
		score=0;
		j=0;
		cin>>str;
		while(str[j]!='\0'){
			if(str[j]=='O'){
				if(j==0) scr[j]=1;
				else scr[j]=scr[j-1]+1;
			}
			j++;
		}
		for(int k=0; k<80; k++) score+=scr[k];
		cout<<score<<endl;
	}
	
	return 0;
}