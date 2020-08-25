#include<bits/stdc++.h>
using namespace std;
int main(){
	string abc;
	getline(cin,abc);
	 for(int i=0;abc[i]!='\0';i++){
	 		if(isalpha(abc[i])){
	 			if(abc[i]>='a'&&abc[i]<='z')
	 		    	abc[i]-=32;
	 			else if(abc[i]>='A'&&abc[i]<='Z')
	 		    	abc[i]+=32;
	 	}
	 }
	cout<<abc<<endl;
	return 0;
}
