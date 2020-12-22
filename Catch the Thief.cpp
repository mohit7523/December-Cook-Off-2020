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
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll x,y,k,n;
		cin>>x>>y>>k>>n;
		if(abs(x-y)%(2*k)==0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}
