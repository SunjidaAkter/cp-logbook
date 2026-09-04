#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define nl '\n'
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
#define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
typedef pair<ll,ll>pii;
void solve(){
    ll n;cin>>n;
    vector<ll>v(n);
    ll mn=LLONG_MAX,mx=0,mnIdx,mxIdx;
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        if(mn>=x){
            mn=x;
            mnIdx=i+1;
        }
        if(mx<x){
            mx=x;
            mxIdx=i+1;
        }
    }
    if(mn==mx){
        cout<<0<<nl;
        return;
    }
    ll ans=(mxIdx-1)+(n-mnIdx);
    if(mxIdx>mnIdx)ans--;
    cout<<ans<<nl;
}
int main(){
    FAST;
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}