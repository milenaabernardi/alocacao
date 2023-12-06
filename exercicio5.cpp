#include <iostream>
using namespace std;

struct Aluno{
    string nome;
    string serie;
    float nota;
};

void leitura(Aluno *alunos, int quantidadeAlunos){
    Aluno *ptrAlunos = alunos;
    for (int i = 0; i < quantidadeAlunos; i++){
        cout << "digite o nome do aluno(a) " << i + 1 << ": ";
        cin >> ptrAlunos->nome;
        cout << "digite a serie do aluno(a) " << i + 1 << ": ";
        cin >> ptrAlunos->serie;
        cout << "digite a nota do aluno(a) " << i + 1 << ": ";
        cin >> ptrAlunos->nota;
        ptrAlunos++;
    }
}

float media(Aluno *alunos, int quantidadeAlunos){
    Aluno *ptrAlunos = alunos;
    float soma = 0;
    for (int i = 0; i < quantidadeAlunos; i++){
        soma += ptrAlunos->nota;
        ptrAlunos++;
    }
    return soma / quantidadeAlunos;
}

int main(){
    int quantidadeAlunos;
    cout << "digite a quantidade de alunos: ";
    cin >> quantidadeAlunos;

    Aluno *alunos = new Aluno[quantidadeAlunos];
    leitura(alunos, quantidadeAlunos);

    cout << "media: " << media(alunos, quantidadeAlunos) << endl;

    delete[] alunos;
    return 0;
}