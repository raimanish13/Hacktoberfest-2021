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
}
int main()
{
  fast();
  int tc=1;
  while(tc--)
  {
    int n,q;
    cin>>n>>q;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    while(q--)
    {
        int x;
        cin>>x;
       int f=find(arr.begin(),arr.end(),x)-arr.begin();
       cout<<f+1<<' ';
      rotate(arr.begin(),arr.begin()+f,arr.begin()+f+1);
    }
  }
}
