#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int c1,c2,c3;

    cin >> c1;
    cin >> c2;
    cin >> c3;
    if(c1 == c2) {
        cout << c1 << endl;
        return 0;
    }
    if(c3 == c2 || c3 == c1) {
        cout << c3 << endl;
        return 0;
    }

    if((c2 < c1 && c1 < c3) || (c3 < c1 && c1 < c2)) cout << c1 << endl;
    else if((c1 < c2 && c2 < c3) || (c3 < c2 && c2 < c1)) cout << c2 << endl;
    else if((c1 < c3 && c3 < c2) || (c2 < c3 && c3 < c1)) cout << c3 << endl;

    return 0;
}