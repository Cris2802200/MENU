#include<stdio.h>
#include<stdlib.h>

//MENU

int main(){
	
int v,r,z;
int a,b,c,e,p,total,s,x;
int l,q,m,i;
int salir=1;
			
system("color 06");
	do{	
	
	
printf("\n******************* BIENVENIDO A BLACK FOOD TRUCK ******************\n ************************ QUE VA A ORDENAR ************************\n1.<** HAMBURGUESA **>\n2.<*** ALITAS ***>\n3.<*** EXTRAS ***>\n4.<= SALIR =>\n");
scanf("%d", &a);

switch(a){
//MENU DE HAMBURGUESAS
	case 1:
		printf("******************* MENU DE HAMBURGUESAS *******************\n1.<*** CASICA ***>\n2.<*** BLACK ***>\n3.<*** BLACK DOBLE ****>\n4.<= VOLVER =>\n");
		scanf("%d",&b);
		switch(b){
				
			case 1:
				
				printf("*** CONTENIDO DE LA CLASICA ***:\nLECHUGA, TOMATE, PEPINILLO, CARNE, QUESO + PAPAS FRITAS = BS.12 .\n");
				
				printf("\nINGRESE LA CANTIDAD DE HAMBURGUESAS QUE VA A ORDENAR\n");
				scanf("%d",&c);
				total=c*12;
				printf("\nEL TOTAL  ES DE : BS.%d", total);
				printf("\nREALIZAR PAGO POR:\n1.*** EFECTIVO ***\n2.*** TRANSFERENCIA ***\n3.*** QR ***\n4.<= CANCELAR =>\n");
				scanf("%d",&v);
					switch(v){
						case 1:
							printf("******************* PAGO EN EFECTIVO *******************\n** EL PAGO DEBERA REALIZARLO AL MOMENTO DE RECOGER SU PEDIDO **\n** SU PEDIDO ESTA SIENDO PREPARADO **\n");
							printf(" *** SU PEDIDO ESTAR LISTO EN 20 MIN ***\n");
							printf("*** ENTREGA DE PEDIDO ***\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
							scanf("%d,",&r);
								switch(r){
									case 1:
										printf("*** LO ESPERAMOS CON SU PEDIDO LISTO ***\n");
										break;
									case 2:
										printf("***SU PEDIDO SERA ENVIADO POR DELIVERy\nPOR FAVOR CANCELAR LA CARRERA AL DELIVERY ***");
										break;
									}
							break;	
						case 2:
							
							printf("******************* PAGO POR TRANSFERENCIA *******************\n** POR FAVOR DEPOSITE EL MONTO A CANCELAR EN EL NUMERO DE CUENTA **\n** BLACK FOOD TRUCK\n** 4070777999 **");
							printf("*** SU PEDIDO ESTAR LISTO EN 20 MIN ***\n");
							printf("** ENTREGA DE PEDIDO **\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
							scanf("%d,",&r);
								switch(r){
									case 1:
										printf("*** LO ESPERAMOS CON SU PEDIDO LISTO ***\n");
										break;
									case 2:
										printf("*** SU PEDIDO SERA ENVIADO POR DELIVERy\nPOR FAVOR CANCELAR LA CARRERA AL DELIVERY ***");
										break;
									}
							break;						
						case 3:
							printf("******************* PAGO POR QR *******************\n ** POR FAVOR ESCANEA EL SIGUIENTE CODIGO ** \n");
							printf(" *****  ***** \n");
							printf(" *   *  *   * \n");
							printf(" *   *  ***** \n");
							printf(" * * *  ***   \n");
							printf(" *****  *  *  \n");
							printf("     ** *   * \n");
							
							printf("*** SU PAGO FUE REALIZADO CON EXITO ***\n** SU PEDIDO ESTA SIENDO PREPARADO **\n");		
						
				
							printf("*** SU PEDIDO ESTAR LISTO EN 20 MIN ***\n");
							printf("*** ENTREGA DE PEDIDO ***\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
							scanf("%d,",&r);
								switch(r){
									case 1:
										printf("*** LO ESPERAMOSCON SU PEDIDO LISTO ***\n");
										break;
									case 2:
										printf("*** SU PEDIDO SERA ENVIADO POR DELIVERy\nPOR FAVOR CANCELAR LA CARRERA AL DELIVERY ***\n");
										printf("VOLVER AL MENU PRINCIPAL SI=0 / NO=1\n");
										
							break;
								default:
								break;
									}
									
							break;
							case 4:
							printf("*** PEDIDO CANCELADO ***\n");
							break;
						}
						
		
		break;
				case 2:
		
				printf("*** CONTENIDO DE LA BLACK ***:\nLECHUGA, TOMATE, PEPINILLO, CEBOLLA CARAMELIZADA, TOCINO, CARNE, QUESO + PAPAS FRITAS = BS.15 .\n");
				printf("\nINGRESE LA CANTIDAD DE HAMBURGUESAS  QUE VA A ORDENAR\n");
				scanf("%d",&c);
				total=c*15;				
				printf("\nEL TOTAL  ES DE : BS.%d", total);
					printf("\nREALIZAR PAGO POR:\n1.*** EFECTIVO ***\n2.*** TRANSFERENCIA ***\n3.*** QR ***\n4.*** CANCELAR ***\n");
				scanf("%d",&v);
					switch(v){
						case 1:
							printf("******************* PAGO EN EFECTIVO *******************\n*** EL PAGO DEBERA REALIZARLO AL MOMENTO DE RECOGER SU PEDIDO ***\n*** SU PEDIDO ESTA SIENDO PREPARADO ***\n");
								printf("*** SU PEDIDO ESTAR LISTO EN 20 MIN ***\n");
							printf("*** ENTREGA DE PEDIDO ***\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
							scanf("%d,",&r);
								switch(r){
									case 1:
										printf("*** LO ESPERAMOS CON SU PEDIDO LISTO ***\n");
										break;
									case 2:
										printf("*** SU PEDIDO SERA ENVIADO POR DELIVERy\nPOR FAVOR CANCELAR LA CARRERA AL DELIVERY ***");
										break;
									}
							break;	
							
						
						case 2:
							
							printf("******************* PAGO POR TRANSFERENCIA *******************\n*** POR FAVOR DEPOSITE EL MONTO A CANCELAR EN EL NUMERO DE CUENTA ***\n*** BLACK FOOD TRUCK ***\n *** 4070777999 ***");
							printf("*** SU PEDIDO ESTAR LISTO EN 20 MIN ***\n");
							printf("** ENTREGA DE PEDIDO **\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
							scanf("%d,",&r);
								switch(r){
									case 1:
										printf("*** LO ESPERAMOS CON SU PEDIDO LISTO ***\n");
										break;
									case 2:
										printf("*** SU PEDIDO SERA ENVIADO POR DELIVERY ***\n*** POR FAVOR CANCELAR LA CARRERA AL DELIVERY ***");
										break;
									}
									
							break;						
						case 3:
							printf("******************* PAGO POR QR *******************\n*** POR FAVOR ESCANEA EL SIGUIENTE CODIGO ***\n");
							printf(" *****  ***** \n");
							printf(" *   *  *   * \n");
							printf(" *   *  ***** \n");
							printf(" * * *  ***   \n");
							printf(" *****  *  *  \n");
							printf("     ** *   * \n");
							
							printf("** SU PAGO FUE REALIZADO CON EXITO **\n** SU PEDIDO ESTA SIENDO PREPARADO **\n");
							
								printf("*** SU PEDIDO ESTAR LISTO EN 20 MIN ***\n");
							printf("** ENTREGA DE PEDIDO **\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
							scanf("%d,",&r);
								switch(r){
									case 1:
										printf("*** LO ESPERAMOSCON SU PEDIDO LISTO ***\n");
										break;
									case 2:
										printf("*** SU PEDIDO SERA ENVIADO POR DELIVERY ***\n*** POR FAVOR CANCELAR LA CARRERA AL DELIVERY ***\n");
										
							break;
								
							}
						
							case 4:
							printf("*** PEDIDO CANCELADO ***\n");
							break;
						}
						
break;
			case 3:
				
				printf("CONTENIDO DE LA BLACK DOBLE:\nLECHUGA, TOMATE, PEPINILLO, TOCINO, CEBOLLA CARAMELIZADA, DOBLE CARNE, DOBLE QUESO + PAPAS FRITAS = BS.20 .\n");
				printf("\nINGRESE LA CANTIDAD DE HAMBURGUESAS QUE VA A ORDENAR\n");
				scanf("%d",&c);
				total=c*20;
				printf("\nEL TOTAL  ES DE : BS.%d", total);
				
					printf("\nREALIZAR PAGO POR:\n1.EFECTIVO\n2.TRANSFERENCIA\n3.QR\n4.CANCELAR\n");
					scanf("%d",&v);
					switch(v){
						case 1:
							printf("******************* PAGO EN EFECTIVO *******************\n** EL PAGO DEBERA REALIZARLO AL MOMENTO DE RECOGER SU PEDIDO **\n** SU PEDIDO ESTA SIENDO PREPARADO **\n");
								printf(" SU PEDIDO ESTAR LISTO EN 20 MIN\n");
							printf("** ENTREGA DE PEDIDO **\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
							scanf("%d,",&r);
								switch(r){
									case 1:
										printf("***** LO ESPERAMOS CON SU PEDIDO LISTO *****\n");
										break;
									case 2:
										printf("SU PEDIDO SERA ENVIADO POR DELIVERy\nPOR FAVOR CANCELAR LA CARRERA AL DELIVERY");
										break;
									}
							
							
							break;	
						case 2:
							
							printf("******************* PAGO POR TRANSFERENCIA *******************\n** POR FAVOR DEPOSITE EL MONTO A CANCELAR EN EL NUMERO DE CUENTA **\n** BLACK FOOD TRUCK **\n** 4070777999 **");
								printf(" SU PEDIDO ESTAR LISTO EN 20 MIN\n");
							printf("** ENTREGA DE PEDIDO **\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
							scanf("%d,",&r);
								switch(r){
									case 1:
										printf("***** LO ESPERAMOS CON SU PEDIDO LISTO *****\n");
										break;
									case 2:
										printf("SU PEDIDO SERA ENVIADO POR DELIVERy\nPOR FAVOR CANCELAR LA CARRERA AL DELIVERY");
										break;
									}
						
							break;						
						case 3:
							printf("******************* PAGO POR QR *******************\n** POR FAVOR ESCANEA EL SIGUIENTE CODIGO **\n");
							printf(" *****  ***** \n");
							printf(" *   *  *   * \n");
							printf(" *   *  ***** \n");
							printf(" * * *  ***   \n");
							printf(" *****  *  *  \n");
							printf("     ** *   * \n");
							
							printf("** SU PAGO FUE REALIZADO CON EXITO **\n ** SU PEDIDO ESTA SIENDO PREPARADO **\n");
							printf(" \n** SU PEDIDO ESTAR LISTO EN 20 MIN **\n");
							printf("\n** ENTREGA DE PEDIDO **\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
							scanf("%d,",&r);
								switch(r){
									case 1:
										printf("*** LO ESPERAMOS CON SU PEDIDO LISTO ***\n");
										break;
									case 2:
										printf("*** SU PEDIDO SERA ENVIADO POR DELIVERY *** \n*** POR FAVOR CANCELAR LA CARRERA AL DELIVERY ***");
										
									
									printf("\n***** GRACIAS POR SU PREFERENCIA *****");
										break;	
					}
							
					
					
						case 4:
							printf("***** PEDIDO CANCELADO *****");
							break;

			}




}
break;
	case 2:
//MENU DE ALITAS

	printf("\n******************* MENU DE ALITAS *******************\n1.PEQUE\n2.MEDIANA\n3.GRANDE\n4.SUPREMA\n5.VOLVER\n");
	scanf("%d",&l);	
		switch(l){                                                                                                    
			
			case 1:
				
				printf("CONTENIDO DE LA PEQUE:\n4 PIEZAS + PAPAS FRITAS + 1 SALSA = BS. 15.\n");
				printf("\nINGRESE LA CANTIDAD DE ALITAS PEQUES QUE VA A ORDENAR\n");
				scanf("%d",&c);
				total=c*15;
				printf("\nEL TOTAL  ES DE : BS.%d", total);
				printf("\nREALIZAR PAGO POR:\n1.EFECTIVO\n2.TRANSFERENCIA\n3.QR\n4.CANCELAR\n");
					scanf("%d",&v);
					switch(v){
						case 1:
							printf("******************* PAGO EN EFECTIVO *******************\n** EL PAGO DEBERA REALIZARLO AL MOMENTO DE RECOGER SU PEDIDO **\n** SU PEDIDO ESTA SIENDO PREPARADO **\n");
								printf("\n** SU PEDIDO ESTAR LISTO EN 20 MIN **\n");
							printf("** ENTREGA DE PEDIDO **\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
							scanf("%d,",&r);
								switch(r){
									case 1:
										printf("***** LO ESPERAMOS CON SU PEDIDO LISTO *****\n");
										break;
									case 2:
										printf("** SU PEDIDO SERA ENVIADO POR DELIVERY **\n** POR FAVOR CANCELAR LA CARRERA AL DELIVERY **");
										break;
									}
							
					case 2:
							
							printf("******************* PAGO POR TRANSFERENCIA *******************\n** POR FAVOR DEPOSITE EL MONTO A CANCELAR EN EL NUMERO DE CUENTA **\n** BLACK FOOD TRUCK **\n** 4070777999 **");
								printf(" \n** SU PEDIDO ESTAR LISTO EN 20 MIN **\n ");
							printf("** ENTREGA DE PEDIDO **\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
							scanf("%d,",&r);
								switch(r){
									case 1:
										printf("***** LO ESPERAMOS CON SU PEDIDO LISTO *****\n");
										break;
									case 2:
										printf("** SU PEDIDO SERA ENVIADO POR DELIVERY **\n** POR FAVOR CANCELAR LA CARRERA AL DELIVERY **");
										break;
									}
						
					case 3:
							printf("******************* PAGO POR QR *******************\n** POR FAVOR ESCANEA EL SIGUIENTE CODIGO **\n");
							printf(" *****  ***** \n");
							printf(" *   *  *   * \n");
							printf(" *   *  ***** \n");
							printf(" * * *  ***   \n");
							printf(" *****  *  *  \n");
							printf("     ** *   * \n");
							
							printf("** SU PAGO FUE REALIZADO CON EXITO **\n ** SU PEDIDO ESTA SIENDO PREPARADO **\n");
							printf(" \n** SU PEDIDO ESTAR LISTO EN 20 MIN **\n");
							printf("\n** ENTREGA DE PEDIDO **\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
							scanf("%d,",&r);
								switch(r){
									case 1:
										printf("*** LO ESPERAMOS CON SU PEDIDO LISTO ***\n");
										break;
									case 2:
										printf("*** SU PEDIDO SERA ENVIADO POR DELIVERY *** \n*** POR FAVOR CANCELAR LA CARRERA AL DELIVERY ***");
										
									
									printf("\n***** GRACIAS POR SU PREFERENCIA *****");
										break;	
					}	
				
						case 4:
							printf("***** PEDIDO CANCELADO *****");
							break;
		
}
break;
			case 2:
				
				printf("CONTENIDO DE LA MEDIANA:\n6 PIEZAS + PAPAS FRITAS + 1 SALSA = BS.20 .\n");
				printf("\nINGRESE LA CANTIDAD DE ALITAS MEDIANAS QUE VA A ORDENAR\n");
				scanf("%d",&c);
				total=c*20;
				printf("\nEL TOTAL  ES DE : BS.%d", total);
				printf("\nREALIZAR PAGO POR:\n1.EFECTIVO\n2.TRANSFERENCIA\n3.QR\n4.CANCELAR\n");
					scanf("%d",&v);
					switch(v){
						case 1:
							printf("******************* PAGO EN EFECTIVO *******************\n** EL PAGO DEBERA REALIZARLO AL MOMENTO DE RECOGER SU PEDIDO **\n** SU PEDIDO ESTA SIENDO PREPARADO **\n");
								printf("** \nSU PEDIDO ESTAR LISTO EN 20 MIN **\n");
							printf("** ENTREGA DE PEDIDO **\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
							scanf("%d,",&r);
								switch(r){
									case 1:
										printf("***** LO ESPERAMOS CON SU PEDIDO LISTO *****\n");
										break;
									case 2:
										printf("** SU PEDIDO SERA ENVIADO POR DELIVERY **\n** POR FAVOR CANCELAR LA CARRERA AL DELIVERY **");
										break;
									}
						case 2:
							
							printf("******************* PAGO POR TRANSFERENCIA *******************\n** POR FAVOR DEPOSITE EL MONTO A CANCELAR EN EL NUMERO DE CUENTA **\n** BLACK FOOD TRUCK **\n** 4070777999 **");
								printf(" \n** SU PEDIDO ESTAR LISTO EN 20 MIN **\n ");
							printf("** ENTREGA DE PEDIDO **\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
							scanf("%d,",&r);
								switch(r){
									case 1:
										printf("***** LO ESPERAMOS CON SU PEDIDO LISTO *****\n");
										break;
									case 2:
										printf("** SU PEDIDO SERA ENVIADO POR DELIVERY **\n** POR FAVOR CANCELAR LA CARRERA AL DELIVERY **");
										break;
									}			
						
							case 3:
							printf("******************* PAGO POR QR *******************\n** POR FAVOR ESCANEA EL SIGUIENTE CODIGO **\n");
							printf(" *****  ***** \n");
							printf(" *   *  *   * \n");
							printf(" *   *  ***** \n");
							printf(" * * *  ***   \n");
							printf(" *****  *  *  \n");
							printf("     ** *   * \n");
							
							printf("** SU PAGO FUE REALIZADO CON EXITO **\n ** SU PEDIDO ESTA SIENDO PREPARADO **\n");
							printf(" \n** SU PEDIDO ESTAR LISTO EN 20 MIN **\n");
							printf("\n** ENTREGA DE PEDIDO **\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
							scanf("%d,",&r);
								switch(r){
									case 1:
										printf("*** LO ESPERAMOS CON SU PEDIDO LISTO ***\n");
										break;
									case 2:
										printf("*** SU PEDIDO SERA ENVIADO POR DELIVERY *** \n*** POR FAVOR CANCELAR LA CARRERA AL DELIVERY ***");
										
									
									printf("\n***** GRACIAS POR SU PREFERENCIA *****");
										break;	
					}	
							case 4:
							printf("***** PEDIDO CANCELADO *****");
							break;			
	}
	break;
			case 3:
				
				printf("CONTENIDO DE LA GRANDE:\n8 PIEZAS + PAPAS FRITAS + 2 SALSA = BS.25 .\n");
				printf("\nINGRESE LA CANTIDAD DE ALITAS GRANDES QUE VA A ORDENAR\n");
				scanf("%d",&c);
				total=c*25;
				printf("\nEL TOTAL  ES DE : BS.%d", total);
					printf("\nREALIZAR PAGO POR:\n1.EFECTIVO\n2.TRANSFERENCIA\n3.QR\n4.CANCELAR\n");
					scanf("%d",&v);
					switch(v){
							case 1:
							printf("******************* PAGO EN EFECTIVO *******************\n** EL PAGO DEBERA REALIZARLO AL MOMENTO DE RECOGER SU PEDIDO **\n** SU PEDIDO ESTA SIENDO PREPARADO **\n");
								printf("\n** SU PEDIDO ESTAR LISTO EN 20 MIN **\n");
							printf("** ENTREGA DE PEDIDO **\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
							scanf("%d,",&r);
								switch(r){
									case 1:
										printf("***** LO ESPERAMOS CON SU PEDIDO LISTO *****\n");
										break;
									case 2:
										printf("** SU PEDIDO SERA ENVIADO POR DELIVERY **\n** POR FAVOR CANCELAR LA CARRERA AL DELIVERY **");
										break;
									}
							case 2:
							
							printf("******************* PAGO POR TRANSFERENCIA *******************\n** POR FAVOR DEPOSITE EL MONTO A CANCELAR EN EL NUMERO DE CUENTA **\n** BLACK FOOD TRUCK **\n** 4070777999 **");
								printf(" \n** SU PEDIDO ESTAR LISTO EN 20 MIN **\n ");
							printf("** ENTREGA DE PEDIDO **\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
							scanf("%d,",&r);
								switch(r){
									case 1:
										printf("***** LO ESPERAMOS CON SU PEDIDO LISTO *****\n");
										break;
									case 2:
										printf("** SU PEDIDO SERA ENVIADO POR DELIVERY **\n** POR FAVOR CANCELAR LA CARRERA AL DELIVERY **");
										break;
									}
									
						case 3:
							printf("******************* PAGO POR QR *******************\n** POR FAVOR ESCANEA EL SIGUIENTE CODIGO **\n");
							printf(" *****  ***** \n");
							printf(" *   *  *   * \n");
							printf(" *   *  ***** \n");
							printf(" * * *  ***   \n");
							printf(" *****  *  *  \n");
							printf("     ** *   * \n");
							
							printf("** SU PAGO FUE REALIZADO CON EXITO **\n ** SU PEDIDO ESTA SIENDO PREPARADO **\n");
							printf(" \n** SU PEDIDO ESTAR LISTO EN 20 MIN **\n");
							printf("\n** ENTREGA DE PEDIDO **\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
							scanf("%d,",&r);
								switch(r){
									case 1:
										printf("*** LO ESPERAMOS CON SU PEDIDO LISTO ***\n");
										break;
									case 2:
										printf("*** SU PEDIDO SERA ENVIADO POR DELIVERY *** \n*** POR FAVOR CANCELAR LA CARRERA AL DELIVERY ***");
										
									
									printf("\n***** GRACIAS POR SU PREFERENCIA *****");
										break;	
					}	
						case 4:
							printf("***** PEDIDO CANCELADO *****");
							break;				
		}
		break;
			 case 4:
			 	
			 	printf("CONTENIDO DE LA SUPREMA:\n10 PIEZAS + PAPAS FRITAS + 2 SALSA = BS.30 .\n");
				printf("\nINGRESE LA CANTIDAD DE ALITAS SUPREMAS QUE VA A ORDENAR\n");
				scanf("%d",&c);
				total=c*30;
				printf("\nEL TOTAL  ES DE : BS.%d", total);
				printf("\nREALIZAR PAGO POR:\n1.EFECTIVO\n2.TRANSFERENCIA\n3.QR\n4.CANCELAR\n");
					scanf("%d",&v);
					switch(v){
							case 1:
							printf("******************* PAGO EN EFECTIVO *******************\n** EL PAGO DEBERA REALIZARLO AL MOMENTO DE RECOGER SU PEDIDO **\n** SU PEDIDO ESTA SIENDO PREPARADO **\n");
								printf("\n** SU PEDIDO ESTAR LISTO EN 20 MIN **\n");
							printf("** ENTREGA DE PEDIDO **\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
							scanf("%d,",&r);
								switch(r){
									case 1:
										printf("***** LO ESPERAMOS CON SU PEDIDO LISTO *****\n");
										break;
									case 2:
										printf("** SU PEDIDO SERA ENVIADO POR DELIVERY **\n** POR FAVOR CANCELAR LA CARRERA AL DELIVERY **\n");
										break;
									}		
		
							case 2:
							
							printf("******************* PAGO POR TRANSFERENCIA *******************\n** POR FAVOR DEPOSITE EL MONTO A CANCELAR EN EL NUMERO DE CUENTA **\n** BLACK FOOD TRUCK **\n** 4070777999 **");
								printf(" \n** SU PEDIDO ESTAR LISTO EN 20 MIN **\n ");
							printf("** ENTREGA DE PEDIDO **\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
							scanf("%d,",&r);
								switch(r){
									case 1:
										printf("***** LO ESPERAMOS CON SU PEDIDO LISTO *****\n");
										break;
									case 2:
										printf("** SU PEDIDO SERA ENVIADO POR DELIVERY **\n** POR FAVOR CANCELAR LA CARRERA AL DELIVERY **\n");
										break;
									}
									
							case 3:
							printf("******************* PAGO POR QR *******************\n** POR FAVOR ESCANEA EL SIGUIENTE CODIGO **\n");
							printf(" *****  ***** \n");
							printf(" *   *  *   * \n");
							printf(" *   *  ***** \n");
							printf(" * * *  ***   \n");
							printf(" *****  *  *  \n");
							printf("     ** *   * \n");
							
							printf("** SU PAGO FUE REALIZADO CON EXITO **\n ** SU PEDIDO ESTA SIENDO PREPARADO **\n");
							printf(" \n** SU PEDIDO ESTAR LISTO EN 20 MIN **\n");
							printf("\n** ENTREGA DE PEDIDO **\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
							scanf("%d,",&r);
								switch(r){
									case 1:
										printf("*** LO ESPERAMOS CON SU PEDIDO LISTO ***\n");
										break;
									case 2:
										printf("*** SU PEDIDO SERA ENVIADO POR DELIVERY *** \n*** POR FAVOR CANCELAR LA CARRERA AL DELIVERY ***");
										
									
									printf("\n***** GRACIAS POR SU PREFERENCIA *****");
										break;	
					}	
					case 4:
							printf("***** PEDIDO CANCELADO *****");
							break;
}
}
break;

//MENU DE EXTRAS
			case 3:
	
			printf("\n******************* MENU DE EXTRAS *******************\n1.PORCION DE PAPAS\n2.SALSAS EXTRA\n3.PEPSI DE 200 ml.\n4.VOLVER\n");
			scanf("%d",&e);
			switch(e){
				
				case 1:
					printf("PORCION DE PAPA = BS. 6 \n");
					printf("\nCUANTAS PORCIONES VA A ORDENAR\n");
					scanf("%d",&c);
					total=c*6;
					printf("\nEL TOTAL  ES DE : BS.%d", total);
					printf("\nREALIZAR PAGO POR:\n1.EFECTIVO\n2.TRANSFERENCIA\n3.QR\n4.CANCELAR\n");
					scanf("%d",&v);
					switch(v){
							case 1:
							printf("******************* PAGO EN EFECTIVO *******************\n** EL PAGO DEBERA REALIZARLO AL MOMENTO DE RECOGER SU PEDIDO **\n** SU PEDIDO ESTA SIENDO PREPARADO **\n");
								printf("\n** SU PEDIDO ESTAR LISTO EN 20 MIN **\n");
							printf("** ENTREGA DE PEDIDO **\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
							scanf("%d,",&r);
								switch(r){
									case 1:
										printf("***** LO ESPERAMOS CON SU PEDIDO LISTO *****\n");
										break;
									case 2:
										printf("** SU PEDIDO SERA ENVIADO POR DELIVERY **\n** POR FAVOR CANCELAR LA CARRERA AL DELIVERY **\n");
									
									}
									break;
							
							case 2:
							
							printf("******************* PAGO POR TRANSFERENCIA *******************\n** POR FAVOR DEPOSITE EL MONTO A CANCELAR EN EL NUMERO DE CUENTA **\n** BLACK FOOD TRUCK **\n** 4070777999 **");
								printf(" \n** SU PEDIDO ESTAR LISTO EN 20 MIN **\n ");
							printf("** ENTREGA DE PEDIDO **\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
							scanf("%d,",&r);
								switch(r){
									case 1:
										printf("***** LO ESPERAMOS CON SU PEDIDO LISTO *****\n");
										break;
									case 2:
										printf("** SU PEDIDO SERA ENVIADO POR DELIVERY **\n** POR FAVOR CANCELAR LA CARRERA AL DELIVERY **\n");
									
									}
										break;


							case 3:
							printf("******************* PAGO POR QR *******************\n** POR FAVOR ESCANEA EL SIGUIENTE CODIGO **\n");
							printf(" *****  ***** \n");
							printf(" *   *  *   * \n");
							printf(" *   *  ***** \n");
							printf(" * * *  ***   \n");
							printf(" *****  *  *  \n");
							printf("     ** *   * \n");
							
							printf("** SU PAGO FUE REALIZADO CON EXITO **\n ** SU PEDIDO ESTA SIENDO PREPARADO **\n");
							printf(" \n** SU PEDIDO ESTAR LISTO EN 20 MIN **\n");
							printf("\n** ENTREGA DE PEDIDO **\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
							scanf("%d,",&r);
								switch(r){
									case 1:
										printf("*** LO ESPERAMOS CON SU PEDIDO LISTO ***\n");
										break;
									case 2:
										printf("*** SU PEDIDO SERA ENVIADO POR DELIVERY *** \n*** POR FAVOR CANCELAR LA CARRERA AL DELIVERY ***");
										
									
									printf("\n***** GRACIAS POR SU PREFERENCIA *****\n");
											
									}
									break;

				
							
							case 4:
							printf("***** PEDIDO CANCELADO *****\n");
							break;			
}
break;
				case 2:
				
					printf("\nSALSAS EXTRA = BS. 3\n");
					
					printf("\nELIJA LOS SABORES:\n\n1.BARBACOA\n2.MIEL Y MOZTAZA\n3.PICANTE\n");
					scanf("%d",&s);
					
					switch(s){
						
						
						case 1:
							printf("\nSALSA BARBACOA\n");
							printf("INTRODUZCA LA CANTIDAD DE SALSA BARBACOA\n");
							scanf("%d",&q);
							total=q*3;
							printf("\nEL TOTAL  ES DE : BS.%d", total);
							printf("\nREALIZAR PAGO POR:\n1.EFECTIVO\n2.TRANSFERENCIA\n3.QR\n4.CANCELAR\n");
							scanf("%d",&v);
							switch(v){
								case 1:
									printf("******************* PAGO EN EFECTIVO *******************\n** EL PAGO DEBERA REALIZARLO AL MOMENTO DE RECOGER SU PEDIDO **\n** SU PEDIDO ESTA SIENDO PREPARADO **\n");
									printf("\n** SU PEDIDO ESTAR LISTO EN 20 MIN **\n");
									printf("** ENTREGA DE PEDIDO **\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
									scanf("%d,",&r);
									switch(r){
										case 1:
											printf("***** LO ESPERAMOS CON SU PEDIDO LISTO *****\n");
										break;
										case 2:
											printf("** SU PEDIDO SERA ENVIADO POR DELIVERY **\n** POR FAVOR CANCELAR LA CARRERA AL DELIVERY **\n");
									
									}
									break;
				            case 2:
							
							printf("******************* PAGO POR TRANSFERENCIA *******************\n** POR FAVOR DEPOSITE EL MONTO A CANCELAR EN EL NUMERO DE CUENTA **\n** BLACK FOOD TRUCK **\n** 4070777999 **");
								printf(" \n** SU PEDIDO ESTAR LISTO EN 20 MIN **\n ");
							printf("** ENTREGA DE PEDIDO **\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
							scanf("%d,",&r);
								switch(r){
									case 1:
										printf("***** LO ESPERAMOS CON SU PEDIDO LISTO *****\n");
										break;
									case 2:
										printf("** SU PEDIDO SERA ENVIADO POR DELIVERY **\n** POR FAVOR CANCELAR LA CARRERA AL DELIVERY **\n");
									
									}
										break;	
							case 3:
									
							printf("******************* PAGO POR QR *******************\n** POR FAVOR ESCANEA EL SIGUIENTE CODIGO **\n");
							printf(" *****  ***** \n");
							printf(" *   *  *   * \n");
							printf(" *   *  ***** \n");
							printf(" * * *  ***   \n");
							printf(" *****  *  *  \n");
							printf("     ** *   * \n");
							
							printf("** SU PAGO FUE REALIZADO CON EXITO **\n ** SU PEDIDO ESTA SIENDO PREPARADO **\n");
							printf(" \n** SU PEDIDO ESTAR LISTO EN 20 MIN **\n");
							printf("\n** ENTREGA DE PEDIDO **\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
							scanf("%d,",&r);
								switch(r){
									case 1:
										printf("*** LO ESPERAMOS CON SU PEDIDO LISTO ***\n");
										break;
									case 2:
										printf("*** SU PEDIDO SERA ENVIADO POR DELIVERY *** \n*** POR FAVOR CANCELAR LA CARRERA AL DELIVERY ***");
										
									
									printf("\n***** GRACIAS POR SU PREFERENCIA *****\n");
											
									}
									break;
	
							case 4:
							printf("***** PEDIDO CANCELADO *****\n");
							break;	
}
break;
						case 2:
							printf("INTRODUZCA LA CANTIDAD DE SALSA MIEL Y MOZTAZA\n");
							scanf("%d",&m);
							total=q*3;
							printf("\nREALIZAR PAGO POR:\n1.EFECTIVO\n2.TRANSFERENCIA\n3.QR\n4.CANCELAR\n");
							scanf("%d",&v);
							switch(v){
								case 1:
									printf("******************* PAGO EN EFECTIVO *******************\n** EL PAGO DEBERA REALIZARLO AL MOMENTO DE RECOGER SU PEDIDO **\n** SU PEDIDO ESTA SIENDO PREPARADO **\n");
									printf("\n** SU PEDIDO ESTAR LISTO EN 20 MIN **\n");
									printf("** ENTREGA DE PEDIDO **\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
									scanf("%d,",&r);
									switch(r){
										case 1:
											printf("***** LO ESPERAMOS CON SU PEDIDO LISTO *****\n");
										break;
										case 2:
											printf("** SU PEDIDO SERA ENVIADO POR DELIVERY **\n** POR FAVOR CANCELAR LA CARRERA AL DELIVERY **\n");
									
									}
									break;
								 case 2:
							
									printf("******************* PAGO POR TRANSFERENCIA *******************\n** POR FAVOR DEPOSITE EL MONTO A CANCELAR EN EL NUMERO DE CUENTA **\n** BLACK FOOD TRUCK **\n** 4070777999 **");
									printf(" \n** SU PEDIDO ESTAR LISTO EN 20 MIN **\n ");
									printf("** ENTREGA DE PEDIDO **\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
									scanf("%d,",&r);
									switch(r){
										case 1:
										printf("***** LO ESPERAMOS CON SU PEDIDO LISTO *****\n");
										break;
										case 2:
										printf("** SU PEDIDO SERA ENVIADO POR DELIVERY **\n** POR FAVOR CANCELAR LA CARRERA AL DELIVERY **\n");
									
									}
										break;	
									
							case 3:
									
							printf("******************* PAGO POR QR *******************\n** POR FAVOR ESCANEA EL SIGUIENTE CODIGO **\n");
							printf(" *****  ***** \n");
							printf(" *   *  *   * \n");
							printf(" *   *  ***** \n");
							printf(" * * *  ***   \n");
							printf(" *****  *  *  \n");
							printf("     ** *   * \n");
							
							printf("** SU PAGO FUE REALIZADO CON EXITO **\n ** SU PEDIDO ESTA SIENDO PREPARADO **\n");
							printf(" \n** SU PEDIDO ESTAR LISTO EN 20 MIN **\n");
							printf("\n** ENTREGA DE PEDIDO **\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
							scanf("%d,",&r);
								switch(r){
									case 1:
										printf("*** LO ESPERAMOS CON SU PEDIDO LISTO ***\n");
										break;
									case 2:
										printf("*** SU PEDIDO SERA ENVIADO POR DELIVERY *** \n*** POR FAVOR CANCELAR LA CARRERA AL DELIVERY ***");
										
									
									printf("\n***** GRACIAS POR SU PREFERENCIA *****\n");
											
									}
									break;
	
							case 4:
							printf("***** PEDIDO CANCELADO *****\n");
							break;	
}
break;
						case 3:
							printf("INTRODUZCA LA CANTIDAD SALSA PICANTE\n");
							scanf("%d",&i);
							total=i*3;
							printf("\nREALIZAR PAGO POR:\n1.EFECTIVO\n2.TRANSFERENCIA\n3.QR\n4.CANCELAR\n");
							scanf("%d",&v);
							switch(v){
								case 1:
									printf("******************* PAGO EN EFECTIVO *******************\n** EL PAGO DEBERA REALIZARLO AL MOMENTO DE RECOGER SU PEDIDO **\n** SU PEDIDO ESTA SIENDO PREPARADO **\n");
									printf("\n** SU PEDIDO ESTAR LISTO EN 20 MIN **\n");
									printf("** ENTREGA DE PEDIDO **\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
									scanf("%d,",&r);
									switch(r){
										case 1:
											printf("***** LO ESPERAMOS CON SU PEDIDO LISTO *****\n");
										break;
										case 2:
											printf("** SU PEDIDO SERA ENVIADO POR DELIVERY **\n** POR FAVOR CANCELAR LA CARRERA AL DELIVERY **\n");
									
									}
									break;
								 case 2:
							
									printf("******************* PAGO POR TRANSFERENCIA *******************\n** POR FAVOR DEPOSITE EL MONTO A CANCELAR EN EL NUMERO DE CUENTA **\n** BLACK FOOD TRUCK **\n** 4070777999 **");
									printf(" \n** SU PEDIDO ESTAR LISTO EN 20 MIN **\n ");
									printf("** ENTREGA DE PEDIDO **\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
									scanf("%d,",&r);
									switch(r){
										case 1:
										printf("***** LO ESPERAMOS CON SU PEDIDO LISTO *****\n");
										break;
										case 2:
										printf("** SU PEDIDO SERA ENVIADO POR DELIVERY **\n** POR FAVOR CANCELAR LA CARRERA AL DELIVERY **\n");
									
									}
										break;	
									
							case 3:
									
							printf("******************* PAGO POR QR *******************\n** POR FAVOR ESCANEA EL SIGUIENTE CODIGO **\n");
							printf(" *****  ***** \n");
							printf(" *   *  *   * \n");
							printf(" *   *  ***** \n");
							printf(" * * *  ***   \n");
							printf(" *****  *  *  \n");
							printf("     ** *   * \n");
							
							printf("** SU PAGO FUE REALIZADO CON EXITO **\n ** SU PEDIDO ESTA SIENDO PREPARADO **\n");
							printf(" \n** SU PEDIDO ESTAR LISTO EN 20 MIN **\n");
							printf("\n** ENTREGA DE PEDIDO **\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
							scanf("%d,",&r);
								switch(r){
									case 1:
										printf("*** LO ESPERAMOS CON SU PEDIDO LISTO ***\n");
										break;
									case 2:
										printf("*** SU PEDIDO SERA ENVIADO POR DELIVERY *** \n*** POR FAVOR CANCELAR LA CARRERA AL DELIVERY ***");
										
									
									printf("\n***** GRACIAS POR SU PREFERENCIA *****\n");
											
									}
									break;
	
							case 4:
							printf("***** PEDIDO CANCELADO *****\n");
							break;	


}
}
break;
			case 3:
				printf("\nPEPSI 200ml. = BS. 3\n");
				printf("\nCUANTAS REFRESCOS VA A ORDENAR\n");
				scanf("%d",&c);
				total=c*3;
				printf("\nEL TOTAL  ES DE : BS.%d", total);
				printf("\nREALIZAR PAGO POR:\n1.EFECTIVO\n2.TRANSFERENCIA\n3.QR\n4.CANCELAR\n");
							scanf("%d",&v);
							switch(v){
								case 1:
									printf("******************* PAGO EN EFECTIVO *******************\n** EL PAGO DEBERA REALIZARLO AL MOMENTO DE RECOGER SU PEDIDO **\n** SU PEDIDO ESTA SIENDO PREPARADO **\n");
									printf("\n** SU PEDIDO ESTAR LISTO EN 20 MIN **\n");
									printf("** ENTREGA DE PEDIDO **\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
									scanf("%d,",&r);
									switch(r){
										case 1:
											printf("***** LO ESPERAMOS CON SU PEDIDO LISTO *****\n");
										break;
										case 2:
											printf("** SU PEDIDO SERA ENVIADO POR DELIVERY **\n** POR FAVOR CANCELAR LA CARRERA AL DELIVERY **\n");
									
									}
									break;
								 case 2:
							
									printf("******************* PAGO POR TRANSFERENCIA *******************\n** POR FAVOR DEPOSITE EL MONTO A CANCELAR EN EL NUMERO DE CUENTA **\n** BLACK FOOD TRUCK **\n** 4070777999 **");
									printf(" \n** SU PEDIDO ESTAR LISTO EN 20 MIN **\n ");
									printf("** ENTREGA DE PEDIDO **\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
									scanf("%d,",&r);
									switch(r){
										case 1:
										printf("***** LO ESPERAMOS CON SU PEDIDO LISTO *****\n");
										break;
										case 2:
										printf("** SU PEDIDO SERA ENVIADO POR DELIVERY **\n** POR FAVOR CANCELAR LA CARRERA AL DELIVERY **\n");
									
									}
										break;	
									
							case 3:
									
							printf("******************* PAGO POR QR *******************\n** POR FAVOR ESCANEA EL SIGUIENTE CODIGO **\n");
							printf(" *****  ***** \n");
							printf(" *   *  *   * \n");
							printf(" *   *  ***** \n");
							printf(" * * *  ***   \n");
							printf(" *****  *  *  \n");
							printf("     ** *   * \n");
							
							printf("** SU PAGO FUE REALIZADO CON EXITO **\n ** SU PEDIDO ESTA SIENDO PREPARADO **\n");
							printf(" \n** SU PEDIDO ESTAR LISTO EN 20 MIN **\n");
							printf("\n** ENTREGA DE PEDIDO **\n1.PASAR A RECOGER EL PEDIDO\n2.ENVIAR POR DELIVERY\n");
							scanf("%d,",&r);
								switch(r){
									case 1:
										printf("*** LO ESPERAMOS CON SU PEDIDO LISTO ***\n");
										break;
									case 2:
										printf("*** SU PEDIDO SERA ENVIADO POR DELIVERY *** \n*** POR FAVOR CANCELAR LA CARRERA AL DELIVERY ***");
										
									
									printf("\n***** GRACIAS POR SU PREFERENCIA *****\n");
											
									}
									break;
									default:
										break;
	
							case 4:
							printf("***** PEDIDO CANCELADO *****\n");
							break;
								


}		
		
}

break;
			case 4:
				salir=0;
				printf("\n*** GRACIAS POR USAR EL PROGRAMA ***\n//*** BLACK  FOOD  TRUCK ***// \n");
																										printf("Programa realizado por: CRISTIAN FERNANDO CASTELLON MERCADO. COCHABAMBA.BOLIVIA.2023");




}

}while(salir);

return 0;
}