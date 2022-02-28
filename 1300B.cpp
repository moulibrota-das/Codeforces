#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    long long l = 2*n;
    vector<long long> arr(l);

    for (long long i = 0; i < l; i++)
    {
        cin>>arr[i];
    }

    sort(arr.begin(), arr.end());
    long long ans = arr[n] - arr[n-1];

    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
return 0;
}