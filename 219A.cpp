#include<bits/stdc++.h>
using namespace std;
void solve(){
    int k;
    cin>>k;
    string s;
    cin>>s;

    if(s.size() % k != 0){
        cout<<-1<<endl;
        return;
    }
    if(k == 1){
        cout<<s<<endl;
        return;
    }

    map<char, int> map;

    for(char it:s){
        map[it]++;
    }

    string ans = "";
    for(auto it:map){
        if(it.second % k != 0){
            cout<<-1<<endl;
            return;
        }
        int n = it.second / k;

        for (int i = 0; i < n; i++)
        {
            ans += it.first;
        }
        
    }
    string res="";
    for (int i = 0; i < k; i++)
    {
        res += ans;
    }

    cout<<res<<endl;
    

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

return 0;
}