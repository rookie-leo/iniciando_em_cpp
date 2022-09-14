#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

const string PALAVRA_SECRETA = "MELANCIA";
map<char, bool> chutou;
vector<char> chutes_errados;

void cabecalho() {
    cout <<"**************************************" << endl;
    cout <<"*           Jogo da forca!           *" << endl;
    cout <<"**************************************" << endl;
}

void roda_pe() {
    cout << "A palavra secreta era " << PALAVRA_SECRETA << endl;
    cout << endl;
    cout <<"**************************************" << endl;
    cout <<"*            FIM DE JOGO!            *" << endl;
    cout <<"**************************************" << endl;
}

bool letra_existe(char chute) {
    for (char letra : PALAVRA_SECRETA) {
        if (chute == letra) {
            return true;
        }
    }
    return false;
}

bool nao_acertou() {
    for (char letra : PALAVRA_SECRETA) {
        if (!chutou[letra]) {
            return true;
        }
    }
    return false;
}

bool nao_enforcou() {
    return chutes_errados.size() <= 5;
}

void imprime_chutes_errados() {
    cout << "Chutes errados: ";
    for (char letra : chutes_errados) {
        cout << letra << " - ";
    }
}

void imprime_palavra() {
    for (char letra : PALAVRA_SECRETA) {
        if (chutou[letra]) {
            cout << letra << " ";
        } else {
            cout << "_ ";
        }
    }
}

void verifica_chute() {
    char chute;

    cout << "Chute uma letra ";
    cin >> chute;
    chutou[chute] = true;

    if (letra_existe(chute)) {
        cout << "Você acertou! Seu chute está na palavra!" <<endl;
    } else {
        cout << "Você errou! Seu chute não está na palavra!" <<endl;
        chutes_errados.push_back(chute);
    }
}

void fim_de_jogo() {
    if (nao_acertou()) {
        cout << "Você perdeu! Tente novamente!" << endl;
    } else {
        cout << "Você ganhou! Parabéns!" << endl;
    }
}

int main() {
    cabecalho();

    while (nao_acertou() && nao_enforcou()) {
        imprime_chutes_errados();
        cout << endl;

        imprime_palavra();
        cout << endl;

        verifica_chute();
        cout << endl;
    }

    fim_de_jogo();

    roda_pe();
}