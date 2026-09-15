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
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        st.insert(x);
    }
    if(n==1){
        cout<<1<<nl;
        return;
    }
    vector<ll>v;
    while(st.size()>0){
        v.push_back(*st.begin());
        st.erase(*st.begin());
    }
    ll mx=0,cnt=1;
    n=v.size();
    for(ll i=1;i<n;i++){
        if(v[i]-v[i-1]==1)cnt++;
        else{
            mx=max(mx,cnt);
            cnt=1;
        }
    }
    mx=max(mx,cnt);
    cout<<mx<<nl;
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