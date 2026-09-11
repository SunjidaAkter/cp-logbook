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
    ll n,k;cin>>n>>k;
    vector<ll>b(k);
    vector<ll>v(n);
    vector<pii>p(n);
    for(ll i=0;i<k;i++)cin>>b[i];
    for(ll i=0;i<n;i++)cin>>v[i];
    for(ll i=0;i<n;i++){
        p[i]={v[i],i};
    }
    sort(all(p));
    reverse(all(p));
    vector<ll>ans;
    for(ll i=0;i<p.size();i++){
        for(ll j=1;j<=k+1-p[i].first;j++)ans.push_back(p[i].second+1);
    }
    cout<<ans.size()<<nl;
    for(ll i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
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