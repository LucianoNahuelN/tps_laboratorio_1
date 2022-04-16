//Funcion para validar los numeros ingresados por el usuario.
int validarNumero(int minimo, int maximo)
{
	int numeroIngresado;

	printf("Ingrese el numero:\n ");
	scanf("%d", &numeroIngresado);

	while(numeroIngresado < minimo || numeroIngresado > maximo)
	{
		printf("\nNumero no valido. Reingrese: \n");
		scanf("%d", &numeroIngresado);
	}

	printf("\nDatos cargado con exito.\n");

	return numeroIngresado;
}

