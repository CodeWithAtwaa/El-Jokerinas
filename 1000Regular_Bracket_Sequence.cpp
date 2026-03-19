#include <bits/stdc++.h>
using namespace std;

bool isValid(string s){
    int bal = 0;
    for(char c : s){
        if(c == '(') bal++;
        else bal--;
        if(bal < 0) return false;
    }
    return bal == 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int n = s.size();

        if(n % 2){
            cout << "NO\n";
            continue;
        }

        int need_open = n/2 - 1;

        for(int i = 0; i < n; i++){
            if(s[i] == '?'){
                if(need_open > 0){
                    s[i] = '(';
                    need_open--;
                }else{
                    s[i] = ')';
                }
            }
        }

        cout << (isValid(s) ? "YES\n" : "NO\n");
    }
}