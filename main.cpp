#include <iostream>
#include <vector>
#include "Sorting.cpp"
using namespace std;

int main(int, char*[]) {
    vector<int> numeros {5,4,3,2,1};
    Sorting myvector(numeros);
    //myvector.InsertSort();
    //myvector.SelectionSort();
    myvector.BubbleSort();
    myvector.imprimir();
    return 1;
}