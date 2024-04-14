#ifndef STDIO_H
#define STDIO_H
#include <stdio.h>
#include <stdlib.h>

#endif

char * diskname;
    
FILE* musicfile;




int read_from_file(char  player_slots[200][50])
{
    musicfile = fopen("music.bin", "rb");
    fread(player_slots, sizeof(char[200][50]), 1, musicfile);
    fclose(musicfile);
    return 0;
}



int write_to_file( char  player_slots[200][50])
{
    
    int flag;
    musicfile = fopen("music.bin", "wb");
    
    flag = fwrite(player_slots, sizeof(char[200][50]), 1,musicfile);
    if (flag) 
      {
       printf("written successfully\n");
      }
    else
     printf("Error Writing to File!\n");
    // close file
    fclose(musicfile);
    return 0;
}
