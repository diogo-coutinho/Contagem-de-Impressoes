#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int impressoes_mes_anterior[6];
    int impressoes_mes_atual[6];
    int total_mes_atual = 0;
    int total_mes_anterior = 0;
    char sair;

    // Inicialização das contagens do mês anterior
    printf("Informe as quantidades de impressoes do mes anterior:\n");
    for (int i = 0; i < 6; i++) {
        printf("Impressora %d: ", i + 1);
        scanf("%d", &impressoes_mes_anterior[i]);
        total_mes_anterior += impressoes_mes_anterior[i];
    }

    // Entrada impressoes do mes atual
    printf("\nInforme as quantidades de impressoes do mes atual:\n");
    for (int i = 0; i < 6; i++) {
        printf("Impressora %d: ", i + 1); 
        scanf("%d", &impressoes_mes_atual[i]);
        total_mes_atual += impressoes_mes_atual[i];
    }

    // Calcula e exibe totais por cada impressora no mes
    printf("\nResumo:\n");
    for (int i = 0; i < 6; i++) {
        int diferenca = impressoes_mes_atual[i] - impressoes_mes_anterior[i];
        printf("Impressora %d: %d impressoes (Total no mes: %d)\n", i + 1, diferenca, impressoes_mes_atual[i]);
    }
    printf("Total de impressoes no mes: %d\n", total_mes_atual - total_mes_anterior);

   printf("Digite S para Finalizar: ");
    scanf(" %c", &sair);
    while (sair != 'S' && sair != 's') {
        printf("Entrada invalida. Digite S para Finalizar: ");
        scanf(" %c", &sair);
    }
    return 0;
}