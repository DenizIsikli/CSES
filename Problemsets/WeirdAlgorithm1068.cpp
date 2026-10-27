#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n&1)n=n*3+1;
        else n/=2;
        cout<<n<<" ";
    }
    cout<<endl;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
