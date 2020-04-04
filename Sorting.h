//
// Created by Renzo on 1/04/2020.
//

#ifndef CS2100_SORTING_RENZOT_SORTING_H
#define CS2100_SORTING_RENZOT_SORTING_H

#include <vector>
#include <algorithm>
using namespace std;

class Sorting {
private:
    vector<int> myvec;
public:
    Sorting(const vector<int> &myvec);
    int PosMin(int i, int j);
    void Intercambia(int i, int pmin);
    void imprimir();
    void Combinar();
    void HacerMonticulo();
    void Empujar(int i, int m);
    //Mandatory
    void InsertSort();
    void SelectionSort();
    void BubbleSort();
    void MergeSort();
    void HeapSort();
    void QuickSort();
    //Extra
    void ShellSort();
    void BinSort();


};


#endif //CS2100_SORTING_RENZOT_SORTING_H
