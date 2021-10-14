#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define ull unsigned long long
#define pb push_back
#define ff first
#define ss second
#define mod 1000000007
#define endl "\n" 
//Manish Rai
inline void fast()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main()
{
  fast();
  int tc;
  cin>>tc;
  while(tc--)
  {
    ll n;
    cin>>n;
    vector<ll>v(n+2);
    ll sum=0;
    for(ll i=0;i<n+2;i++)
    {
      cin>>v[i];
      sum+=v[i];
    }
    sort(v.begin(),v.end());
    ll sum1=sum-v[n+1];
    ll sum2=sum-v[n]-v[n+1];
    int flag1=0,flag2=0;
    for(ll i=0;i<n+1;i++)
    {
      if(sum1-v[i]==v[n+1])
      {
        flag1=1;
        v.erase(v.begin()+i);
        break;
      }
    }
    if(!flag1)
    {
      if(sum2==v[n])
      {
        flag2=1;
      }
    }
    if(flag1 || flag2)
    {
      for(ll i=0;i<n;i++)
      {
        cout<<v[i]<<' ';
      }
      cout<<endl;
    }
    else
    {
      cout<<-1<<endl;
    }
  } 
}
