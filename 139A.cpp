#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> arr(7);
    int temp = n;

    for (int i = 0; i < 7; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < temp; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if((n - arr[j]) <= 0){
                cout<<j+1<<endl;
                return;
            }
            else{
                n = n - arr[j];
            }
        }
        
    }
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}