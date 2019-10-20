/*
 * =====================================================================================
 *
 *       Filename:  a.cpp
 *
 *    Description:  virtual
 *
 *        Version:  1.0
 *        Created:  Monday 15 April 2019 07:25:22  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  P Sai Kishore (jade_belk), 
 *        Company:  
 *
 * =====================================================================================
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    
    ll i,suma=0,sumb=0,n;

    ll a[3],b[3];
    for(i=0;i<3;i++){
        cin>>a[i];
        suma+=a[i];
    }
    for(i=0;i<3;i++)
    {
        cin>>b[i];
        sumb+=b[i];
    }
    cin>>n;

    suma=(int)ceil((float)suma/5);sumb=(int)ceil((float)sumb/10);

    if(suma+sumb<=n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    
        
}
