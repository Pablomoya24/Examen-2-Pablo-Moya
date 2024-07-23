#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<ctype.h>
#include <iostream>
#include <locale.h>
/***********************************************************************************************///variabes globales

char Nombre[30],Cedula[10],Candidato1[30],Candidato2[30],Candidato3[30],mensaje[30],Partido1[30],Partido2[30],Partido3[30];
float Promedio;
int totalvotos,sigue,i=0,Candidatos,votos=0;


/***********************************************************************************************/
//atributo para color de letra
HANDLE hConsoleHandle = GetStdHandle (STD_OUTPUT_HANDLE);
/***********************************************************************************************/

//prototipos de funciones y procedimientos
void menu();
void gotoxy(int x ,int y);
void cuadro(int x1, int y1, int x2, int y2);
int cuadrado();
int cubo();
void Registrar_Candidatos();
void Votos (int x, int y);
void Resultados();


void gotoxy(int x ,int y)
{
	COORD coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);

}


void cuadro(int x1, int y1, int x2, int y2)
{
	int i;
	
	for (i=x1; i<=x2;i++)
	{
		gotoxy(i,y1); printf("%c",205);   
		gotoxy(i,y2); printf("%c",205);   
	}

	for (i=y1; i<=y2;i++)
	{
		gotoxy(x1,i); printf("%c",186);  
		gotoxy(x2,i); printf("%c",186);   
	}

	
	gotoxy(x1,y1); printf("%c",201);   
	gotoxy(x1,y2); printf("%c",200);  
	gotoxy(x2,y1); printf("%c",187);  
	gotoxy(x2,y2); printf("%c",188);  

}


void Registrar_Candidatos(){
	
	
do{
		system("cls");
	cuadro(8,8,72,22);//grande
	cuadro(18,3,38,5);
	cuadro(10,23,32,25);//pequeño abajo
	setlocale(LC_ALL,"");	
	gotoxy(20,04);printf("INGRESE CANDIDATOS");

		
		gotoxy(12,10);printf("INGRESE EL NOMBRE DEL CANDIDATO 1-->");
        fflush(stdin); gets(Candidato1);
	    gotoxy(12,12);printf("INGRESE EL PARTIDO POLITICO-->");
    	scanf ("%s",&Partido1);
		gotoxy(12,14);printf("INGRESE EL NOMBRE DEL CANDIDATO 2-->");
	    fflush(stdin); gets(Candidato2);
		gotoxy(12,16);printf("INGRESE EL PARTIDO POLITICO-->");
	    scanf ("%s",&Partido2); 
	    gotoxy(12,18); printf("INGRESE EL NOMBRE DEL CANDIDATO 3-->");
		fflush(stdin); gets(Candidato3);
	    gotoxy(12,20);printf("INGRESE EL PARTIDO POLITICO-->");
	    scanf ("%s",&Partido3);
	
		do{
		gotoxy(12,24);printf("Desea Continuar S/N");
		sigue=getch();

		}while (toupper(sigue)!='S' && toupper(sigue)!='N');
		
	}while (tolower(sigue)=='s');
	
	}
	
	





void Votos (){
   

do{
	system("cls");
	cuadro(8,8,106,15);//grande
	cuadro(18,3,31,5);
	cuadro(10,15,60,19);
	setlocale(LC_ALL,"");
	
   	gotoxy(20,04);printf("VOTACIONES");
	
    	gotoxy(12,10);printf("INGRESE SU NOMBRE Y APELLIDOS:");
	fflush(stdin); gets(Nombre);
		gotoxy(12,12);printf("INGRSE SU CEDULA:");
	scanf ("%s",&Cedula);
		gotoxy(12,14);printf ("Vote por uno de los siguientes candidatos: [1- Candidato1] [2- Candidato2] [3- candidato3]: ");
     scanf("%i",&Candidatos);
	 
	 switch (Candidatos){
	 	case 1:
	 		strcpy(mensaje,"Candidato1");
	 		
	 		
	 		votos++;
	 		break;
	 	
	 	case 2:
	 		strcpy(mensaje,"Candidato2");

	 		
	 	    votos++;
	 		break;
	 	
	 	case 3:
	 		strcpy(mensaje,"Candidato3");
	 	
	 		
	 		votos++;
	 		break;
	 	
	 	default:
	 		printf("\n ERROR: Localidad invalidad");
	 	 }
	 	 
	 	 totalvotos= votos;
	 	 Promedio= totalvotos / Candidatos;
	 	do{
		gotoxy(12,16);printf("GRACIAS POR VOTAR, PRECIONE (S) PARA SALIR\n");
		sigue=getch();

		}while (toupper(sigue)!='S' && toupper(sigue)!='N');
		
}while (toupper(sigue)!='S' && toupper(sigue)!='N');

 	gotoxy(12,18);printf("<Pulse una tecla para volver al menu> ");
	getch();

}

void RESULTADOS (){

do{

system("cls");


printf("\n********RESULTADOS DE LAS ELECCIONES*******\n");

printf ("\n\n Nombre del Candidato 1: %s",Candidato1);
printf("\n\n Partido Politico: %s",Partido1);	
printf ("\n\n Nombre del Candidato 2: %s",Candidato2);
printf("\n\n Partido Politico: %s",Partido2);
printf ("\n\n Nombre del Candidato 3: %s",Candidato3);
printf("\n\n Partido Politico: %s",Partido3);
printf("\n\n Candidato ganador: %s",mensaje);
printf ("\n\n Promedio de votos: %.2f",Promedio);
printf("\n-----------------------------\n");
printf("\n\n Nombre del votante: %s",Nombre);
printf("\n\n Cedula del votante: %s",Cedula);
printf("\n\n Candidato seleccionado por el votante: %s\n",mensaje);


		do{
		printf("Desea Continuar S/N");
		sigue=getch();

		}while (toupper(sigue)!='S' && toupper(sigue)!='N');
		
	}while (tolower(sigue)=='s');
	
	}	


void menu()

{
	char opc,conti;
//HANDLE hConsoleHandle = GetStdHandle (STD_OUTPUT_HANDLE);
	

	do{	

		system("cls");
		cuadro(16,2,65,6); //primer cuadro de arriba hacia abajo
		cuadro(8,8,72,22);//grande
		cuadro(8,23,72,25); //cuadro de abajo opcion es
		cuadro(56,19,68,21); //cuadro pequeño salir

		SetConsoleTextAttribute (hConsoleHandle, 10);
	    gotoxy(22,4);printf("*****Elecciones Municipales*****\n");
        SetConsoleTextAttribute (hConsoleHandle, 15);
	    gotoxy(15,10);printf("[1]  REGISTRAR CANDIDATOS\n");
	    gotoxy(15,12);printf("[2]  VOTOS\n");
		gotoxy(15,14);printf("[3]  RESULTADOS\n");
		gotoxy(57,20);printf("<[4] SALIR>\n");
		
		SetConsoleTextAttribute(hConsoleHandle,14);
		gotoxy(15,24);printf("Su opcion es: ");
		opc=getch();

		switch(opc)
		{
		case '1': Registrar_Candidatos();break;
		case '2': Votos(); break;
		case '3': RESULTADOS(); break;
		
		case '4': 
				
			system("cls");
			printf("Estas seguro Que Deseas Salir del Sistema\n");
			SetConsoleTextAttribute (hConsoleHandle, 2);
			printf("Desea Continuar S/N");
			conti=getch();

			if (conti=='N' || conti=='n')
				menu();
			else if (conti=='S' || conti=='s')

				break; 
		}
		}while(opc!='4');
		}




/********************************************************************************************/

int main(int argc, char** argv) {
	menu();
	getch();
	return 0;
}












