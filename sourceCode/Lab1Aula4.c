#include<stdio.h>

int main() {
	
	
	//compra de a��car
	int nivelMinimo = 2;
	int nivelMedido = 1;
	
	int vemChuva = 0;//vari�vel l�gica da chuva
	int temDinheiro = 1;//tem dinheiro
	
	int resultadoNivel = nivelMedido < nivelMinimo;
	
	int vaiComprar = resultadoNivel && !vemChuva && temDinheiro;
	
	printf("%i", vaiComprar);//imprime o resultado: vai ou n�o comprar
	
	
	//exemplo de corte de internet
	int consumo = 5;
	int consumoMaximo = 8;
	int atingiuLimite;
	int pagouAConta = 1;//pagou a conta
	int vaiCortarAInternet;
	
	atingiuLimite = consumo >= consumoMaximo;
	vaiCortarAInternet = atingiuLimite || !pagouAConta;
	
	//imprimir o resultado do corte ou n�o da internet
	printf("\nVai cortar a internet: %i", vaiCortarAInternet);	
}

