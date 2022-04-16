/*
 ============================================================================
TRABAJO PRACTICO 1
Luciano Nahuel Nuñez
DIV 1k
Fecha de entrega: 16/04/2022
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "validar.h"
#include "calculos.h"

int main(void) {
	setbuf(stdout, NULL);
			int opciones;
			int kilometros = 0;
			int precioVueloAerolineas = 0;
			int precioVueloLatam = 0;
			int precioDebitoAerolineas;
			int precioDebitoLatam;
			float precioCreditoAerolineas;
			float precioCreditoLatam;
			float preciosDiferencia;
			float precioBitcoinAerolineas;
			float precioBitcoinLatam;
			float bitcoin = 4606954.55;
			float precioUnitarioAerolineas;
			float precioUnitarioLatam;

			do
			{
				printf("Ingrese una operacion (\n 1. Ingresar kilometros:  \n 2. Ingresar precio de vuelos:  \n 3. Calcular todos los costos:  \n 4. Informar resultados.  \n 5. Carga forzada de datos.  \n 6. Salir.): \n");
				fflush(stdin);
				scanf("%d",&opciones);

				switch(opciones)
					{
					case 1:
						kilometros = validarNumero(0, 25000);

						break;
					case 2:
						precioVueloAerolineas = validarNumero(5000, 250000);
						precioVueloLatam = validarNumero(5000, 250000);
						break;
					case 3:
						precioDebitoAerolineas = descuento(precioVueloAerolineas, 10);
						precioDebitoLatam = descuento(precioVueloLatam, 10);
						precioCreditoAerolineas = interes(precioVueloAerolineas, 25);
						precioCreditoLatam = interes(precioVueloLatam, 25);
						precioBitcoinAerolineas = dividir(precioVueloAerolineas, bitcoin);
						precioBitcoinLatam = dividir(precioVueloLatam, bitcoin);
						precioUnitarioAerolineas = dividir(precioVueloAerolineas, kilometros);
						precioUnitarioLatam = dividir(precioVueloLatam, kilometros);
						preciosDiferencia = restar(precioVueloAerolineas, precioVueloLatam);
						break;
					case 4:
						printf("\nAerolineas:\n");
						printf("Precio Aerolineas: $%d\n", precioVueloAerolineas);
						printf("Precio con tarjeta de debito: $%d\n", precioDebitoAerolineas);
						printf("Precio con tarjeta de credito: $%f\n", precioCreditoAerolineas);
						printf("Precio pagando con bitcoin: %f BTC\n", precioBitcoinAerolineas);
						printf("Precio unitario: $%f\n", precioUnitarioAerolineas);
						printf("\nLatam:\n");
						printf("Precio Latam: $%d\n", precioVueloLatam);
						printf("Precio con tarjeta de debito: $%d\n", precioDebitoLatam);
						printf("Precio con tarjeta de credito: $%f\n", precioCreditoLatam);
						printf("Precio pagando con bitcoin: %f BTC\n", precioBitcoinLatam);
						printf("Precio unitario: $%f\n", precioUnitarioLatam);
						printf("La diferencia de precios es: $%f\n", preciosDiferencia);
					    break;
					case 5:
						cargaForzada(8000, 30000, 35000, 4606954.55);
					    break;
					case 6:
						printf("\nSaliste del programa.\n");
					    break;
					default:
						printf("\nOpcion no valida.");
						break;
					}

			}while(opciones != 6);
	return EXIT_SUCCESS;
}
