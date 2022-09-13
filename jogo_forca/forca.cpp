#include <iostream>
#include <string>
using namespace std;

int main() {
    string palavra_secreta = "MELANCIA";
    cout << palavra_secreta <<endl;

    bool nao_acertou = true;
    bool nao_enforcou = true;

    while (nao_acertou && nao_enforcou) {
        char chute;

        cout << "Chute uma letra ";

        cin >> chute;

        cout << "Seu chute foi " << chute <<endl;
    }
}