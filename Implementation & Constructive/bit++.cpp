#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans = 0;
    while(n--){
        string s;
        cin >> s;
        if(s[0] == '+' or s[2] == '+'){
            ans++;
        }else if(s[0] == '-' or s[2] == '-'){
            ans--;
        }
    }
    cout << ans << endl;
    return 0;
}