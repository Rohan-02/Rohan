#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	string s;
	while(cin>>s)
	{
		for(int i=0;i<s.length();i++)
		{
			if((s[i]>='A')&&(s[i]<='Z'))
			{
				s[i]=toupper(s[i]);
			}
			if((s[i]>='a')&&(s[i]<='z'))
			{
				s[i]=tolower(s[i]);
			}
		}
		cout<<s;
	}
	return 0;
}
