#include <form.h>
#include <stdlib.h>
#include <string.h>
int main()
{	
	
	typedef struct mystruct {
		int x;
		int y;

	} aliasstruct;
	char * test;

	aliasstruct  * cdstruct[200];
	aliasstruct cds[2];
    aliasstruct * pCDR[2];
	pCDR[0]=malloc(sizeof(aliasstruct));
	cds[0]=*pCDR[0];
	
	cds[1].x=4;
	cds[2].y=6;
	test=malloc((sizeof(char*)));
	cdstruct[0]=(aliasstruct*)malloc(sizeof(aliasstruct));

	cdstruct[0]->x=1;
	cdstruct[0]->y=2;
    cdstruct[1]=(aliasstruct*)malloc(sizeof(aliasstruct));
	cdstruct[1]->x=3;
	cdstruct[1]->y=5;
	printf("%d",cds->x);
	strcpy(test,"clen");
//	test=realloc(test,(sizeof(char*))*10);
	strcat(test,"pizda");
	strcat(test,"pizda");
	strcat(test,"pizda");
	/* Initialize curses */
		
	
	
	
	
			
			
			
			
	
	
	
	
	








}
