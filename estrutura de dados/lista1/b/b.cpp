#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    long long n;
    cin >> n;
    
    long long r = ((n+1) * (n+2))/2;

    cout << r << endl;

    return 0;
}