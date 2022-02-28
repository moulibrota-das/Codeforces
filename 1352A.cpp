#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    vector<int> ans;

    int count = 0;
    while (n!=0)
    {
        int d = n%10;
        int res = d*pow(10,count);
        if(res!=0) ans.push_back(res);
        n=n/10;
        count++;
    }
    cout<<ans.size()<<endl;
    for (auto it:ans)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    
    
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