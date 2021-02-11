#include<bits/stdc++.h>
#include<vector>
#define pb push_back
#define ll long long int
using namespace std;
  
  void MaxToy(ll n,vector<ll>v,ll k)
  {
      sort(v.begin(),v.end());
      int cap=0,count=0;
          for(int i=0;i<n;i++)
          {
              if(cap+v[i]<=k)
              {
                  cap+=v[i];
                  count++;
              }
              
          
           }
           vector<ll>::iterator it;
           for(it=v.begin();it!=v.end();it++)
           {
           	cout<<*it<<" ";
		   }

      
      cout<<count<<endl;
 

  }
signed main()
{
    ll n,i,k;
    cin>>n>>k;
    vector<ll> v;
    for(i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        v.pb(a);
        // cout<<MaxToy(n,v)<<endl 
    }
     MaxToy(n,v,k);
}

