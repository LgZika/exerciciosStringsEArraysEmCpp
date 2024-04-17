// Declare um array de caracteres palavra1 e palavra2 com 10 posições cada. 
// Leia duas palavras do usuário usando cin e armazene-as em palavra1 e palavra2. 
// Compare as duas palavras usando a estrutura if e imprima qual palavra é maior em ordem alfabética.

#include <iostream>

using namespace std;

int main(){
    string palavra1, palavra2;
   
    cout << "Entre com a palavra 1: ";
    cin >> palavra1;
    cout << "Entre com a palavra 2: ";
    cin >> palavra2;

    if(palavra1.compare(palavra2) == 0){
        cout << "As Strings são iguais." << endl;
    } else if(palavra1.compare(palavra2) < 0){
        cout << "A primeira String é menor em ordem alfabetica." << endl;
    } else if(palavra1.compare(palavra2) > 0){
        cout << "A primeira String é maior em ordem alfabetica." << endl;
    } else {
        cout << "Erro!" << endl;
        return -1;
    }
    // cout << palavra1.compare(palavra2) << endl;
    return 0;
}