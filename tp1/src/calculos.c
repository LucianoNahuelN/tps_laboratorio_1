#include <stdio.h>
#include <stdlib.h>
//Funcion para descuentos.
int descuento(int importe, int descuento)
{
	int importeFinal;

	importeFinal = importe - (importe * descuento/100);

	return importeFinal;
}

//Funcion para intereses.
float interes(int importe, int interes)
{
	float importeFinal;

	importeFinal = ((float)importe + (importe * interes/100));

	return importeFinal;
}

// Funcion para dividir.
float dividir(int numero1, int numero2)
{
	float resultado;

	while(numero2 == 0)
	{
		printf("\nNumero no valido. Ingrese un numero distinto de 0: \n");
		scanf("%d", &numero2);
	}

	resultado = (float) numero1 / numero2;

	return resultado;
}

//Funcion para restar
float restar(float numero1, float numero2)
{
	float resultado;

	resultado = numero1 - numero2;

	return resultado;
}

//FUNCION DE CARGA DE DATOS FORZADA

void cargaForzada(int kilometrosF, int precioAerolineasArgentinasF, int precioLatamF, float bitcoinF)
{
	int precioDebitoAerolineas;
	int precioDebitoLatam;
	float precioCreditoAerolineas;
	float precioCreditoLatam;
	float precioBitcoinAerolineas;
	float precioBitcoinLatam;
	float precioUnitarioAerolineas;
	float precioUnitarioLatam;
	float preciosDiferencia;

	printf("\nCarga forzada de datos\n");


	precioDebitoAerolineas = descuento(precioAerolineasArgentinasF, 10);
	precioDebitoLatam = descuento(precioLatamF, 10);
	precioCreditoAerolineas = interes(precioAerolineasArgentinasF, 25);
	precioCreditoLatam = interes(precioLatamF, 25);
	precioBitcoinAerolineas = dividir(precioAerolineasArgentinasF, bitcoinF);
	precioBitcoinLatam = dividir(precioLatamF, bitcoinF);
	precioUnitarioAerolineas = dividir(precioAerolineasArgentinasF, kilometrosF);
	precioUnitarioLatam = dividir(precioLatamF, kilometrosF);
	preciosDiferencia = restar(precioAerolineasArgentinasF, precioLatamF);

	printf("\nAerolineas:\n");
	printf("Precio Aerolineas: $%d\n", precioAerolineasArgentinasF);
	printf("Precio con tarjeta de debito: $%d\n", precioDebitoAerolineas);
	printf("Precio con tarjeta de credito: $%f\n", precioCreditoAerolineas);
	printf("Precio pagando con bitcoin: %f BTC\n", precioBitcoinAerolineas);
	printf("Precio unitario: $%f\n", precioUnitarioAerolineas);
	printf("\nLatam:\n");
	printf("Precio Latam: $%d\n", precioLatamF);
	printf("Precio con tarjeta de debito: $%d\n", precioDebitoLatam);
	printf("Precio con tarjeta de credito: $%f\n", precioCreditoLatam);
	printf("Precio pagando con bitcoin: %f BTC\n", precioBitcoinLatam);
	printf("Precio unitario: $%f\n", precioUnitarioLatam);
	printf("La diferencia de precios es: $%f\n", preciosDiferencia);
}
