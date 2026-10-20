/*Dimensões e parâmetros do drone*/
#ifndef CONFIG_H
#define CONFIG_H

#define MASSA     1.121lf //Massa do drone em kg
#define I_ARF     0.0082lf //Momento de inércia do drone em kg.m² do eixo
#define D_BRACO   0.0879lf //Distancia entre os motores do drone em metros
#define B_AMORT   0.01lf //Coeficiente de amortecimento do drone em N·m·s/rad
#define DT        0.005lf //Passo de tempo da simulação em segundos
#define ALFA      0.98lf //Peso do giroscópio no filtro complementar (0 a 1)

#endif