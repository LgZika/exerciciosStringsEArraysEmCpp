// Declare uma variável do tipo String chamada nome e armazene seu nome nela. Imprima o valor de nome usando cout.

# include <iostream>

using namespace std;

int mains(){
    string nome;

    cout << "Entre com seu nome: ";
    getline(cin, nome);
    cout << "Nome armazenado: " + nome; << endl;
    
    return 0;
}