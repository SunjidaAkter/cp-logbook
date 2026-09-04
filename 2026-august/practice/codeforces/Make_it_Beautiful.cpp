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
    set<ll>st;
    for(ll i=0;i<n;i++){cin>>v[i];st.insert(v[i]);}
    sort(all(v));
    reverse(all(v));
    if(n==1){
        yes;
        cout<<v[0]<<nl;
        return;
    }
    if(st.size()==1){
        no;
        return;
    }
    yes;
    ll cnt=0;
    for(ll i=1;i<n;i++){
        if(v[0]==v[i])cnt++;
    }
    cout<<v[0]<<" ";
    if(cnt>0){
        for(ll i=1;i<n;i++){
            if(v[i]!=v[0])cout<<v[i]<<" ";
        }    
        for(ll i=0;i<cnt;i++){
            cout<<v[0]<<" ";
        }    
        cout<<nl;
        return;
    }
    for(ll i=1;i<n;i++){
        cout<<v[i]<<" ";
    }    
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