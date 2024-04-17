// Declare um array de caracteres palavra com 10 posições. 
// Leia uma palavra do usuário usando cin e armazene-a em palavra. 
// Inverta a ordem dos caracteres da palavra e imprima a palavra invertida usando cout.

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string palavra;

    cout << "Insira uma pequena palavra: ";
    cin >> palavra;
     
    reverse(palavra.begin(), palavra.end()); // função reverse(), reverte a stream que é passada como parâmetro. 

    cout << "A palavra inserida foi invertida: " + palavra << endl;
    return 0;
}