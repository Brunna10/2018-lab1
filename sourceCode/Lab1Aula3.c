#include<stdio.h>

int main() {

	int idade;//decla��o da vari�vel idade
	//o valor inicial da vari�vel idade � "lixo"
	
	idade = 12;//atribuindo o valor 12 na vari�vel idade
	printf("%i\n", idade);
	
	idade = 4;
	printf("%i\n", idade);
	
	int nota1, nota2, nota3;
	
	nota1 = 25;
	nota2 = 20;
	nota3 = 16;
	
	int somaDasNotas = nota1 + nota2 + nota3;//declara��o e inicializa��o
	
	float mediaFinal;
	
	mediaFinal = somaDasNotas / 3;
	
	mediaFinal = (nota1 + nota2 + nota3) / 3;

	//imprimir a m�dia final	
	printf("%f", mediaFinal);
	
	int divisor = 21;
	int dividendo = 4;
	int resto = divisor % dividendo;
	
	//imprimir o valor do resto
	printf("O resto da divis�o �: %i", resto);	
}
