// Declare um array de caracteres frase com 20 posições. 
// Leia uma frase do usuário usando cin e armazene-a em frase. 
// Conte o número de vogais na frase e imprima o resultado usando cout.

#include <iostream>

using namespace std;

int verificaVogais(string frase, int vogais, int len){
    vogais = 0;
    for(int i = 0; i < len; i++){
        if(frase[i] == 'A' || frase[i] == 'a' || frase[i] == 'E' || frase[i] == 'e' || frase[i] == 'I' || frase[i] == 'i' || frase[i] == 'O' || frase[i] == 'o' || frase[i] == 'U' || frase[i] == 'u'){
            vogais++;
        }
    }
    return vogais;
}

int main(){
    string frase;
    int vogais = 0;
    int len = sizeof(frase) / sizeof(frase[0]);
   
    cout << "Entre com uma frase: ";
    getline(cin, frase);
    
    vogais = verificaVogais(frase, vogais, len);

    cout << "Na frase inserida existem " << vogais << " vogais!" << endl;
    return 0;
}