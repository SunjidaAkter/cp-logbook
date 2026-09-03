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
    for(ll i=0;i<n;i++)cin>>v[i];
    vector<pii>p;
    vector<ll>ans;
    for(ll i=0;i<n;i++){
        if(v[i]>0){
            ll st=i+1;
            while(v[i]>0&&i<n){
                i++;
            }
            ll en=i;
            p.push_back({st,en});
        }
    }
    for(ll i=0;i<p.size();i++){
        ans.push_back(p[i].second);
    }
    reverse(all(p));
    for(ll i=0;i<p.size();i++){
        if(p[i].first-1==0)continue;
        ans.push_back(p[i].first-1);
    }
    cout<<ans.size()<<nl;
    for(ll i=0;i<ans.size();i++)cout<<ans[i]<<" ";
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