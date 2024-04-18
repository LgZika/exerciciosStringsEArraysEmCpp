// Declare um array de caracteres frase com 20 posições. 
// Leia uma frase do usuário usando cin e armazene-a em frase. 
// Conte o número de vogais na frase e imprima o resultado usando cout.

#include <iostream>

using namespace std;

int verificaVogais(string frase, char vogais[], int numeroVogais, int lenFrase, int lenVogais){
    numeroVogais = 0;
    for(int i = 0; i < lenFrase; i++){
        for(int j = 0; j < lenVogais; j++){
            if(frase[i] == vogais[j]){
                numeroVogais++;
                cout << numeroVogais << " - vogal na posicao " << i << " = " << frase[i] << endl;
            }
        }
    }
    return numeroVogais;
}

int main(){
    string frase;
    char vogais[] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
    int numeroVogais = 0;
    
    int lenVogais = sizeof(vogais) / sizeof(vogais[0]);
   
    cout << "Entre com uma frase: "; // input de usuario
    getline(cin, frase);
    int lenFrase = frase.size();
    
    numeroVogais = verificaVogais(frase, vogais, numeroVogais, lenFrase, lenVogais); // funcao que retorna o numero de vogais

    cout << "Na frase inserida existem " << numeroVogais << " vogais!" << endl; // output
    return 0;
}