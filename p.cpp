#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	         string str,str1;
	         cin>>str>>str1;
	         int len,len1,i,flag=0,j;
	         len=str.length();
	         len1=str1.length();
	         for(i=0;i<len;i++)
	         {
	           for(j=0;j<len1;j++)
	           {
	                  if(str[i]==str1[j])
	                  {
	                           flag=1;
	                           break;
	                  }
	           }
	         }
	         if(flag)
	         {
	             cout<<"Yes"<<endl;   
	         }
	         else
	         {
	              cout<<"No"<<endl;
	         }
	}
	return 0;
}
