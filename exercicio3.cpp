#include <iostream>
#include <vector>
using namespace std;

void leituraNotas(vector<double>& notas, int quantidadeAlunos){
    for (int i = 0; i < quantidadeAlunos; i++){
        cout << "digite a nota do aluno(a) " << i + 1 << ": ";
        cin >> notas[i];
    }
}

double calculaMedia(vector<double>& notas, int quantidadeAlunos){
    double soma = 0;
    for (int i = 0; i < quantidadeAlunos; i++){
        soma += notas[i];
    }
    return soma / quantidadeAlunos;
}

int main(){
    int quantidadeAlunos;

    cout << "digite a quantidade de alunos da turma: ";
    cin >> quantidadeAlunos;

    vector<double> notas(quantidadeAlunos);

    leituraNotas(notas, quantidadeAlunos);

    double media = calculaMedia(notas, quantidadeAlunos);

    cout << "a media aritmetica das notas e: " << media << endl;

    return 0;
}