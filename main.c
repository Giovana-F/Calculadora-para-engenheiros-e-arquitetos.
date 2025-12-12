#include "Calceng.h"
#include "calceng.c"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;
    double val1, val2, val3;
    Centroide c;
// Menu simples para demonstração das funções
    printf("=== Biblioteca CalcEng - Cálculos para Engenharia e Arquitetura ===\n");
    printf("Escolha uma operação:\n");
    printf("1. Área de retângulo\n");
    printf("2. Área de triângulo\n");
    printf("3. Área de círculo\n");
    printf("4. Volume de prisma retangular\n");
    printf("5. Volume de cilindro\n");
    printf("6. Converter metros para cm\n");
    printf("7. Converter cm para metros\n");
    printf("8. Converter metros para mm\n");
    printf("9. Converter mm para metros\n");
    printf("10. Quantidade de tijolos para parede\n");
    printf("11. Peso de viga de concreto\n");
    printf("12. Centroide de retângulo (opcional)\n");
    printf("13. Converter metros para pés (opcional)\n");
    printf("14. Converter pés para metros (opcional)\n");
    printf("15. Converter kg para libras (opcional)\n");
    printf("16. Converter libras para kg (opcional)\n");
    printf("0. Sair\n");
    printf("Opção: ");
    scanf("%d", &opcao);
// Processar a opção escolhida
    switch (opcao) {
        
        case 1:
            printf("Digite base e altura: ");
            scanf("%lf %lf", &val1, &val2);
            printf("Área: %.2f\n", area_retangulo(val1, val2));
            break;
        case 2:
            printf("Digite base e altura: ");
            scanf("%lf %lf", &val1, &val2);
            printf("Área: %.2f\n", area_triangulo(val1, val2));
            break;
        case 3:
            printf("Digite raio: ");
            scanf("%lf", &val1);
            printf("Área: %.2f\n", area_circulo(val1));
            break;
        case 4:
            printf("Digite comprimento, largura e altura: ");
            scanf("%lf %lf %lf", &val1, &val2, &val3);
            printf("Volume: %.2f\n", volume_prisma_retangular(val1, val2, val3));
            break;
        case 5:
            printf("Digite raio e altura: ");
            scanf("%lf %lf", &val1, &val2);
            printf("Volume: %.2f\n", volume_cilindro(val1, val2));
            break;
        case 6:
            printf("Digite metros: ");
            scanf("%lf", &val1);
            printf("Cm: %.2f\n", converter_m_para_cm(val1));
            break;
        case 7:
            printf("Digite cm: ");
            scanf("%lf", &val1);
            printf("Metros: %.2f\n", converter_cm_para_m(val1));
            break;
        case 8:
            printf("Digite metros: ");
            scanf("%lf", &val1);
            printf("Mm: %.2f\n", converter_m_para_mm(val1));
            break;
        case 9:
            printf("Digite mm: ");
            scanf("%lf", &val1);
            printf("Metros: %.2f\n", converter_mm_para_m(val1));
            break;
        case 10:
            printf("Digite área da parede e área do tijolo: ");
            scanf("%lf %lf", &val1, &val2);
            printf("Quantidade de tijolos: %d\n", quantidade_tijolos(val1, val2));
            break;
        case 11:
            printf("Digite volume e densidade (ou 0 para padrão 2400 kg/m³): ");
            scanf("%lf %lf", &val1, &val2);
            printf("Peso: %.2f kg\n", peso_viga_concreto(val1, val2));
            break;
        case 12:
            printf("Digite base e altura: ");
            scanf("%lf %lf", &val1, &val2);
            c = centroide_retangulo(val1, val2);
            printf("Centroide: x=%.2f, y=%.2f\n", c.x, c.y);
            break;
        case 13:
            printf("Digite metros: ");
            scanf("%lf", &val1);
            printf("Pés: %.2f\n", converter_m_para_ft(val1));
            break;
        case 14:
            printf("Digite pés: ");
            scanf("%lf", &val1);
            printf("Metros: %.2f\n", converter_ft_para_m(val1));
            break;
        case 15:
            printf("Digite kg: ");
            scanf("%lf", &val1);
            printf("Libras: %.2f\n", converter_kg_para_lb(val1));
            break;
        case 16:
            printf("Digite libras: ");
            scanf("%lf", &val1);
            printf("Kg: %.2f\n", converter_lb_para_kg(val1));
            break;
        case 0:
            printf("Saindo...\n");
            exit(0);
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}