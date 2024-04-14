#include <stdio.h>

#ifndef STDLIB_H
#define STDLB_H
#include <stdlib.h>
#include <string.h>
#endif
#include "data_struct.h"
char player_slots[200][50]={};




int main()
{
    
   strcpy(player_slots[1],"30s hits");
  
   
    write_to_file(player_slots);
    strcpy(player_slots[1],"         ");
   
   //*player_slots[1]="";
   read_from_file(player_slots);

   printf("%s\n",player_slots[1]);
   
 

}