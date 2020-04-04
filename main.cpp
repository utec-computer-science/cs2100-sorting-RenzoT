#include <iostream>
#include <vector>
#include "Sorting.cpp"
using namespace std;

int main(int, char*[]) {
    vector<int> numeros {40,4,2,3,1};
    Sorting myvector(numeros);
    //Mandatory
    //myvector.InsertSort();
    //myvector.SelectionSort();
    //myvector.BubbleSort();
    //myvector.MergeSort(); ~
    //myvector.HeapSort(); ~
    //myvector.QuickSort(); ~
    //Extra
    //myvector.ShellSort(); ~
    myvector.BinSort();

    myvector.imprimir();
    return 1;
}