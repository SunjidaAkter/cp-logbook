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
    ll n,m;cin>>n>>m;
    multiset<ll>tickets;
    for(ll i=0;i<n;i++){
        ll ticket;cin>>ticket;
        tickets.insert(ticket);
    }
    vector<ll>customers(m);
    for(ll i=0;i<m;i++){
        cin>>customers[i];
        ll ans=-1;
        auto it=tickets.upper_bound(customers[i]);
        if(it!=tickets.begin()){
            it--;
            ans=*it;
            tickets.erase(it);
        }
        cout<<ans<<nl;
    }
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