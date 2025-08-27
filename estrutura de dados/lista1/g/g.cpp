#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int p, n;
    cin >> n;
    cin >> p;

    long long x = log(n)/log(p);
    cout << x << endl; 

    return 0;
}