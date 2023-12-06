#include <iostream>
using namespace std;

void leitura(float *notas, int quantidadeAlunos){
    float *ptrNotas = notas;
    for (int i = 0; i < quantidadeAlunos; i++){
        cout << "digite a nota do aluno(a) " << i + 1 << ": ";
        cin >> *ptrNotas;
        ptrNotas++;
    }
}

float media(float *notas, int quantidadeAlunos){
    float *ptrNotas = notas, soma = 0;
    for (int i = 0; i < quantidadeAlunos; i++){
        soma += *ptrNotas;
        ptrNotas++;
    }
    return soma / quantidadeAlunos;
}

int main(){
    int quantidadeAlunos;
    cout << "digite a quantidade de alunos: ";
    cin >> quantidadeAlunos;

    float *notas = new float[quantidadeAlunos];
    leitura(notas, quantidadeAlunos);

    cout << "media: " << media(notas, quantidadeAlunos) << endl;

    delete[] notas;
    return 0;
}