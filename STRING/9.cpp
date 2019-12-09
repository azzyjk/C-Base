#include<iostream>

using namespace std;

void find(string str, int& num, int& unit){
	if(str[num]=='c'){
		if(str[num+1]=='='){
			unit++;
			num++;
		}
		else if(str[num+1]=='-'){
			unit++;
			num++;
		}
		else unit++;
	}
	else if(str[num]=='d'){
		if(str[num+1]=='z'&&str[num+2]=='='){
			unit++;
			num+=2;
		}
		else if(str[num+1]=='-'){
			unit++;
			num++;
		}
		else unit++;
	}
	else if(str[num+1]=='j'){
		if(str[num]=='l'){
			unit++;
			num++;
		}
		else if(str[num]=='n'){
			unit++;
			num++;
		}
		else unit++;
	}
	else if(str[num+1]=='='){
		if(str[num]=='s'){
			unit++;
			num++;
		}
		else if(str[num]=='z'){
			unit++;
			num++;
		}
	}
	else unit++;
	
}

int main(){
	int unit=0;
	string str;
	
	cin>>str;
	
	for(int i=0; str[i]!='\0'; i++) {
		find(str, i, unit);
		
	}
	cout<<unit;
	return 0;		
}