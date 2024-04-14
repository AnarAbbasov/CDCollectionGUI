#include <stdio.h>

#ifndef STDLIB_H
#define STDLB_H
#include <stdlib.h>
#include <string.h>
#endif
#include "data_struct.h"
#include<curses.h>
#include <dialog.h>

char player_slots[200][50]={};

int main()
{
    

   int status;
    init_dialog(stdin, stdout);
    dialog_vars.item_help=false;
   
   
   
   
    
     
    char * rows[]={"1","we","2","fdd","3","sfd","4","dds"};
    

    dialog_form("test","test",0,0,0,2,rows) ;
    dialog_vars.input_menu=true;
    //dialog_menu("test","test",40,50,40,4,rows) ;

    //dialog_inputbox("test","fre",0,0,"eett",0);
    end_dialog();
  
  

/*
   strcpy(player_slots[1],"30s hits");
  
   
    write_to_file(player_slots);
    strcpy(player_slots[1],"         ");
   
   //*player_slots[1]="";
   read_from_file(player_slots);

   printf("%s\n",player_slots[1]);
   
 */

}