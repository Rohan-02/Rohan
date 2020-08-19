#include <bits/stdc++.h>   
using namespace std;
int main()
{
	int n,sum=0;
	char a[100000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if((a[i]-'0')%2==0)
		{
			sum+=i+1;
		}
	}
	cout<<sum<<endl;
	return 0;
}
