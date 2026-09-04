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
    set<ll>st;
    ll p;cin>>p;
    while(p--){
        ll x;cin>>x;
        st.insert(x);
    }
    ll q;cin>>q;
    while(q--){
        ll x;cin>>x;
        st.insert(x);
    }
    if(st.size()==n)cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
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