#ifndef DIALOG_H
#define DIALOG_H

#ifndef STDLIB_H
#define STDLB_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <menu.h>
#include <curses.h>
#include "data_struct.h"
#endif
#endif


char disklist[200][10];

/*
void generate_list()
{
    for (int i=0;i<=201;i++)
    {
        disklist[i]="Emorricone";
    }
}

*/

void get_list_from_file(char  disklist[200][10])
{

read_from_file(disklist);
//printf("%s\n",disklist[1]);
}



char * get_contents_of_slot(int id)
{
    return(disklist[id]);
}

void build_list()

{
    get_list_from_file(disklist);
    
    strcpy(disklist[0],"NA");
    //generate_list();

    char mesg[]="Just a string";		/* message to be appeared on the screen */
    int row,col;				/* to store the number of rows and *
					 * the number of colums of the screen */
    initscr();	
    start_color();			/* Start color 			*/
    init_pair(1, COLOR_WHITE, COLOR_BLUE);
			/* start the curses mode */
    init_pair(2, COLOR_WHITE, COLOR_MAGENTA);
    attron(COLOR_PAIR(1));            
    getmaxyx(stdscr,row,col);/* get the number of rows and columns */
    char temp[3];
 /* display 1st column*/
 for (int i=0;i<40;i++)
 {
 sprintf(temp,"%d",i);
 mvprintw(i,0,"%s",temp);   
 mvprintw(i,3,"%s",disklist[i]);
 }       

/* display 2nd column*/
for (int i=40;i<80;i++)
{
sprintf(temp,"%d",i);
mvprintw(i-40,15,"%s",temp);   
mvprintw(i-40,18,"%s",disklist[i]);
}       

/* display 3rd column*/
for (int i=80;i<120;i++)
{
sprintf(temp,"%d",i);
mvprintw(i-80,30,"%s",temp);   
mvprintw(i-80,33,"%s",disklist[i]);
}       
/* display 4rd column*/
for (int i=120;i<160;i++)
{
sprintf(temp,"%d",i);
mvprintw(i-120,45,"%s",temp);   
mvprintw(i-120,49,"%s",disklist[i]);
}       
/* display 4rd column*/
for (int i=160;i<200;i++)
{
sprintf(temp,"%d",i);
mvprintw(i-160,65,"%s",temp);   
mvprintw(i-160,69,"%s",disklist[i]);
}       

//print last 200 slot
mvprintw(0,77,"%s","200");   
mvprintw(0,82,"%s",disklist[200]);
char str[3];
attron(COLOR_PAIR(2)); 
mvprintw(0,100,"%s","enter Disk Block (0 to exit):");                     	
getnstr(str,3);
int slotid;
slotid=atoi(str);
if (slotid !=0) {
 mvprintw(1, 100, "Current disk: %s", get_contents_of_slot(slotid));
 mvprintw(2,100,"%s","enter New Content:"); 
 refresh();
 getch();
}
 //
 endwin();


}

