#include <stdio.h>

int main()
{
	int op;
	char op2='a';
	
	do{
	printf("\n\t***UEFA CHAMPIONS LEAGUE 2018-19***");
	printf("\n\n\t1.- 8vos de final");
	printf("\n\t2.- 4tos de final");
	printf("\n\t3.- Final");
	printf("\n\t4.- Campeon");
	printf("\n\t5.- Mapa completo");
	printf("\n\t6.- Salir");
	do{
	printf("\n\n\tSeleccione una opción (1-5): ");
	fflush(stdin);
	scanf("%i", &op);
	
	if(op <=0 || op >=6)
	{
		printf("\n\n\t***Opcion incorrecta***\n\t*Ingrese de nuevo una opción\n");
	}
	}while(op <=0 || op >=6);
	
	switch(op)
	{
		case 1:
			printf("\n\n       ***8vos de final***\n\n");
			printf(" ____________          _____________\n");
			printf("|            |        |             |\n");
			printf("| SCHALKE 04 |   VS   |    M.CITY   |\n");
			printf("|____________|        |_____________|\n");
			printf(" ____________          _____________\n");
			printf("|            |        |             |\n");
			printf("|  ATLÉTICO  |   VS   |   JUVENTUS  |\n");
			printf("|____________|        |_____________|\n");
			printf(" ____________          _____________\n");
			printf("|            |        |             |\n");
			printf("|  M.UNITED  |   VS   |     PSG     |\n");
			printf("|____________|        |_____________|\n");
			printf(" ____________          _____________\n");
			printf("|            |        |             |\n");
			printf("| TOTTENHAM  |   VS   | B. DORTMUND |\n");
			printf("|____________|        |_____________|\n");
			printf(" ____________          _____________\n");
			printf("|            |        |             |\n");
			printf("|   LYION    |   VS   |  BARCELONA  |\n");
			printf("|____________|        |_____________|\n");
			printf(" ____________          _____________\n");
			printf("|            |        |             |\n");
			printf("|    ROMA    |   VS   |    OPORTO   |\n");
			printf("|____________|        |_____________|\n");
			printf(" ____________          _____________\n");
			printf("|            |        |             |\n");
			printf("|   AJAX     |   VS   | REAL MADRID |\n");
			printf("|____________|        |_____________|\n");
			printf(" ____________          _____________\n");
			printf("|            |        |             |\n");
			printf("|  LIVERPOOL |   VS   |    BAYERN   |\n");
			printf("|____________|        |_____________|\n");
			break;
		case 2:
			printf("\n\n          ***4tos de final***\n\n");
			printf(" _____________          _____________\n");
			printf("|             |        |             |\n");
			printf("|  TOTTENHAM  |   VS   |    M.CITY   |\n");
			printf("|_____________|        |_____________|\n");
			printf(" _____________          _____________\n");
			printf("|             |        |             |\n");
			printf("|    AJAX     |   VS   |   JUVENTUS  |\n");
			printf("|_____________|        |_____________|\n");
			printf(" _____________          _____________\n");
			printf("|             |        |             |\n");
			printf("|  M.UNITED   |   VS   |  BARCELONA  |\n");
			printf("|_____________|        |_____________|\n");
			printf(" _____________          _____________\n");
			printf("|             |        |             |\n");
			printf("|   OPORTO    |   VS   |  LIVERPOOL  |\n");
			printf("|_____________|        |_____________|\n");
			break;
		case 3:
			printf("\n\n              ***FINAL***\n\n");
			printf(" _____________          _____________\n");
			printf("|             |        |             |\n");
			printf("|  TOTTENHAM  |   VS   |  LIVERPOOL  |\n");
			printf("|_____________|        |_____________|\n");
			break;
		case 4:
			printf("\n\n              ***CAMPEON***\n\n");
			printf("              _____________\n");
			printf("             |             |\n");
			printf("             |  LIVERPOOL  |\n");
			printf("             |_____________|\n");
			break;
		case 5:
			printf("\n\n                        MAPA COMPLETO\n\n");
			printf(" _____________\n");
			printf("|             |\n");
			printf("|  TOTTENHAM  |---    _____________\n");
			printf("|_____________|   |  |             |\n");
			printf(" _____________    |--|  TOTTENHAM  |--\n");
			printf("|             |   |  |_____________|  |\n");
			printf("| B. DORTMUND |---                    |\n");
			printf("|_____________|                       |\n");
			printf(" _____________                        |----------\n");
			printf("|             |                       |          |\n");
			printf("| SCHALKE 04  |---    _____________   |          |\n");
			printf("|_____________|   |  |             |  |          |\n");
			printf(" _____________    |--|   M.CITY    |--           |\n");
			printf("|             |   |  |_____________|             |\n");
			printf("|   M.CITY    |---                               |      ______________\n");
			printf("|_____________|                                  |     |              |\n");
			printf(" _____________                                   |-----|   TOTTENHAM  |----\n");
			printf("|             |                                  |     |______________|    |\n");
			printf("|    AJAX     |---    _____________              |                         |\n");
			printf("|_____________|   |  |             |             |                         |\n");
			printf(" _____________    |--|    AJAX     |--           |                         |\n");
			printf("|             |   |  |_____________|  |          |                         |\n");
			printf("| REAL MADRID |---                    |          |                         |\n");
			printf("|_____________|                       |          |                         |\n");
			printf(" _____________                        |----------                          |\n");
			printf("|             |                       |                                    |\n");
			printf("|   ATLETICO  |---    _____________   |                                    |\n");
			printf("|_____________|   |  |             |  |                                    |\n");
			printf(" _____________    |--|   JUVENTUS  |--                                     |\n");
			printf("|             |   |  |_____________|                                       |\n");
			printf("|   JUVENTUS  |---                                                         |     ______________\n");
			printf("|_____________|                                                            |    |              |\n");
			printf(" _____________                                                             |----|   LIVERPOOL  |\n");
			printf("|             |                                                            |    |______________|\n");
			printf("|   M.UNITED  |---    _____________                                        |\n");
			printf("|_____________|   |  |             |                                       |\n");
			printf(" _____________    |--|   M.UNITED  |--                                     |\n");
			printf("|             |   |  |_____________|  |                                    |\n");
			printf("|     PSG     |---                    |                                    |\n");
			printf("|_____________|                       |                                    |\n");
			printf(" _____________                        |----------                          |\n");
			printf("|             |                       |          |                         |\n");
			printf("|    LYION    |---    _____________   |          |                         |\n");
			printf("|_____________|   |  |             |  |          |                         |\n");
			printf(" _____________    |--|  BARCELONA  |--           |                         |\n");
			printf("|             |   |  |_____________|             |                         |\n");
			printf("|  BARCELONA  |---                               |      ______________     |\n");
			printf("|_____________|                                  |     |              |    |\n");
			printf(" _____________                                   |-----|   LIVERPOOL  |----\n");
			printf("|             |                                  |     |______________|\n");
			printf("|    ROMA     |---    _____________              |\n");
			printf("|_____________|   |  |             |             |\n");
			printf(" _____________    |--|   OPORTO    |--           |\n");
			printf("|             |   |  |_____________|  |          |\n");
			printf("|   OPORTO    |---                    |          |\n");
			printf("|_____________|                       |          |\n");
			printf(" _____________                        |----------\n");
			printf("|             |                       |\n");
			printf("|   BAYERN    |---    _____________   |\n");
			printf("|_____________|   |  |             |  |\n");
			printf(" _____________    |--|  LIVERPOOL  |--\n");
			printf("|             |   |  |_____________|\n");
			printf("|  LIVERPOOL  |---\n");
			printf("|_____________|\n");			
			break;
		case 6:
			printf("Elegiste salir");
			return 0;
			break;
	}
	
	printf("\n\n\tPresiona cualquir cualquier tecla para continuar <ENTER>...\n\n");
	}while(op2=='a');
	return 0;
}
