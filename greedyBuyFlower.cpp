#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i,j=0;
	cin>>n>>k;
	vector<int> c(n),t(k);
	for(i=0;i<n;i++)
	{
		cin>>c[i];
	}
	for(i=0;i<n;i++)
	{
		t[i]=0;
	}
	int total=0;
	sort(c.begin(),c.end());
	for(i=n-1;i>=0;i--)
	{
		total+=(t[i]+1)*c[i];
		t[j]++;
		j=(j+1)%k;
		
	}
	cout<<total<<endl;
	
	
}
