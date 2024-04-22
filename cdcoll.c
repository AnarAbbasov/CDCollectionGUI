#include <stdio.h>

#ifndef STDLIB_H
#define STDLB_H
#include <stdlib.h>
#include <string.h>



#endif

#include "tui.c"
#include<curses.h>
#include "data_struct.h"



int main()
{
    


 
  strcpy (disklist[1],"30s hits");
  strcpy (disklist[2],"PMoriatR");
  strcpy (disklist[3],"Abba");
  strcpy (disklist[4],"Leontyev");
  strcpy (disklist[5],"PMoriat2");
  strcpy (disklist[6],"PMoriat3");
  strcpy (disklist[7],"PMoriat4"); 
  strcpy (disklist[8],"Leontyev");
  strcpy (disklist[9],"PMoriat3");
  strcpy (disklist[10],"Django1");


   write_to_file(disklist);
/*
 strcpy(disklist[1],"");
   read_from_file(disklist);
   
   printf(disklist[1]);

*/
   
 

build_list();
//generate_rows();
//generate_ids();
}