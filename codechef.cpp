#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;  cin>>t;
	while(t--){
	    int n,k,ans=0;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;cin>>a[i++])
	    for(int i=0;i<n;i++){
	        if(a[i]>k)
	            ans--;
	        else
	            ans=ans+a;
	    }
	    if(ans<0)
		    cout<<"-1"<<endl;
	    else
		    cout<<abs(ans-k-1)<<endl;
	}
	return 0;
}
