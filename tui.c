#ifndef DIALOG_H
#define DIALOG_H

#ifndef STDLIB_H
#define STDLB_H
#include <stdlib.h>
#endif
#endif
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/*int build_edit_list()
{
 int status;
 init_dialog(stdin, stdout);
 dialog_vars.item_help=false;
   
 char dname[10]="xuy";
   
char buf[MAX_LEN];
 //   Name NameY NameX Text TextY TextX FLen ILen  #include <dialog.h>
  
 char * rows[]={"1","1","1","Disk Name","1","10","15","15",
 "2","2","1","Disk Name","2","10","15","15",
 "3","3","1",dname,"3","10","15","15"};
dialog_vars.input_result=NULL;
dialog_vars.item_help=false;
//dialog_form("test","Slots",0,30,30,3,rows) ;
dialog_form("test","Slots",0,30,30,10,generated_rows) ;
 end_dialog();
 printf("%s",dialog_vars.input_result);
 return 0;
}
*/
void generate_rows(char  generated_rows[200][50]){
    
    
    char  tem_string[50];
    int i;
    for( i=1;i<10;i++)
    {
        sprintf(tem_string,"%d",i);
        strcat(generated_rows[i],tem_string);
        strcat(generated_rows[i],tem_string);
        strcat(generated_rows[i],"1");
        strcat(generated_rows[i],"DiskName");
        strcat(generated_rows[i],tem_string);
        strcat(generated_rows[i],"10");
        strcat(generated_rows[i],"15");
        strcat(generated_rows[i],"15");
    }

   printf(generated_rows[3]);
}