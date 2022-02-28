#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int c =0;
    while(t--){
        string x;
        cin>>x;
        if(x=="++X" || x=="X++"){
            ++c;
        }
        else{
            c--;
        }
    }
    cout<<c<<endl;
return 0;
}