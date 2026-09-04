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
    ll mn=LLONG_MAX;
    set<ll>st;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){cin>>v[i];st.insert(v[i]);}
    if(!is_sorted(all(v))){cout<<0<<nl;return;}
    if(st.size()!=n){cout<<1<<nl;return;}
    for(ll i=1;i<n;i++){
        mn=min(mn,v[i]-v[i-1]);
    }
    mn--;
    cout<<(mn/2)+(mn%2)+1<<nl;
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