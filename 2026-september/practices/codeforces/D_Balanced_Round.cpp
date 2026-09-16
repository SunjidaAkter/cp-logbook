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
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    sort(all(v));
    // for(ll i=0;i<n;i++)cout<<v[i]<<" ";
    // cout<<nl;
    ll cnt=1,mx=1;
    for(ll i=1;i<n;i++){
        if(v[i]-v[i-1]<=k)cnt++;
        else{
            mx=max(mx,cnt);
            cnt=1;
        }
    }
    mx=max(mx,cnt);
    cout<<n-mx<<nl;
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