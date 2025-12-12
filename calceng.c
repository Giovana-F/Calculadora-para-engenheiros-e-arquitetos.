#include "calceng.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// Função auxiliar para validação de entrada (positiva e finita)
static bool validar_entrada(double valor, const char* nome_parametro) {
    if (valor <= 0 || !isfinite(valor)) {
        fprintf(stderr, "Erro: %s deve ser um número positivo finito. Valor fornecido: %f\n", nome_parametro, valor);
        return false;
    }
    return true;
}

// Cálculo de área de retângulo
double area_retangulo(double base, double altura) {
    if (!validar_entrada(base, "base") || !validar_entrada(altura, "altura")) return -1.0;
    return base * altura;
}

// Cálculo de área de triângulo
double area_triangulo(double base, double altura) {
    if (!validar_entrada(base, "base") || !validar_entrada(altura, "altura")) return -1.0;
    return (base * altura) / 2.0;
}

// Cálculo de área de círculo
double area_circulo(double raio) {
    if (!validar_entrada(raio, "raio")) return -1.0;
    return M_PI * raio * raio;
}

// Cálculo de volume de prisma retangular
double volume_prisma_retangular(double comprimento, double largura, double altura) {
    if (!validar_entrada(comprimento, "comprimento") || !validar_entrada(largura, "largura") || !validar_entrada(altura, "altura")) return -1.0;
    return comprimento * largura * altura;
}

// Cálculo de volume de cilindro
double volume_cilindro(double raio, double altura) {
    if (!validar_entrada(raio, "raio") || !validar_entrada(altura, "altura")) return -1.0;
    return M_PI * raio * raio * altura;
}

// Conversões de unidades de comprimento
double converter_m_para_cm(double metros) {
    if (!validar_entrada(metros, "metros")) return -1.0;
    return metros * 100.0;
}

double converter_cm_para_m(double cm) {
    if (!validar_entrada(cm, "cm")) return -1.0;
    return cm / 100.0;
}

double converter_m_para_mm(double metros) {
    if (!validar_entrada(metros, "metros")) return -1.0;
    return metros * 1000.0;
}

double converter_mm_para_m(double mm) {
    if (!validar_entrada(mm, "mm")) return -1.0;
    return mm / 1000.0;
}

// Estimativa de quantidade de tijolos (assumindo tijolos retangulares e junta simples)
int quantidade_tijolos(double area_parede, double area_tijolo) {
    if (!validar_entrada(area_parede, "area_parede") || !validar_entrada(area_tijolo, "area_tijolo")) return -1;
    // Fator para juntas de argamassa (aprox. 10% extra)
    double quantidade_bruta = area_parede / area_tijolo;
    return (int)ceil(quantidade_bruta * FATOR_JUNTA_TIJOLOS);
}

// Cálculo de peso estimado de viga de concreto
double peso_viga_concreto(double volume, double densidade) {
    if (!validar_entrada(volume, "volume")) {
        if (densidade != DENSIDADE_CONCRETO_PADRAO && !validar_entrada(densidade, "densidade")) return -1.0;
    }
    if (densidade <= 0) densidade = DENSIDADE_CONCRETO_PADRAO;  // Usa padrão se inválido
    return volume * densidade;
}

// Funções opcionais

// Cálculo de centroide de retângulo (origem no canto inferior esquerdo)
Centroide centroide_retangulo(double base, double altura) {
    Centroide c = {-1.0, -1.0};  // Valor de erro
    if (!validar_entrada(base, "base") || !validar_entrada(altura, "altura")) return c;
    c.x = base / 2.0;
    c.y = altura / 2.0;
    return c;
}

// Conversões SI ↔ Imperial
double converter_m_para_ft(double metros) {
    if (!validar_entrada(metros, "metros")) return -1.0;
    return metros * 3.28084;
}

double converter_ft_para_m(double pes) {
    if (!validar_entrada(pes, "pés")) return -1.0;
    return pes / 3.28084;
}

double converter_kg_para_lb(double kg) {
    if (!validar_entrada(kg, "kg")) return -1.0;
    return kg * 2.20462;
}

double converter_lb_para_kg(double lb) {
    if (!validar_entrada(lb, "libras")) return -1.0;
    return lb / 2.20462;
}