#ifndef STDIO_H
#define STDIO_H
#include <stdio.h>
#include <stdlib.h>

#endif


    
FILE* musicfile;




int read_from_file(char * disklist[200])
{
    musicfile = fopen("music.bin", "r");
    fread(disklist[1], sizeof(char [50]), 1, musicfile);
    fclose(musicfile);
    return 0;
}



int write_to_file(char disklist [200][10])
{
    
FILE* musicfile = fopen("music.txt", "wb"); // Open for writing
if (musicfile == NULL) {
    perror("Error opening file");
    return; // Handle the error appropriately
}
   
for (int i = 0; i < 5; ++i) {
    fwite(disklist,sizeof(char),sizof(disklist), musicfile);
    
}                                      
                                   
 
 fclose(musicfile);                                     
  }
