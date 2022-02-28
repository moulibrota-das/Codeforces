#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>>arr (n, vector<char>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    int count = 0;
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i][m-1] == 'R') count++;
    }
    
    for (int i = 0; i < m-1; i++)
    {
        if(arr[n-1][i] == 'D') count++;
    }

    cout<<count<<endl;
    
    
    
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