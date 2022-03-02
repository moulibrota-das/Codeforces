#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;

    if(n==1){
        cout<<1<<endl;
        return;
    }

    long long ans = 0;
    long long temp = n;

    for (int i = 0; i < n; i++)
    {
        ans += (temp - i) + (temp - i - 1)*i;
    }
    

    cout<<ans<<endl;
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();

return 0;
}