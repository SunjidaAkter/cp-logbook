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
    vector<string>v(10);
    for(ll i=1;i<=10;i++)cin>>v[i-1];
    ll sum=0;
    for(ll i=0;i<10;i++){
        for(ll j=0;j<10;j++){
            if(v[i][j]=='X'){
                for(ll k=1;k<=5;k++){
                    if((i==(k-1)||i==(10-k))&&((k-1)<=j&&j<=(10-k)))sum+=k;
                }
                for(ll k=1;k<=5;k++){
                    if((j==(k-1)||j==(10-k))&&((k)<=i&&i<=(10-k-1)))sum+=k;
                }
            }
        }
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