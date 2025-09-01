#include <bits/stdc++.h>

using namespace std;

int main(){
    int quantidade_de_vendas = 0;
    int tamanhos;
    cin >> tamanhos;

    vector<int> estoque;
    for(int i = 0; i < tamanhos; i++){
        int quantidade;
        cin >> quantidade;
        estoque.push_back(quantidade);
    }

    int pedidos;
    cin >> pedidos;

    for(int j = 0; j < pedidos; j++){
        int pedido;
        cin >> pedido;
        if(estoque[pedido-1] != 0){
            estoque[pedido-1] = estoque[pedido-1] - 1;
            quantidade_de_vendas += 1;
        }
    }

    cout << quantidade_de_vendas << endl;
    
    return 0;
}