Biblioteca CalcEng para Cálculos de Engenharia e Arquitetura

--------------------------------------------------------------------------------
1. NOME DO INTEGRANTE:
GIOVANA FIORIN GIUSTI
--------------------------------------------------------------------------------

2. DESCRIÇÃO GERAL 
   Arquivos principais:
   - Calceng.h: Cabeçalho com declarações de funções, constantes e estruturas.
   - calceng.c: Implementação das funções com validação.
   - main.c: Menu interativo para testar as funcionalidades.

   O código é compilável com GCC
--------------------------------------------------------------------------------

3. DESCRIÇÃO DAS FUNÇÕES IMPLEMENTADAS
   Funções:
   - double area_retangulo(double base, double altura): Calcula a área de um retângulo (base * altura).
   - double area_triangulo(double base, double altura): Calcula a área de um triângulo ((base * altura) / 2).
   - double area_circulo(double raio): Calcula a área de um círculo (π * raio²).
   - double volume_prisma_retangular(double comprimento, double largura, double altura): Calcula o volume de um prisma retangular (comprimento * largura * altura).
   - double volume_cilindro(double raio, double altura): Calcula o volume de um cilindro (π * raio² * altura).
   - double converter_m_para_cm(double metros): Converte metros para centímetros (metros * 100).
   - double converter_cm_para_m(double cm): Converte centímetros para metros (cm / 100).
   - double converter_m_para_mm(double metros): Converte metros para milímetros (metros * 1000).
   - double converter_mm_para_m(double mm): Converte milímetros para metros (mm / 1000).
   - int quantidade_tijolos(double area_parede, double area_tijolo): Estima quantidade de tijolos para uma parede, com fator de junta (10% extra).
   - double peso_viga_concreto(double volume, double densidade): Calcula peso estimado de viga de concreto (volume * densidade, padrão 2400 kg/m³).
   - Centroide centroide_retangulo(double base, double altura): Calcula coordenadas do centroide de um retângulo (x = base/2, y = altura/2).
   - double converter_m_para_ft(double metros): Converte metros para pés (metros * 3.28084).
   - double converter_ft_para_m(double pes): Converte pés para metros (pés / 3.28084).
   - double converter_kg_para_lb(double kg): Converte quilogramas para libras (kg * 2.20462).
   - double converter_lb_para_kg(double lb): Converte libras para quilogramas (lb / 2.20462).


--------------------------------------------------------------------------------

4. INSTRUÇÕES DE COMPILAÇÃO
   - Pré-requisitos: GCC instalado (versão 4+ recomendada). No Windows, use MinGW ou MSYS2. No Linux/Mac, geralmente já disponível.
   - Comando: Abra o terminal na pasta do projeto e execute:
     gcc main.c calceng.c -o calceng -lm -Wall -Wextra
     - -lm: Liga a biblioteca math.h (necessária para funções como M_PI e isfinite).
     - -Wall -Wextra: Mostra warnings para debug (opcional, mas recomendado).
   - Se usar VS Code: Configure um task.json com o comando acima para compilação automática.
   - Notas: Certifique-se de que calceng.h, calceng.c e main.c estão no mesmo diretório. Em sistemas antigos, adicione #define _USE_MATH_DEFINES no topo de calceng.c.

--------------------------------------------------------------------------------

5. INSTRUÇÕES DE EXECUÇÃO
   - Após compilar, execute o programa com: ./calceng (Linux/Mac) ou calceng.exe (Windows).
   - O programa exibe um menu interativo. Escolha uma opção (1-19), digite os valores solicitados (ex.: para área de retângulo, digite base e altura) e pressione Enter.
   - Exemplos:
     - Opção 1: Digite "5 10" → Output: "Área: 50.00"
     - Opção 0: Sai do programa.
   - Validação: Entradas inválidas (ex.: negativos) mostram erro e retornam -1. Use valores positivos e finitos.

--------------------------------------------------------------------------------

6. NOTAS ADICIONAIS
   - O projeto é modular e reutilizável: as funções podem ser integradas em outros programas incluindo calceng.h.
   - Para dúvidas ou expansões, consulte o código-fonte ou entre em contato com o integrante.
   - Versão: 1.0 (baseada em C padrão, sem dependências externas além de math.h).
