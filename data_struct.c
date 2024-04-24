#ifndef STDIO_H
#define STDIO_H
#include <stdio.h>
#include <stdlib.h>

#endif

FILE *musicfile;

int read_from_file(char disklist[200][10])
{
    musicfile = fopen("music.bin", "rb");
    int num_elements = 200 * 10;
    fread(disklist, sizeof(char), num_elements, musicfile);
    fclose(musicfile);
    return 0;
}

int write_to_file(char disklist[200][10])
{

    musicfile = fopen("music.bin", "wb");
    if (musicfile == NULL)
    {
        perror("Error opening file");
        return 1; // Handle the error appropriately
    }
    int num_elements = 200 * 10;
    fwrite(disklist, sizeof(char), num_elements, musicfile);

    fclose(musicfile);
}
