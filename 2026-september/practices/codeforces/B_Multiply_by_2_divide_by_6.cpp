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
    if(n==1){
        cout<<0<<nl;
        return;
    }
    if(n%3!=0){
        cout<<-1<<nl;
        return;
    }
    ll cnt2=0,cnt3=0;
    while(n%2==0&&n>1){
        cnt2++;
        n/=2;
    }
    while(n%3==0&&n>1){
        cnt3++;
        n/=3;
    }
    if(n!=1){
        cout<<-1<<nl;
        return;
    }
    if(cnt3<cnt2){
        cout<<-1<<nl;
        return;
    }
    cout<<cnt3+(cnt3-cnt2)<<nl;
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