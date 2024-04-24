#include <stdio.h>

#ifndef STDLIB_H
#define STDLB_H
#include <stdlib.h>
#include <string.h>

#endif

#include "tui.c"
#include <curses.h>
#include "data_struct.h"

void populate_dir(char disklist[200][10])
{
  strcpy(disklist[1], "30s hits");
  strcpy(disklist[2], "PMoriatR");
  strcpy(disklist[3], "Abba");
  strcpy(disklist[4], "Leontyev");
  strcpy(disklist[5], "PMoriat2");
  strcpy(disklist[6], "PMoriat3");
  strcpy(disklist[7], "PMoriat4");
  strcpy(disklist[8], "Leontyev");
  strcpy(disklist[9], "PMoriat3");
  strcpy(disklist[10], "Django1");
  strcpy(disklist[11], "ModernT");
  strcpy(disklist[12], "UriahH");
  strcpy(disklist[13], "Leontyev");
  strcpy(disklist[14], "Leontyev");
  strcpy(disklist[15], "PMoriat");
  strcpy(disklist[16], "CernKofe");
  strcpy(disklist[17], "SovHits");
  strcpy(disklist[18], "CernKofe");
  strcpy(disklist[19], "SovHits");
  strcpy(disklist[20], "SovHits");
  strcpy(disklist[21], "Abba2");
  strcpy(disklist[22], "IronM1");
  strcpy(disklist[23], "PinkFl");
  strcpy(disklist[24], "PinkFl");
  strcpy(disklist[25], "PinkFj");
  strcpy(disklist[26], "Metallica");
  strcpy(disklist[27], "Sepultura");
  strcpy(disklist[28], "MJackson");
  strcpy(disklist[29], "SikRags");
  strcpy(disklist[30], "GermanMus");
  strcpy(disklist[31], "BennyG");
  strcpy(disklist[32], "Creedence");
  strcpy(disklist[33], "BeeGees");
  strcpy(disklist[34], "LedZepp");
  strcpy(disklist[35], "Metallica");
  strcpy(disklist[36], "GunsNros");
  strcpy(disklist[37], "IronMSen2");
  write_to_file(disklist);
}

int main()
{

  build_list();
}