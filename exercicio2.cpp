#include <iostream>
using namespace std;

void inserirElementos(int *vetor, int tamanho){
    int *ptr;

    cout << "digite os elementos do vetor: " << endl;
    for(ptr = vetor; ptr < vetor + tamanho; ptr++){
        cin >> *ptr;
    }
}

void imprimirElementos(int *vetor, int tamanho){
    int *ptr;

    cout << "elementos do vetor: " << endl;
    for(ptr = vetor; ptr < vetor + tamanho; ptr++){
        cout << *ptr << " ";
    }
    cout << endl;
}

int main(){
    int tamanho;

    cout << "digite o tamanho do vetor: ";
    cin >> tamanho;

    int vetor[tamanho];

    inserirElementos(vetor, tamanho);
    imprimirElementos(vetor, tamanho);

    return 0;
}