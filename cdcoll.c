#include <stdio.h>

#ifndef STDLIB_H
#define STDLB_H
#include <stdlib.h>
#include <string.h>
#endif
#include "data_struct.h"
#include "tui.c"
#include<curses.h>
#define DIALOG_H

char generated_rows[200][50];
//char player_slots[200][50]={};   #include <dialog.h>

int main()
{
    
/*
   int status;
    init_dialog(stdin, stdout);
    dialog_vars.item_help=false;
   
    char dname[10]="xuy";
   
   char buf[MAX_LEN];
    //   Name NameY NameX Text TextY TextX FLen ILen
     
    char * rows[]={"1","1","1","Disk Name","1","10","15","15",
    "2","2","1","Disk Name","2","10","15","15",
    "3","3","1",dname,"3","10","15","15"};
    dialog_vars.input_result=NULL;
   dialog_vars.item_help=false;
   dialog_form("test","Slots",30,30,30,3,rows) ;
    //dialog_vars.input_menu=true;
   // dialog_menu("test","test",40,50,40,4,rows) ;
   
    //dialog_inputbox("test","fre",0,0,"eett",0);
    end_dialog();
  
 printf("%s",dialog_vars.input_result);
 
/*
   strcpy(player_slots[1],"30s hits");
  
   
    write_to_file(player_slots);
    strcpy(player_slots[1],"         ");
   
   //*player_slots[1]="";
   read_from_file(player_slots);

   printf("%s\n",player_slots[1]);
   
 */

//build_edit_list();
generate_rows(generated_rows);
}