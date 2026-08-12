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
    string a,b;cin>>a>>b;
    for(ll i=0;i<a.size();i++){
        a[i]=tolower(a[i]);
        b[i]=tolower(b[i]);
    }
    if(a==b)cout<<0<<nl;
    if(a<b)cout<<-1<<nl;
    if(a>b)cout<<1<<nl;
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