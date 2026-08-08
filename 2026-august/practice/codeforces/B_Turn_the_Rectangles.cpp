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
    vector<pii>v(n);
    for(ll i=0;i<n;i++)cin>>v[i].first>>v[i].second;
    ll x=max(v[0].first,v[0].second);
    for(ll i=1;i<n;i++){
        // cout<<x<<" chk ";
        if(v[i].first>v[i].second)swap(v[i].first,v[i].second);
        if(x<v[i].first&&x<v[i].second){
            no;return;
        }
        if(x<v[i].second)x=v[i].first;
        else x=v[i].second;
    }
    yes;
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