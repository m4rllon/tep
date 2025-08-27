#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    long long dias, saldo_inicial, aux;
    cin >> dias >> saldo_inicial;

    aux = saldo_inicial;

    for(long long i = 0; i < dias; i++){
        long long transacao;
        cin >> transacao;
        
        saldo_inicial += transacao;
        if(saldo_inicial <= aux) aux = saldo_inicial;
    }

    cout << aux << endl;

    return 0;
}