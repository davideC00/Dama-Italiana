#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include "Dama.h"



int main()
{
    int sceltamenu=0;

    while(sceltamenu!=5)
    {
        sceltamenu=0;
        system("cls");
        printf("\n                                    Benvenuti al gioco della\n\n");
        printf("                  %c%c%c%c%c%c%c%c          %c%c%c%c%c%c%c%c%c         %c%c%c       %c%c%c          %c%c%c%c%c%c%c%c%c\n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
        printf("                  %c%c      %c        %c%c       %c%c        %c%c %c     %c %c%c         %c%c       %c%c\n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
        printf("                  %c%c       %c       %c%c       %c%c        %c%c  %c   %c  %c%c         %c%c       %c%c\n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
        printf("                  %c%c        %c      %c%c       %c%c        %c%c   %c%c%c   %c%c         %c%c       %c%c\n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
        printf("                  %c%c       %c       %c%c%c%c%c%c%c%c%c%c%c        %c%c         %c%c         %c%c%c%c%c%c%c%c%c%c%c\n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
        printf("                  %c%c      %c        %c%c       %c%c        %c%c         %c%c         %c%c       %c%c\n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
        printf("                  %c%c%c%c%c%c%c%c         %c%c       %c%c        %c%c         %c%c         %c%c       %c%c\n", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);




        printf("\n                                              ITALIANA\n\n");
        printf("1 Nuova Partita\n");
        printf("2 Continua Partita\n");
        printf("3 Visualizza Palmares\n");
        printf("4 Regole di gioco\n");
        printf("5 Esci\n");

        scanf("%d",&sceltamenu);
        while (getchar() != '\n');
        switch (sceltamenu)
        {
        case 1:
            system("cls");
            nuova_Partita();
            break;
        case 2:
            system("cls");
            carica_partita();
            break;
        case 3:
            system("cls");
            PalmaresGiocatori();
            break;
        case 4:
            system("cls");
            regole();
            break;
        case 5:
            printf(" Stai uscendo dal gioco\n");
            break;
        default:
            printf(" Scelta effettuata non corretta\n");
            system("PAUSE");
            break;
        }
    }

    return 0;

}
