//
// Created by Renzo on 1/04/2020.
//

#include "Sorting.h"

Sorting::Sorting(const vector<int> &myvec) : myvec(myvec) {}

void Sorting::imprimir() {
    for (int i=0;i<myvec.size();i++){
        cout << myvec[i] << " ";
    }
}

void Sorting::Intercambia(int i, int pmin) {
    int temp;
    temp = myvec[i];
    myvec[i]=myvec[pmin];
    myvec[pmin]=temp;
}

int Sorting::Pivote(int low, int high) {
    int piv = myvec[high],
        i = low-1;

    for (int j=low; j<=high-1;j++){
        if (myvec[j] <= piv){
            i++;
            Intercambia(i,j);
        }
    }
    Intercambia(i+1,high);
    return i+1;
}

int Sorting::PosMin(int i, int j) {
    int pmin;
    pmin = i;
    for (int k=i+1; k<=j; k++)
        if (myvec[k]<myvec[pmin])
            pmin=k;
    return pmin;
}

void Sorting::Combinar(int low,int med, int high) {
    int i,j,k,
        n1 = med - low +1,
        n2 = high - med;
    int Left[n1], Right[n2];

    for (i=0; i< n1 ; i++)
        Left[i] = myvec[low+i];
    for (j=0; j< n2 ; j++)
        Right[j] = myvec[med+1+j];
    i=0,j=0,k=low;
    while (i < n1 && j < n2){
        if (Left[i] <= Right[j]){
            myvec[k] = Left[i];
            i++;
        } else {
            myvec[k] = Right[j];
            j++;
        }
        k++;
    }
    while (i < n1){
        myvec[k] = Left[i];
        i++;
        k++;
    }
    while (j < n2){
        myvec[k] = Right[j];
        j++;
        k++;
    }

}

void Sorting::Empujar(int size, int node) {
    int l = node,
        left = 2*node+1,
        right = 2*node+2;
    if (left < size && myvec[left] > myvec[l] )
        l = left;
    if (right < size && myvec[right] > myvec[l] )
        l = right;
    if (l != node ) {
        Intercambia(node, l);
        Empujar(size, l);
    }
}

//Mandatory
void Sorting::InsertSort() {
    for (int i=1; i <= myvec.size(); i++){
        int x = myvec[i], j=i-1;
        while (j>=0 && x<myvec[j]){
            myvec[j+1]= myvec[j];
            j--;
        }
        myvec[j+1] = x;
    }
}

void Sorting::SelectionSort() {
    for (int i=0 ; i <= myvec.size()-2;i++)
        Intercambia(i,PosMin(i,myvec.size()-1));
}

void Sorting::BubbleSort() {
    for (int i=0; i <= myvec.size()-2;i++)
        for (int j = myvec.size()-1;j>=i+1;j--)
            if (myvec[j-1]>myvec[j])
                Intercambia(j-1,j);
}

void Sorting::MergeSort(int low, int high) {
    if (low < high){
        int med = low + (high - low)/2;

        MergeSort(low,med);
        MergeSort(med+1, high);
        Combinar(low,med,high);
    }
}


void Sorting::HeapSort() {

    for (int i =myvec.size() / 2  - 1; i >= 0; i--)
        Empujar(myvec.size(),i);


    for (int i=myvec.size()-1; i>0; i--)
    {
        Intercambia(0,i);
        Empujar(i, 0);
    }
}

void Sorting::QuickSort(int low, int high) {
    if (low < high){
        int piv = Pivote(low, high);
        QuickSort(low, piv-1);
        QuickSort(piv+1, high);
    }
    }

void Sorting::ShellSort() {
    int N=myvec.size(),
        h=1;
    do {
        h=3*h+1;
    }
    while (h<=N);
    do {
        h = h/3;
        for (int i=h+1; i<=N; i++){
            int v=myvec[i], j=i;
            while (j>h && myvec[j-h+0-1]>v){
                myvec[j+0-1]=myvec[j-h+0-1];
                j--, h--;
            }
            myvec[j+0-1]=v;
        }
    }
    while (h!=1);
}

void Sorting::BinSort() {
    vector<int> cubetas[myvec.size()];
    int index = 0;
    for (int i=0; i < myvec.size(); i++){
        int bin = myvec[i]/(*max_element(myvec.begin(),myvec.end()+1));
        cubetas[bin].push_back(myvec[i]);
    }

    for (int i=0; i<myvec.size(); i++){
        sort(cubetas[i].begin(),cubetas[i].end());
    }

    for (int i=0; i < myvec.size(); i++)
        for (int j=0; j<cubetas[i].size(); j++)
            myvec[index++] = cubetas [i][j];

}
