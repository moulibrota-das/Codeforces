#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;

    vector<char> e(m,'#');
    vector<char> o(m,'.');
    o[0] = '#';

    for (int i = 0; i < n; i++)
    {   
        
        if(i%2 == 0){
            for(auto it : e){
                cout<<it;
            }
        }
        else{
            reverse(o.begin(), o.end());
            for(auto it : o){
                cout<<it;
            }
        }
        cout<<endl;
    }
    
return 0;
}