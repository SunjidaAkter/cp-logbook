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
    vector<ll>one;
    vector<ll>two;
    vector<ll>three;
    for(ll i=0;i<n;i++){
        if(v[i]==1)one.push_back(i+1);
        if(v[i]==2)two.push_back(i+1);
        if(v[i]==3)three.push_back(i+1);
    }
    ll mn=min({one.size(),two.size(),three.size()});
    cout<<mn<<nl;
    for(ll i=0;i<mn;i++){
        cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<nl;
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