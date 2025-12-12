#ifndef CALCENG_H
#define CALCENG_H

#include <stdbool.h>

// Constantes úteis
#define DENSIDADE_CONCRETO_PADRAO 2400.0  // kg/m³
#define FATOR_JUNTA_TIJOLOS 1.1           // Fator para juntas de argamassa

// Struct para centroide (coordenadas x e y)
typedef struct {
    double x;
    double y;
} Centroide;

// Funções obrigatórias
double area_retangulo(double base, double altura);
double area_triangulo(double base, double altura);
double area_circulo(double raio);
double volume_prisma_retangular(double comprimento, double largura, double altura);
double volume_cilindro(double raio, double altura);
double converter_m_para_cm(double metros);
double converter_cm_para_m(double cm);
double converter_m_para_mm(double metros);
double converter_mm_para_m(double mm);
int quantidade_tijolos(double area_parede, double area_tijolo);
double peso_viga_concreto(double volume, double densidade);
// Funções adicionais 
double momento_inercia_retangular(double base, double altura);
double carga_termica_sala(double area_parede, double area_janela, int ocupacao);
double area_cobertura_telhado(double area_base, double angulo_graus);

// Funções opcionais
Centroide centroide_retangulo(double base, double altura);
double converter_m_para_ft(double metros);
double converter_ft_para_m(double pes);
double converter_kg_para_lb(double kg);
double converter_lb_para_kg(double lb);

#endif // CALCENG_H