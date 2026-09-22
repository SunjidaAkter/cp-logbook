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
    ll n,q;cin>>n>>q;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    ll sum=accumulate(all(v),0);
    vector<ll>pre(n+1,0);
    for(ll i=0;i<n;i++){
        pre[i+1]=pre[i]+v[i];
    }
    // for(ll i=0;i<n+1;i++)cout<<pre[i]<<" ";
    // cout<<nl;
    while(q--){
        ll x,y,k;cin>>x>>y>>k;
        ll tmp=sum-(pre[y]-pre[x-1])+((y-x+1)*k);
        if(tmp%2)yes;
        else no;
    }
}
int main(){
    FAST;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}