//bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>


void calc_hexa(float L, float* area, float* perimetro);//referencia variaveis e ponteiros na função

int main() {
	float area, L, perimetro;//variaveis
	printf("Digite o lado do poligono:  \n");//usuario escolhe o valor de L
	scanf_s("%f", &L);
	if (L < 0) {//laço para garantir que L seja um numero valido
		printf("Digite o lado do poligono:  \n");//usuario escolhe o valor de L valido!!!!
		scanf_s("%f", &L);
	}

	 calc_hexa(L, &area, &perimetro);//referenciação
	 printf("\nArea: %.2f", area);//mostra a area calculada
	 printf("\nPerimetro: %.2f \n", perimetro);//mostra o perimetro calculado
     system("pause");
	 return 0;
 }
void calc_hexa(float L, float* area, float* perimetro) {//referenciação
	 *perimetro = 6 * L;//calculo de perimetro de hexagono
	 *area = 6 * pow(L, 2) * sqrt(3) / 4;//calculo de area de hexagono
 }
