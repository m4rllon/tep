#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& arr, int l, int mid, int r){
    int n1 = mid - l + 1;
    int n2 = r - mid;

    // CRIANDO LISTAS TEMPORÁRIAS
    vector<int> a(n1);
    vector<int> b(n2);

    // ADICIONANDO OS ELEMENTOS A ESSAS LISTAS TEMPORÁRIAS
    for(int i = 0; i < n1; i++) a[i] = arr[l + i];
    for(int i = 0; i < n2; i++) b[i] = arr[mid + i + 1];

    int i = 0;
    int j = 0;
    int k = l;

    while( i < n1 && j < n2){
        if(a[i] < b[j]){
            arr[k] = a[i];
            k++;
            i++;
        } else {
            arr[k] = b[j];
            k++;
            j++;
        }
    }

    while(i < n1){
        arr[k] = a[i];
        k++;
        i++;
    }
    while(j < n2){
        arr[k] = b[j];
            k++;
            j++;
    }
}

void mergesort(vector<int>& arr, int l, int r){
    if(l < r){
        int mid = (l+r)/2;
        mergesort(arr, l, mid);
        mergesort(arr, mid+1, r);

        merge(arr, l, mid, r);
    }
}

int main(){
    ios::sync_with_stdio(false);

    vector<int> notas;
    int n, k;

    cin >> n >> k;

    for(int i = 0; i < n; i++){
        int nota;
        cin >> nota;
        notas.push_back(nota);
    }

    mergesort(notas, 0, n-1);
    
    cout << notas[n-k] << endl;

    return 0;
}