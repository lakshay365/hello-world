// knights on a polygon table
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool compare(const pair< pair<ll, ll>,ll>&i, const pair< pair<int, int>,ll>&j)
{
    return i.first.second < j.first.second;
}

int main()
{
  ll n,k,i,sum=0,j=0;
  cin>>n>>k;
  ll p[n],c[n];
  pair< pair <ll,ll> , ll > knight[n];
  for(i=0;i<n;i++) cin>>p[i];
  for(i=0;i<n;i++) cin>>c[i];
  for(i=0;i<n;i++)
  {
    knight[i] = make_pair(make_pair(p[i],c[i]),i);
    knight1[i] = make_pair(make_pair(p[i],c[i]),i)
  }
  sort(knight , knight+n);
  sort(knight1 , knight1+n, compare);
  for(i=0;i<n;i++)
  {
    if(i<=k)
    {
      sum+=knight[i].first.second;
    }
    else
    {
      sum+=knight[i].first.second;
      for(i=0;i<)
      sum-=knight[i-k-1].first.second;
    }
    c[knight[i].second]=sum;
  }

  for(i=0;i<n;i++) cout<<c[i]<<" ";
  cout<<endl;

}
