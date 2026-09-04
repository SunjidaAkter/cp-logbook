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
    vector<vector<ll>>v(n);
    vector<ll>ans(2*n,0);
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            ll x;cin>>x;
            v[i].push_back(x);
        }
    }
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            ans[i+j+1]=v[i][j];
            mp[v[i][j]]=1;
        }
    }
    for(ll i=1;i<=2*n;i++){
        if(mp[i]!=1){ans[0]=i;break;}
    }
    for(auto x:ans)cout<<x<<" ";
    cout<<nl;
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