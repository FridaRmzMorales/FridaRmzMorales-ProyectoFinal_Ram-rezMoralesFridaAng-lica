//Incluir librería
#include<stdio.h>
//Función principal
int main()
{
	//Variables a utilizar
	int op,comprar,producto;
	float p,c;
	char nombre [20];
	char aa = 160, ae = 130, ai = 161, ao = 162, au = 163, pr = 168;
	//Mensaje de bienvenida y solicitud del nombre del cliente
	printf("Bienvenido a nuestra papeler%ca\n%cCu%cl es tu nombre?\n",ai,pr,aa);
	//Lectura de datos a través del teclado
	scanf("%s",nombre);
	do
	{
			
		//Saludo personalizado
		printf("\n\nHola %s\n", nombre);
		printf("Tenemos los siguientes productos:\n");
		//Muestra del menú general
		printf("\t1) Acuarelas\n\t2) Bol%cgrafos\n\t3) Cuadernos\n\t4) Cartulinas\n\tSi deseas salir, presiona 5\n",ai);
		printf("%cQu%c deseas comprar?: ",pr,ae);
		//Lectura de datos a través del teclado
		scanf("%d",&op);

		// switch respecto a la variable op
		switch(op)
		{
			case 1:
				//Menú específico de las acuarelas
				printf("\n\tAcuarelas");
				printf("\n\n1) Acuarela Bombin 12 Pz\t$11.00");		
				printf("\n2) Acuarela Makyco 5 Pz\t\t$8.00");
				printf("\n3) Acuarela Vinci 6 Pz\t\t$8.00");
				printf("\n\n%cDeseas comprar alguno de estos productos?",pr);
				printf("\n1) Si\n2) No\n");
				//Lectura de datos a través del teclado
				scanf("%d",&comprar);

				//Estructura if. Se ejecutará según la respuesta del usuario
				if (comprar==1)
				{	
				printf("\nSeg%cn el men%c anterior. %cQu%c producto deseas?: ",au,au,pr,ae);
				//Lectura de datos a través del teclado
				scanf("%d",&producto);
					
					//switch anidado
					switch(producto)
					{
						case 1:
							printf("%cCu%cntas piezas de Acuarela Bombin 12 Pz necesitas?: ",pr,aa);	
							//Lectura de datos a través del teclado
							scanf("%f",&p);	
							//Cálculo del costo según el número de piezas solicitadas
							c=p*11;
							printf("\n\nAdquiriste %.0f piezas de Acuarela Bombin\nEl total a pagar es $%.2f\n",p,c);
							//Agradecimiento
							printf("Gracias por tu compra %s",nombre);
						break;
							
						case 2:
							printf("%cCu%cntas piezas de Acuarela Makyco 5 Pz necesitas?: ",pr,aa);	
							//Lectura de datos a través del teclado
							scanf("%f",&p);	
							//Cálculo del costo según el número de piezas solicitadas
							c=p*8;
							printf("\n\nAdquiriste %.0f piezas de Acuarela Makyco\nEl total a pagar es $%.2f\n",p,c);
							//Agradecimiento
							printf("Gracias por tu compra %s",nombre);
						break;
						
						case 3:
							printf("%cCu%cntas piezas de Acuarela Vinci 6 Pz necesitas?: ",pr,aa);	
							//Lectura de datos a través del teclado
							scanf("%f",&p);
							//Cálculo del costo según el número de piezas solicitadas
							c=p*8;
							printf("\n\nAdquiriste %.0f piezas de Acuarela Vinci\nEl total a pagar es $%.2f\n",p,c);
							//Agradecimiento
							printf("Gracias por tu compra %s",nombre);
						break;
						
						default:
							printf("\n\tOpci%cn inv%clida. Por favor int%cntalo de nuevo",ao,aa,ae);
						break;
					}
				}
				else 
					printf("Gracias por tu preferencia %s. Vuelve pronto :)",nombre);
				break;
			
			
			case 2:
				//Menú específico de los bolígrafos
				printf("\n\t\tBol%cgrafos",ai);
				printf("\n\n1) Bol%cgrafo Bic Negro P/Fino\t\t$3.20",ai);		
				printf("\n2) Bol%cgrafo Bic Negro P/Mediano\t$2.30",ai);
				printf("\n3) Bol%cgrafo Bic Azul P/Fino\t\t$3.20",ai);
				printf("\n4) Bol%cgrafo Bic Azul P/Mediano\t\t$2.30",ai);
				printf("\n5) Bol%cgrafo Bic Rojo P/Fino\t\t$3.20",ai);
				printf("\n6) Bol%cgrafo Bic Rojo P/Mediano\t\t$2.30",ai);
				printf("\n\n%cDeseas comprar alguno de estos productos?\n",pr);
				printf("\n1) Si\n2) No\n");
				//Lectura de datos a través del teclado
				scanf("%d",&comprar);
				
				//Estructura if. Se ejecutará según la respuesta del usuario
				if (comprar==1)
				{
				printf("\nSeg%cn el men%c anterior. %cQu%c producto deseas?: ",au,au,pr,ae);
				//Lectura de datos a través del teclado
				scanf("%d",&producto);
				
					//switch anidado
					switch(producto)
					{			
						case 1:
							printf("%cCu%cntas piezas de Bol%cgrafo Bic Negro P/Fino necesitas?: ",pr,aa,ai);
							//Lectura de datos a través del teclado
							scanf("%f",&p);	
							//Cálculo del costo según el número de piezas solicitadas
							c=p*3.20;
							printf("\n\nAdquiriste %.0f piezas de Bol%cgrafo Bic Negro P/Fino\nEl total a pagar es $%.2f\n",p,ai,c);
							//Agradecimiento
							printf("Gracias por tu compra %s",nombre);
						break;
						
						case 2:
							printf("%cCu%cntas piezas de Bol%cgrafo Bic Negro P/Mediano necesitas?: ",pr,aa,ai);
							//Lectura de datos a través del teclado
							scanf("%f",&p);	
							//Cálculo del costo según el número de piezas solicitadas
							c=p*2.30;
							printf("\n\nAdquiriste %.0f piezas de Bol%cgrafo Bic Negro P/Mediano\nEl total a pagar es $%.2f\n",p,ai,c);
							//Agradecimiento
							printf("Gracias por tu compra %s",nombre);
						break;
						
						case 3:
							printf("%cCu%cntas piezas de Bol%cgrafo Bic Azul P/Fino necesitas?: ",pr,aa,ai);
							//Lectura de datos a través del teclado
							scanf("%f",&p);	
							//Cálculo del costo según el número de piezas solicitadas
							c=p*3.20;
							printf("\n\nAdquiriste %.0f piezas de Bol%cgrafo Bic Azul P/Fino\nEl total a pagar es $%.2f\n",p,ai,c);
							//Agradecimiento
							printf("Gracias por tu compra %s",nombre);
						break;
						
						case 4:
							printf("%cCu%cntas piezas de Bol%cgrafo Bic Azul P/Mediano necesitas?: ",pr,aa,ai);
							//Lectura de datos a través del teclado
							scanf("%f",&p);	
							//Cálculo del costo según el número de piezas solicitadas
							c=p*2.30;
							printf("\n\nAdquiriste %.0f piezas de Bol%cgrafo Bic Azul P/Mediano\nEl total a pagar es $%.2f\n",p,ai,c);
							//Agradecimiento
							printf("Gracias por tu compra %s",nombre);
						break;
						
						case 5:
							printf("%cCu%cntas piezas de Bol%cgrafo Bic Rojo P/Fino necesitas?: ",pr,aa,ai);
							//Lectura de datos a través del teclado
							scanf("%f",&p);
							//Cálculo del costo según el número de piezas solicitadas
							c=p*3.20;
							printf("\n\nAdquiriste %.0f piezas de Bol%cgrafo Bic Rojo P/Fino\nEl total a pagar es $%.2f\n",p,ai,c);
							//Agradecimiento
							printf("Gracias por tu compra %s",nombre);
						break;
						
						case 6:
							printf("%cCu%cntas piezas de Bol%cgrafo Bic Rojo P/Mediano necesitas?: ",pr,aa,ai);
							//Lectura de datos a través del teclado
							scanf("%f",&p);
							//Cálculo del costo según el número de piezas solicitadas
							c=p*2.30;
							printf("\n\nAdquiriste %.0f piezas de Bol%cgrafo Bic Rojo P/Mediano\nEl total a pagar es $%.2f\n",p,ai,c);
							//Agradecimiento
							printf("Gracias por tu compra %s",nombre);
						break;
						
						default:
							printf("\n\tOpci%cn inv%clida. Por favor int%cntalo de nuevo",ao,aa,ae);
						break;	
					}
				}
				else 
					printf("Gracias por tu preferencia %s Vuelve pronto :)",nombre);
				break;
			
			
			case 3:
				//Menú específico de los cuadernos
				printf("\n\t\t\tCuadernos");
				printf("\n\n1) Cuaderno Profesional Cuadro Grande Escribe\t$9.90");		
				printf("\n2) Cuaderno Profesional Cuadro Chico Monky\t$8.10");
				printf("\n3) Cuaderno Franc%cs Raya Scribe\t\t\t$16.70",ae);
				printf("\n4) Cuaderno Marquilla de 50 Hojas\t\t$37.40");
				printf("\n\n%cDeseas comprar alguno de estos productos?\n",pr);
				printf("\n1) Si\n2) No\n");
				//Lectura de datos a través del teclado
				scanf("%d",&comprar);
				
				//Estructura if. Se ejecutará según la respuesta del usuario
				if (comprar==1)
				{
				printf("\nSeg%cn el men%c anterior. %cQu%c producto deseas?: ",au,au,pr,ae);
				//Lectura de datos a través del teclado
				scanf("%d",&producto);

					//switch anidado
					switch(producto)
					{
						case 1:
							printf("%cCu%cntas piezas de Cuaderno Profesional Cuadro Grande Escribe necesitas?: ",pr,aa);
							//Lectura de datos a través del teclado
							scanf("%f",&p);	
							//Cálculo del costo según el número de piezas solicitadas
							c=p*9.90;
							printf("\n\nAdquiriste %.0f piezas de Cuaderno Profesional Cuadro Grande Escribe\nEl total a pagar es $%.2f\n",p,c);
							//Agradecimiento
							printf("Gracias por tu compra %s",nombre);
						break;
						
						case 2:
							printf("%cCu%cntas piezas de Cuaderno Profesional Cuadro Chico Monky necesitas?: ",pr,aa);
							//Lectura de datos a través del teclado
							scanf("%f",&p);	
							//Cálculo del costo según el número de piezas solicitadas
							c=p*8.10;
							printf("\n\nAdquiriste %.0f piezas de Cuaderno Profesional Cuadro Chico Monky\nEl total a pagar es $%.2f\n",p,c);
							//Agradecimiento
							printf("Gracias por tu compra %s",nombre);
						break;
							
						case 3:
							printf("%cCu%cntas piezas de Cuaderno Franc%cs Raya Scribe necesitas?: ",pr,aa,ae);
							//Lectura de datos a través del teclado
							scanf("%f",&p);
							//Cálculo del costo según el número de piezas solicitadas
							c=p*16.70;
							printf("\n\nAdquiriste %.0f piezas de Cuaderno Franc%cs Raya Scribe\nEl total a pagar es $%.2f\n",p,ae,c);
							//Agradecimiento
							printf("Gracias por tu compra %s",nombre);
						break;
							
						case 4:
							printf("%cCu%cntas piezas de Cuaderno Marquilla de 50 Hojas necesitas?: ",pr,aa);
							//Lectura de datos a través del teclado
							scanf("%f",&p);
							//Cálculo del costo según el número de piezas solicitadas
							c=p*37.40;
							printf("\n\nAdquiriste %.0f piezas de Cuaderno Marquilla de 50 Hojas \nEl total a pagar es $%.2f\n",p,c);
							//Agradecimiento
							printf("Gracias por tu compra %s",nombre);
						break;
						
						default:
							printf("\n\tOpci%cn inv%clida. Por favor int%cntalo de nuevo",ao,aa,ae);
						break;
					}
				}
				else 
					printf("Gracias por tu preferencia %s Vuelve pronto :)",nombre);
				break;
				
				
			case 4:
				//Menú específico de las cartulinas
				printf("\n\tCartulinas");
				printf("\n\n1) Cartulina blanca\t$2.50");
				printf("\n2) Cartulina negra\t$4.00");				
				printf("\n3) Cartulina morada\t$4.00");	
				printf("\n4) Cartulina azul\t$4.00");					
				printf("\n\n%cDeseas comprar alguno de estos productos?\n",pr);
				printf("\n1) Si\n2) No\n");
				//Lectura de datos a través del teclado
				scanf("%d",&comprar);
				
				//Estructura if. Se ejecutará según la respuesta del usuario
				if (comprar==1)
				{	
				printf("\nSeg%cn el men%c anterior. %cQu%c producto deseas?: ",au,au,pr,ae);
				//Lectura de datos a través del teclado
				scanf("%d",&producto);
				
					//switch anidado
					switch(producto)
					{
						case 1:
							printf("%cCu%cntas piezas de Cartulina blanca necesitas?: ",pr,aa);
							//Lectura de datos a través del teclado
							scanf("%f",&p);	
							//Cálculo del costo según el número de piezas solicitadas
							c=p*2.50;
							printf("\n\nAdquiriste %.0f piezas de Cartulina blanca\nEl total a pagar es $%.2f\n",p,c);
							//Agradecimiento
							printf("Gracias por tu compra %s",nombre);
						break;
						
						case 2:
							printf("%cCu%cntas piezas de Cartulina negra necesitas?: ",pr,aa);	
							//Lectura de datos a través del teclado
							scanf("%f",&p);	
							//Cálculo del costo según el número de piezas solicitadas
							c=p*4.00;
							printf("\n\nAdquiriste %.0f piezas de Cartulina negra\nEl total a pagar es $%.2f\n",p,c);
							//Agradecimiento
							printf("Gracias por tu compra %s",nombre);
						break;
						
						case 3:
							printf("%cCu%cntas piezas de Cartulina morada necesitas?: ",pr,aa);
							//Lectura de datos a través del teclado
							scanf("%f",&p);
							//Cálculo del costo según el número de piezas solicitadas
							c=p*4.00;
							printf("\n\nAdquiriste %.0f piezas de Cartulina morada\nEl total a pagar es $%.2f\n",p,c);
							//Agradecimiento
							printf("Gracias por tu compra %s",nombre);
						break;
						
						case 4:
							printf("%cCu%cntas piezas de Cartulina azul necesitas?: ",pr,aa);
							//Lectura de datos a través del teclado
							scanf("%f",&p);
							//Cálculo del costo según el número de piezas solicitadas
							c=p*4.00;
							printf("\n\nAdquiriste %.0f piezas de Cartulina azul\nEl total a pagar es $%.2f\n",p,c);
							//Agradecimiento
							printf("Gracias por tu compra %s",nombre);
						break;
						
						default:
							printf("\n\tOpci%cn inv%clida. Por favor int%cntalo de nuevo",ao,aa,ae);
						break;
					}
				}
				else
					//Agradecimiento
					printf("Gracias por tu preferencia %s Vuelve pronto :)",nombre);
				break; 	
						case 5:
			//Despedida
			printf("Gracias por tu preferencia %s Vuelve pronto :)",nombre);
			break;
			
			default: 
			printf("\n\tOpci%cn inv%clida. Por favor int%cntalo de nuevo",ao,aa,ae);
			break;
		}
	}
		while(op!=5);
	return 0;
}