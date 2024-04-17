// Declare um array de caracteres palavra com 10 posições. Leia uma palavra do usuário usando cin e armazene-a em palavra. 
// Imprima a palavra usando cout.

#include <iostream>

using namespace std;

int main(){
    char palavra[10];

    cout << "Entre com uma palavra: ";
    cin >> palavra;
    cout << "Valor do array palavra: " << palavra << endl;
    
    return 0;
}