// Declare um array de caracteres frase com 20 posições. 
// Leia uma frase do usuário usando cin e armazene-a em frase. 
// Encontre a palavra mais longa da frase e imprima a palavra usando cout.

#include <iostream>
#include <cstring>

using namespace std;

void lerDados(char *frase){
    cout << "Insira uma pequena frase: ";
    fgets(frase, 21, stdin);
}

void validaDados(char *frase, char *palavra, char *maiorPalavra, char *menorPalavra, int numeroPalavra, int tamanhoMaior, int tamanhoMenor, int lenVetor){
    int i, j, tamanhoPalavra;
    tamanhoMenor = 20;

    for(i = 0; frase[i] != '\0'; i++){
        if((frase[i] == ' ') || ( frase[i+1] == '\0')){          // conta o numero de palavras da frase
            numeroPalavra++;                                     // incrementa o numero de palavras na variavel numeroPalavra                
        }
    }
    
    for(i = 0; i < lenVetor; i++){                               // percorre a frase
        j = 0;                                                   //reinicia a posicao do array da palavra a cada loop                   
        while((frase[i] != ' ') && (frase[i+1] != '\0')){       // percorre a palavra atual
            palavra[j] = frase[i];                              // atribui os caracteres de frase para a palavra enquanto nao achar um espaco ou o final    
            i++;                                            
            j++;
        }

        if(j > 0){                                          // evita que palavra receba o cacacter de final string na primeira posicao
            palavra[j] = '\0';                              // a palavra atual recebe o finalizador de string
        }
        tamanhoPalavra = strlen(palavra);                   // pega o tamanho da palavra atual
        
        if(tamanhoPalavra > tamanhoMaior){                  // verifica se a palavra atual é maior que a maior anterior
            tamanhoMaior = tamanhoPalavra;                  // se for maior recebe o tamanho da palavra atual a armazena o tamanho atual como maior
            strcpy(maiorPalavra, palavra);                  // e aloca a palavra na variavel de maiorPalavra
        } 
        if(tamanhoPalavra < tamanhoMenor){                  // verifica se a palavra atual é menor que a menor anterior
            tamanhoMenor = tamanhoPalavra;                  // se for menor recebe o tamanho da palavra atual a armazena o tamanho atual como menor                  
            strcpy(menorPalavra, palavra);                  // e aloca a palavra na variavel de menorPalavra
        }
    }

    cout << endl;
    cout << "Frase Inserida: " << frase << endl;
    cout << "-> possui " << numeroPalavra << " palavras;" << endl;
    cout << "-> a MAIOR palavra da frase eh: \"" << maiorPalavra << "\" e possui " << tamanhoMaior << " letras;" << endl;
    cout << "-> a MENOR palavra da frase eh: \"" << menorPalavra << "\" e possui " << tamanhoMenor << " letras;" << endl;
    cout << endl;
} 

int main(){
    char frase[20], palavra[20], maiorPalavra[20], menorPalavra[10];
    int lenVetor = sizeof(frase) / sizeof(frase[0]);
    int numeroPalavra = 0, tamanhoMaior = 0, tamanhoMenor;
    
    lerDados(frase); // input do usuario
    validaDados(frase, palavra, maiorPalavra, menorPalavra, numeroPalavra, tamanhoMaior, tamanhoMenor, lenVetor); // tratamento dos dados
    return 0;
}