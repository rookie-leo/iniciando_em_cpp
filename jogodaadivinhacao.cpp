#include<iostream>
using namespace std;

int main() {
    cout <<"**************************************" << endl;
    cout <<"* Bem-vindos ao jogo da adivinhação! *" << endl;
    cout <<"**************************************" << endl;

    const int NUMERO_SECRETO = 45;
    int chute;

    cout << "Digite o valor do seu chute: "; //"cout <<" Saida de dados pelo terminal
    cin >> chute; // "cin >>" Entrada de dados pelo terminal
    cout << "O valor digitado foi " <<chute <<endl;

    bool maior = chute > NUMERO_SECRETO;
    bool menor = chute < NUMERO_SECRETO;

    if (maior) {
        cout << "O valor digitado é maior que o número secreto!" <<endl;
    } else if (menor) {
        cout << "O valor digitado é menor que o número secreto!" <<endl;
    } else {
        cout << "Parabens! Você acertou o número secreto!" <<endl;
    }
}