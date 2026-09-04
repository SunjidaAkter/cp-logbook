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
    string s;cin>>s;
    ll cnt=0,sum=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='.')cnt++,sum++;
        else{
            if(cnt>=3){
                cout<<2<<nl;
                return;
            }
            // sum+=cnt;
            cnt=0;
        }
    }
    if(cnt>=3){
        cout<<2<<nl;
        return;
    }
    cout<<sum<<nl;
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