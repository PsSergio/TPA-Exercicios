#include <stdio.h>

void PegaDados(int matriz[2][3]){ // Pega Dados Do Usuário
    for (int l = 0; l < 2; l++) {
        for (int c = 0; c < 3; c++) {
            printf("[%d][%d]: ", l, c);
            scanf("%d", &matriz[l][c]);
        }
    }
}

void ImprimeLinhas(int qtd){ // Imprime Caracter do Espaço para centralizar colunas

    for(int i = 0; i < qtd; i++){
        printf("%c", 32);
    }

}

void ImprimeLinhasHorizontais(int x){ // Com um número de parametros, imprime linhas horizontais
    for(int i = 0; i < x; i++){
        printf("-");
    }
}


int VerificaQtdEspacos(int n[2], int &EspacoEmBranco2){ // de acordo com a qtd de algarismo dos dois numeros da coluna, define uma qtd de espaços
    int EspacoEmBranco1;

    if(n[0] > n[1]){
        EspacoEmBranco1 = 1;
        EspacoEmBranco2 = (n[0] - n[1]) + 1;

    }else if(n[0] < n[1]){
        EspacoEmBranco2 = 1;
        EspacoEmBranco1 = (n[1] - n[0]) + 1;

    }else{
        EspacoEmBranco1 = 1;
        EspacoEmBranco2 = 1;

    }

    return EspacoEmBranco1;
}

void ImprimeMatriz(char bufferLinha0[50], int EspacoEmBranco1, char bufferLinha1[50], int EspacoEmBranco2, int n[2], int matriz[2][3], int i, int j){
// Imprime matriz responsivamente por colunas
    if(i == 0 && j == 0)
        printf("\n| ");

    if(i == 0) {
        printf("%s", bufferLinha0);
        ImprimeLinhas(EspacoEmBranco1);

    }else{
        printf("%s", bufferLinha1);
        ImprimeLinhas(EspacoEmBranco2);
    }

}

void ImprimeDados(int matriz[2][3]){ 
// funcao geral para imprimir todos os dados

    int n[2], numLinha[3], EspacoEmBranco1, EspacoEmBranco2, totalNumLinha = 0;
    char bufferLinha0[50], bufferLinha1[50];

    printf("Matriz:\n");

    for(int l = 0; l < 2; l++){

        for (int c = 0; c < 3; c++) { // CONSIDERA ESPAÇOS

            n[0] = sprintf(bufferLinha0, "%d", matriz[0][c]); // conta qtd de algarismos
            n[1] = sprintf(bufferLinha1, "%d", matriz[1][c]); // conta qtd de algarismos

            //conta linhas horizontais

            if(l == 0){
                if(n[0] > n[1]){
                    numLinha[c] = n[0];
                }else if(n[1] > n[0]){
                    numLinha[c] = n[1];
                }else{
                    numLinha[c] = n[0];
                }

                totalNumLinha += numLinha[c];
            }

            // fim conta linhas

        }

    }

    totalNumLinha+=10;

    ImprimeLinhasHorizontais(totalNumLinha);
    for(int l = 0; l < 2; l++){ // Imprime Matriz
        if(l == 1)
            printf("| ");
        for(int c = 0; c < 3; c++){
            n[0] = sprintf(bufferLinha0, "%d", matriz[0][c]); // conta qtd de algarismos
            n[1] = sprintf(bufferLinha1, "%d", matriz[1][c]); // conta qtd de algarismos
            EspacoEmBranco1 = VerificaQtdEspacos(n, EspacoEmBranco2);

            ImprimeMatriz(bufferLinha0, EspacoEmBranco1, bufferLinha1, EspacoEmBranco2, n, matriz, l, c);
            printf("| ");

        }
        printf("\n");
        if(l == 0){
            ImprimeLinhasHorizontais(totalNumLinha);
            printf("\n");
        }
    }
    ImprimeLinhasHorizontais(totalNumLinha);

}

int main() {
    int m[2][3];

    PegaDados(m);
    ImprimeDados(m);

    return 0;
}