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


int Sorting::PosMin(int i, int j) {
    int pmin;
    pmin = i;
    for (int k=i+1; k<=j; k++)
        if (myvec[k]<myvec[pmin])
            pmin=k;
    return pmin;
}

void Sorting::Combinar() {

}

void Sorting::HacerMonticulo() {
    for (int i =((myvec.size()-1)-0+1)/2;i >=1 ; i--)
        Empujar(myvec.size()-1,0+i-1);
}

void Sorting::Empujar(int i, int m) {
int k=i-0+1,
    j;
    do{
        j=k;
        if (2*j<=m-0+1 && myvec[2*j+0-1]>myvec[k+0-1])
            k=2*j;
        else if (2*j<(m-0+1)-1 && myvec[2*j+0]>myvec[k+0-1])
            k=2*j+1;
        else
        Intercambia(j+0-1,k+0-1);
    }
    while (j!=k);
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

void Sorting::MergeSort() {

}


void Sorting::HeapSort() {
    HacerMonticulo();
    for (int i=myvec.size()-1; i >= 1; i--){
        Intercambia(0,i);
        Empujar(i-1,0);
    }



}

void Sorting::QuickSort() {

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
