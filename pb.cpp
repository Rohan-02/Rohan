#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;cin>>n;
    int m=0;
    int a[10000],b[10000];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int x;cin>>x;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=x)
        {
            b[i]=a[i];
            m++;
        }
    }
    for(int j=0;j<m;j++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
