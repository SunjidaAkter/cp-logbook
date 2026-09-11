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
    vector<ll>ans;
    for(ll i=0;i<n;i++){
        ll sum=0,cnt=0;
        for(ll j=i+1;j<n;j++){
            if(v[i]<v[j])sum++; 
            if(v[i]>v[j])cnt++; 
        }
        // cout<<n-i<<" n ";
        ans.push_back(max(sum,cnt));
    }
    for(ll x:ans)cout<<x<<" ";
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