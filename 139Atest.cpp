    #include<bits/stdc++.h>
    using namespace std;
    void solve(){
        int n;
        cin>>n;
        vector<int> arr(7);
     
        for (int i = 0; i < 7; i++)
        {
            cin>>arr[i];
        }
     
        int j = 0;
        while(n>0){
            n = n - arr[j%7];
            j++;
        }
     
        int ans = ((j-1) % 7) + 1;
        cout<<ans<<endl;
        
    }
    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        solve();
    return 0;
    }