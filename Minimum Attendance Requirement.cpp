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
	int t,n;
	cin>>t;
	while(t--)
	{
		int cnt=0;
		cin>>n;
		string s;
		cin>>s;
		f(i,0,n-1)
		{
			if(s[i]-'0'==0)
			{
				cnt++;
			}
		}
			int m=((120-cnt)*100/120);
			if(m>=75)
			cout<<"YES"<<endl;
			else
			cout<<"NO"<<endl;			
		
	}
}
