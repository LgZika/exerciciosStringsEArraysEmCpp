// Declare uma variável do tipo String chamada letra. Leia um caractere do usuário usando cin e armazene-o em letra. 
// Verifique se letra é uma vogal usando a estrutura if e imprima uma mensagem informando se é ou não.

#include <iostream>

using namespace std;

int main(){
    string letra;

    cout << "Insira um caractere: ";
    cin >> letra;

    if(letra == "a" || letra == "A" || letra == "e" || letra == "E" || letra == "i" || letra == "I" || letra == "o" || letra == "O" || letra == "u" || letra == "U"){
        cout << "O caractere inserido eh uma vogal!" << endl;
    } else {
        cout << "O caractere inserido NAO eh uma vogal!" << endl;
    }
    return 0;
}