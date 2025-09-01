#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    
    vector<int> notas;

    for (int i = 0; i < n; i++)
    {
        int nota;
        cin >> nota;
        notas.push_back(nota);
    }

    sort(notas.begin(), notas.end());
    
    cout << notas[n-k] << endl;

    return 0;
}