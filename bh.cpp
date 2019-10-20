#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
	long n;
	cin>>n;
	int inTunnel[n];
	int outTunnel[n];
	for(long i=0;i<n;i++)
    {
        cin>>inTunnel[i];
    }
	for(long i=0;i<n;i++)
    {
        cin>>outTunnel[i];
    }
    bool visited[n+1];
    memset(visited, false, sizeof(visited));
	int i=0,j=0;
	int numOfCars=0;
	while(i<n && j<n)
	{
		if(visited[inTunnel[i]])
        i++;
		else if(inTunnel[i] == outTunnel[j])
		{
			visited[inTunnel[i]] = true;
			i++;
			j++;
		}
		else
		{
			visited[outTunnel[j]] = true;
			j++;
			numOfCars++;
		}
	}
	cout<<numOfCars;
}
