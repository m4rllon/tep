#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    long long p1,c1,p2,c2;

    cin >> p1 >> c1 >> p2 >> c2;

    if((p1*c1) == (p2*c2)) cout << 0;
    else if((p1*c1) > (p2*c2)) cout << -1;
    else cout << 1;


    return 0;
}