#include <stdio.h> // Biblioteca padrão para entrada e saída de dados.

int main() {
    // ================== REQUISITOS ==================
    // Definindo o número de casas que cada peça irá se mover,
    // conforme solicitado no desafio.
    int movimentosTorre = 5;
    int movimentosBispo = 5;
    int movimentosRainha = 8;
    
    // Variável de contador que será usada nos laços while e do-while.
    int contador;

    // =================================================================
    // PEÇA 1: TORRE (usando o laço 'for')
    // =================================================================
    // A Torre se moverá 5 casas para a direita.
    // O 'for' é ideal aqui, pois sabemos exatamente o número de repetições.
    printf("--- Movimento da Torre (5 casas para a direita) ---\n");
    for (int i = 1; i <= movimentosTorre; i++) {
        // Imprime a direção do movimento a cada passo.
        printf("Passo %d: Direita\n", i);
    }
    
    printf("\n"); // Adiciona uma linha em branco para separar as seções.

    // =================================================================
    // PEÇA 2: BISPO (usando o laço 'while')
    // =================================================================
    // O Bispo se moverá 5 casas na diagonal (para cima e à direita).
    // O 'while' executa o bloco de código ENQUANTO a condição for verdadeira.
    printf("--- Movimento do Bispo (5 casas na diagonal) ---\n");
    contador = 1; // Reinicia o contador para o Bispo.
    while (contador <= movimentosBispo) {
        // Imprime a combinação de direções para o movimento diagonal.
        printf("Passo %d: Cima, Direita\n", contador);
        contador++; // Incrementa o contador para evitar um loop infinito.
    }
    
    printf("\n"); // Adiciona uma linha em branco.

    // =================================================================
    // PEÇA 3: RAINHA (usando o laço 'do-while')
    // =================================================================
    // A Rainha se moverá 8 casas para a esquerda.
    // O 'do-while' é similar ao 'while', mas garante que o bloco de código
    // seja executado PELO MENOS UMA VEZ antes de checar a condição.
    printf("--- Movimento da Rainha (8 casas para a esquerda) ---\n");
    contador = 1; // Reinicia o contador para a Rainha.
    do {
        // Imprime a direção do movimento.
        printf("Passo %d: Esquerda\n", contador);
        contador++; // Incrementa o contador.
    } while (contador <= movimentosRainha);
    
    return 0; // Finaliza o programa com sucesso.
}