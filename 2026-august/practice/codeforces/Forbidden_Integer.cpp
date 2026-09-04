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
    ll n,k,x;cin>>n>>k>>x;
    if(k==1){no;return;}
    if(k==2){
        if(x==2){
            yes;
            cout<<n<<nl;
            for(ll i=1;i<=n;i++)cout<<1<<" ";
            cout<<nl;
        }else{
            if(n%2)no;
            else{
                yes;
                cout<<n/2<<nl;
                for(ll i=1;i<=n/2;i++)cout<<2<<" ";
                cout<<nl;
            }
        }
        return;
    }
    if(x!=1){
        yes;
        cout<<n<<nl;
        for(ll i=1;i<=n;i++)cout<<1<<" ";
        cout<<nl;
    }else{
        if(n%2==0){
            yes;
            cout<<n/2<<nl;
            for(ll i=1;i<=n/2;i++)cout<<2<<" ";
            cout<<nl;
        }else{
            if(n==3){
                yes;
                cout<<1<<nl;
                cout<<3<<nl;
            }else{
                yes;
                cout<<((n-3)/2)+1<<nl;
                cout<<3<<" ";
                for(ll i=1;i<=((n-3)/2);i++)cout<<2<<" ";
                cout<<nl;
            }
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