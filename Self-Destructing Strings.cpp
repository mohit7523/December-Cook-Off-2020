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
		string s;
		cin>>s;
		ll c1=0,c2=0;
		ll n=s.length();
	    for(ll i=0; i<n; i++)
		{
			if(s[i]-'0'==0)
			c1++;
			else
			c2++;
		}
		 int k=abs(c2-c1);
		 if(n%2!=0 || c1==0 || c2==0)
		 cout<<-1<<endl;
		 else
		 cout<<k/2<<endl;
	  }
	 
}
