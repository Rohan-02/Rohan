#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str1,str2;
	    cin>>str1>>str2;
	    int l=0,p=0;
	    for(int i=0;i<str1.length();i++)
	    {
	        if(str1[i]=='?'||str2[i]=='?')
	            l+=1;
	        else if(str1[i]!=str2[i])
	        {
	            l+=1;
	            p+=1;
	        }
	    }
	    cout<<p<<" "<<l<<endl;
	}
	return 0;
}
