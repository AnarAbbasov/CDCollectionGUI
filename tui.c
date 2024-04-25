#ifndef DIALOG_H
#define DIALOG_H

#ifndef STDLIB_H
#define STDLB_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <curses.h>
#include "data_struct.h"
#endif
#endif

char disklist[200][10];

void get_list_from_file(char disklist[200][10])
{
    read_from_file(disklist);
}

char *get_contents_of_slot(int id)
{
    return (disklist[id]);
}

int set_contents_of_slot(char *disk_name, int id)
{
    strcpy(disklist[id], disk_name);
    write_to_file(disklist);
    return 0;
}

void refresh_list(WINDOW *main_window)
{
    // mvwprintw(subwindow, 1, 1, "Subwindow");
    char temp[4];
    for (int i = 1; i < 37; i++)
    {
        sprintf(temp, "%d", i);
        mvwprintw(main_window, i, 1, "%s", temp);
        mvwprintw(main_window, i, 4, "%s", disklist[i]);
    }

    /* display 2nd column*/
    for (int i = 37; i < 73; i++)
    {
        sprintf(temp, "%d", i);
        mvwprintw(main_window, i - 36, 15, "%s", temp);
        mvwprintw(main_window, i - 36, 18, "%s", disklist[i]);
    }

    /* display 3rd column*/
    for (int i = 73; i < 109; i++)
    {
        sprintf(temp, "%d", i);
        mvwprintw(main_window, i - 72, 30, "%s", temp);
        mvwprintw(main_window, i - 72, 33, "%s", disklist[i]);
    }
    /* display 4rd column*/
    for (int i = 109; i < 145; i++)
    {
        sprintf(temp, "%d", i);
        mvwprintw(main_window, i - 108, 45, "%s", temp);
        mvwprintw(main_window, i - 108, 49, "%s", disklist[i]);
    }
    /* display 4rd column */

    for (int i = 145; i < 180; i++)
    {
        sprintf(temp, "%d", i);
        mvwprintw(main_window, i - 144, 65, "%s", temp);
        mvwprintw(main_window, i - 144, 69, "%s", disklist[i]);
    }

    for (int i = 180; i < 201; i++)
    {
        sprintf(temp, "%d", i);
        mvwprintw(main_window, i - 179, 75, "%s", temp);
        mvwprintw(main_window, i - 179, 79, "%s", disklist[i]);
    }
}

void build_list()
{
    initscr();
    start_color();
    get_list_from_file(disklist);
    init_pair(1, COLOR_WHITE, COLOR_MAGENTA);
     init_pair(2, COLOR_WHITE, COLOR_BLUE);
    WINDOW *mainwindow = newwin(39, 146, 0, 0);
    WINDOW *editwindow = subwin(mainwindow,30, 40, 5, 90);
    box(mainwindow, 0, 0);
     box(editwindow, 0, 0);
    refresh_list(mainwindow);
    mvwprintw(editwindow, 1, 1, "This is a subwindow.");
   wbkgd(editwindow, COLOR_PAIR(2));
    wbkgd(mainwindow, COLOR_PAIR(1));
    refresh();
    wrefresh(mainwindow);
    wrefresh(editwindow);

    getch();
    // Clean up
    delwin(mainwindow);
    endwin();
}
/*
void build_list()

{
     initscr();
    char str[3];        // buffer for disk id
    char disk_name[10]; // buffer for disk name from menu
    get_list_from_file(disklist);
    WINDOW* mainwindow = newwin(30, 100, 0, 0);
    strcpy(disklist[0], "NA");
    // generate_list();
     box(mainwindow,0,0);
     /* message to be appeared on the screen
    int row, col;                   to store the number of rows and
                                    * the number of colums of the screen

    start_color(); /* Start color
    init_pair(1, COLOR_WHITE, COLOR_BLUE);
    init_pair(2, COLOR_WHITE, COLOR_MAGENTA);
    attron(COLOR_PAIR(1));
    getmaxyx(stdscr, row, col); /* get the number of rows and columns
    char temp[3];

    mvwprintw(mainwindow,10, 10, "otsuda");
  //  wbkgd(mainwindow, COLOR_PAIR(1));


   wrefresh(mainwindow);
   // refresh_list(mainwindow);
   // attron(COLOR_PAIR(2));
   // mvprintw(0, 100, "%s", "enter Disk Block (0 to exit):");
   // getnstr(str, 3);
    int slotid;



    slotid = atoi(str);


      // refresh();

   getch();
    if (slotid != 0)
    {

        mvprintw(1, 100, "Current disk: %s", get_contents_of_slot(slotid));
        mvprintw(2, 100, "%s", "enter New Content:");
        attroff(COLOR_PAIR(2));
        getnstr(disk_name, 10);
        set_contents_of_slot(disk_name, slotid);
        attron(COLOR_PAIR(1));
       // refresh_list(mainwindow);
        refresh();

        getch();
    }
    //
    delwin(mainwindow);
    endwin();
}
*/