#include<bits/stdc++.h>
using namespace std;
void solve(){
    vector<int> arr(3);
    for (int i = 0; i < 3; i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    int ans = (arr[2] - arr[1]) + (arr[1] - arr[0]);
    cout<<ans<<endl;
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     solve();
return 0;
}