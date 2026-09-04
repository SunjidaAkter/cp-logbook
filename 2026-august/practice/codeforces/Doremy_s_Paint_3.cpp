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
    for(ll i=0;i<n;i++){
        cin>>v[i];
        st.insert(v[i]);
    }
    if(st.size()==1)Yes;
    else if(st.size()>2)No;
    else{
        ll cnt=1;
        for(ll i=1;i<n;i++){
            if(v[i]==v[0])cnt++;
        }
        if(n%2){
            if(abs((n-cnt)-cnt)==1)Yes;
            else No;
        }else{
            if(n-cnt==cnt)Yes;
            else No;
        }
    }

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