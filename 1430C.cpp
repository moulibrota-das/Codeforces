#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    cout<<2<<endl;
    cout<<n<<" "<<n-1<<endl;

    if(n == 2){
        return;
    } 

    cout<<n<<" "<<n-2<<endl;

    for (int i = 3; i < n; i++)
    {
        cout<<(n - (i-2))<<" "<<n-i<<endl;
    }
    

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