#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long a,b,c;
    cin>>a>>b>>c;

    long long ans1=0,ans2=0;

    if(a >= c){
        ans1 = -1;
    }
    else{
        ans1= 1;
    }

    if((c/b) >= a){
        ans2 = -1;
    }
    else{
        ans2 = b;
    }

    cout<<ans1<<" "<<ans2<<endl;


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