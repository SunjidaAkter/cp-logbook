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
    ll two=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==2)two++;
    }
    if(two==0){
        cout<<1<<nl;
        return;
    }
    ll cnt=0;
    if(two%2==0){
        for(ll i=0;i<n;i++){
            if(v[i]==2)cnt++;
            if(cnt==(two/2)){
                cout<<i+1<<nl;
                return;
            }
        }
    }else cout<<-1<<nl;
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