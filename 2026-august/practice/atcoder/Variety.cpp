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
    ll n,k,m;cin>>n>>k>>m;
    vector<pii>v(n);
    for(ll i=0;i<n;i++)cin>>v[i].second>>v[i].first;
    sort(v.rbegin(),v.rend());
    map<ll,ll>mp;
    ll sum=0;
    for(ll i=0;i<n;i++){
        if(k==0)break;
        if(mp.size()<m){
            if(mp[v[i].second]==0){
                sum+=v[i].first;
                mp[v[i].second]++;
                v[i].second=0;
                k--;
            }else continue;
        }else break;
    }
    ll i=0;
    while(k--&&i<n){
        while(i<n&&v[i].second==0)i++;
        sum+=v[i].first;
        i++;
    }
    cout<<sum<<nl;
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