#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    
    long long n = s.size();
    for (long long i = 0; i < n; i++)
    {   
        if(i == 0 && s[i] == '9'){
            continue;
        }
        else if(s[i] > '4'){
            s[i] = '9' - (s[i] - '0');
        }
    }

    if(s=="") cout<<0<<endl;
    else    cout<<s<<endl;

return 0;
}