#include <iostream>
#include <vector>
#include "Sorting.cpp"
using namespace std;

void imprimir(vector<int> vector){
    for (int i=0;i<vector.size();i++){
        cout << vector[i] << " ";
    }
}


int main(int, char*[]) {
    vector<int> numeros {5,4,3,2,1};
    Sorting myvector(numeros);
    myvector.InsertSort();

    myvector.imprimir();
    return 1;
}