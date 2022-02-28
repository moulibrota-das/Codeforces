#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n,m;
    cin>>n>>m;

    if(m%n !=0 && m%n < n){
        cout<<-1<<endl;
        return;
    }

    long long d = m/n;
    long long count = 0;

    while(d!=1){
        if(d%2 == 0){
            d=d/2;
            count++;
        }
        else if(d%3 == 0){
            d=d/3;
            count++;
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }

    cout<<count<<endl;
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
return 0;
}