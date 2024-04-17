// Declare um array de caracteres frase com 20 posições. 
// Leia uma frase do usuário usando cin e armazene-a em frase. Imprima a frase usando cout.

#include <iostream>

using namespace std;

int main(){
    string frase;

    cout << "Entre com uma frase: ";
    getline(cin, frase);
    cout << "Frase: " << frase << endl;
    
    return 0;
}