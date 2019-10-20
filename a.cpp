#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    int arr[n],arr_half[n];

    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

   int sum1=0; 
 for(int i=0;i<n;i++) {
     arr_half[i]=arr[i]/2;
     sum1+=arr_half[i];
    }

    for(int i=0;i<n;i++){
        if(abs(arr[i])%2==0) continue;
        if(sum1<0) {
            if(arr[i]>0) {
                arr_half[i]++;
                sum1++;
            }
        }
        else if(sum1>0) {
            if(arr[i]<0){
               arr_half[i]--; 
               sum1--;
            }
        }
    }
 
    for(int i=0;i<n;i++){
        cout<<arr_half[i]<<endl;
    }
    return 0;
}
