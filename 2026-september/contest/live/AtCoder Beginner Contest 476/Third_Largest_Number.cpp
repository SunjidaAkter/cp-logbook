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
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    pq.push(v[0]);
    pq.push(v[1]);
    pq.push(v[2]);
    for(ll i=3;i<n;i++){
        cout<<pq.top()<<nl;
        if(pq.top()>v[i])continue;
        pq.pop();
        pq.push(v[i]);
    }
    cout<<pq.top()<<nl;
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