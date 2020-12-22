#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,b) for(int i=a;i<=b; i++)
#define vi vector<ll>
#define pb push_back
#define pr pair<int,int>
#define ff first
#define ss second
#define mod 1000000007
ll gcd(ll x,ll y)
{
	if(y==0)
	return x;
	else
	return gcd(y,x%y);
}
ll maxfact(ll g,ll n)
{
	ll f=0;
	for(ll i=1; i*i<=g; i++)
	{
		if(g%i==0)
		{
			if(i<=n)
			f=max(f,i);
			else if(g/i<=n)
			f=max(f,g/i);
			
		}
	}
	return f;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		ll n,m,f;
		cin>>n>>m;
		ll a[m];
		f(i,0,m-1)
		cin>>a[i];
		ll g=0;
		for(ll i=0; i<m; i++)
		{
			g=gcd(g,a[i]);
			if(g>n)
			{
				f=maxfact(g,n);
				g=f;
			}
		}
		cout<<n-g<<endl;
	}
}
