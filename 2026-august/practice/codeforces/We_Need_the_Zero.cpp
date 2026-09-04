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
    ll sum=0;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
        sum=sum xor v[i];
        // st.insert(x);
    }
    ll ans=0;
    for(ll i=0;i<n;i++){
        // cin>>v[i];
        ans=ans xor (v[i] xor sum);
        // st.insert(x);
    }
    if(ans==0)cout<<sum<<nl;
    else cout<<-1<<nl;
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