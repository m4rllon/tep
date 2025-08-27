#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int vit=0, der=0;

    char game;
    while(cin >> game){
        if(game=='V') vit += 1;
        else der += 1;
    }

    if(vit >= 5) cout << 1;
    else if(vit >= 3) cout << 2;
    else if(vit >= 1) cout << 3;
    else cout << -1;

    return 0;
}