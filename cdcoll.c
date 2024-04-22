#include <stdio.h>

#ifndef STDLIB_H
#define STDLB_H
#include <stdlib.h>
#include <string.h>



#endif

#include "tui.c"
#include<curses.h>
#include "data_struct.h"


extern char disklist[200][10];

int main()
{
    

printf(disklist[1]);
 
  strcpy (disklist[1],"30s hits");
  
   
   write_to_file(disklist[1]);
 strcpy(disklist[1],"");
   read_from_file(disklist);
   
   printf(disklist[1]);


   
 

//build_list();
//generate_rows();
//generate_ids();
}