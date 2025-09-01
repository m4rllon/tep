#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;

    cin >> n;

    vector<int> s;
    for(int i=0; i <n;i++){
        int a;
        cin >> a;
        s.push_back(a);
    }

    int c = n-1, soma;
    soma = s[0] + s[c];
    for(int j = 0; j <= n/2; j++){
        if(soma != s[j] + s[c]) {
            cout << 'N';
            return 0;
        }
        c -= 1;
    }

    cout << 'S' << '\n';

    return 0;
}