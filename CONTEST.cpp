#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    // cin>>t;
    while(t--){
       cin>>n;
       ll a[n];
       for(ll i=0;i<n;i++){
        cin>>a[i];
       }
       sort(a,a+n);
       ll res=1;
       for(ll i=0;i<n && res>=a[i] ;i++){

            res=res+a[i];

       }
       cout<<res<<endl;

    }
    return 0;
}