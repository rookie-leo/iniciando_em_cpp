#include<iostream>
using namespace std;

int main() {
    cout <<"**************************************" << endl;
    cout <<"* Bem-vindos ao jogo da adivinhação! *" << endl;
    cout <<"**************************************" << endl;

    const int NUMERO_SECRETO = 45;
    int chute, tentativas, numero_tentativas;
    bool nao_acertou = true;
    double pontos = 1000.0;
    char dificuldade;

    cout <<"Niveis de dificuldade: Fácil(f), Médio(m), Dificíl(d)" <<endl;
    cout <<"Digite uma letra correspondete ao nivel de dificuldade: ";
    cin >> dificuldade;

    if (dificuldade == 'f' || dificuldade == 'F') {
        numero_tentativas = 15;
    } else if (dificuldade == 'm' || dificuldade == 'M') {
        numero_tentativas = 10;
    } else if (dificuldade == 'd' || dificuldade == 'D') {
        numero_tentativas = 5;
    } else {
        cout <<"Letra digitada não corresponde aos niveis de dificuldade!" <<endl;
        nao_acertou = false;
        pontos = 0.0;
    }

    for (tentativas = 1; tentativas <= numero_tentativas; tentativas++) {
        cout << "Tentativa " <<tentativas <<endl;
        cout << "Digite o valor do seu chute: "; //"cout <<" Saida de dados pelo terminal
        cin >> chute; // "cin >>" Entrada de dados pelo terminal
        cout << "O valor digitado foi " <<chute <<endl;

        bool maior = chute > NUMERO_SECRETO;
        bool menor = chute < NUMERO_SECRETO;

        double pontos_perdidos = abs(chute - NUMERO_SECRETO)/2.0;
        pontos -= pontos_perdidos;

        if (maior) {
            cout << "O valor digitado é maior que o número secreto!" <<endl;
        } else if (menor) {
            cout << "O valor digitado é menor que o número secreto!" <<endl;
        } else {
            cout << "Parabens! Você acertou o número secreto!" <<endl;
            nao_acertou = false;
            break;
        }
    }

    cout << "Número de tentativas " <<tentativas-1 <<endl;

    if (nao_acertou) {
        cout << "Você perdeu! Tente novamente!" <<endl;
    } else {
        cout.precision(2);//Modifica o valor precisamente sem arredondamentos em notação cientifica
        cout << fixed;//Formata o valor impresso sem a notação cientifica
        cout << "Sua pontuação final foi " <<pontos << " pontos." <<endl;
    }


    cout <<"**************************************" << endl;
    cout <<"*            FIM DE JOGO!            *" << endl;
    cout <<"**************************************" << endl;

}