
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include "Dama.h"

//Hello

void grafica(int a[8][8])
{


    /*Linea superiore*/
    printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 218, 196, 196, 196,196, 196, 196,196, 196, 194,/**/ 196, 196, 196, 196, 196, 196, 196, 196, 194,/**/ 196, 196, 196, 196, 196, 196, 196, 196, 194,/**/ 196, 196, 196, 196, 196, 196, 196, 196, 194,/**/ 196, 196, 196, 196, 196, 196, 196, 196, 194,/**/ 196, 196, 196, 196, 196, 196, 196, 196, 194,/**/ 196, 196, 196, 196, 196, 196, 196, 196, 194,/**/ 196, 196, 196, 196, 196, 196, 196, 196, 191);

    /*Prima riga*/
    printf("   %c   %c%c   %c%c%c%c%c%c%c%c%c%c", 179, a[0][0], a[0][0], 179,/**/ 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf("   %c%c   %c%c%c%c%c%c%c%c%c%c", a[0][2], a[0][2], 179,/**/ 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf("   %c%c   %c%c%c%c%c%c%c%c%c%c", a[0][4], a[0][4], 179,/**/ 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf("   %c%c   %c%c%c%c%c%c%c%c%c%c\n", a[0][6], a[0][6], 179,/**/ 219, 219, 219, 219, 219, 219, 219, 219, 179);

    printf(" A %c %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c", 179, a[0][0], a[0][0], a[0][0], a[0][0], a[0][0], a[0][0]/**/, 179, 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf(" %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c", a[0][2], a[0][2], a[0][2], a[0][2], a[0][2], a[0][2]/**/, 179, 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf(" %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c", a[0][4], a[0][4], a[0][4], a[0][4], a[0][4], a[0][4]/**/, 179, 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf(" %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c\n", a[0][6], a[0][6], a[0][6], a[0][6], a[0][6], a[0][6]/**/, 179, 219, 219, 219, 219, 219, 219, 219, 219, 179);

    printf("   %c %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c", 179, a[0][0], a[0][0], a[0][0], a[0][0], a[0][0], a[0][0]/**/, 179, 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf(" %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c", a[0][2], a[0][2], a[0][2], a[0][2], a[0][2], a[0][2]/**/, 179, 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf(" %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c", a[0][4], a[0][4], a[0][4], a[0][4], a[0][4], a[0][4]/**/, 179, 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf(" %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c\n", a[0][6], a[0][6], a[0][6], a[0][6], a[0][6], a[0][6]/**/, 179, 219, 219, 219, 219, 219, 219, 219, 219, 179);

    printf("   %c   %c%c   %c%c%c%c%c%c%c%c%c%c", 179, a[0][0], a[0][0], 179,/**/ 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf("   %c%c   %c%c%c%c%c%c%c%c%c%c", a[0][2], a[0][2], 179,/**/ 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf("   %c%c   %c%c%c%c%c%c%c%c%c%c", a[0][4], a[0][4], 179,/**/ 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf("   %c%c   %c%c%c%c%c%c%c%c%c%c\n", a[0][6], a[0][6], 179,/**/ 219, 219, 219, 219, 219, 219, 219, 219, 179);

    /*riga di mezzo*/
    printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 195, 196, 196,196,196, 196,196, 196, 196, 197/**/, 196, 196,196,196, 196,196, 196, 196, 197);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 196, 196,196,196, 196,196, 196, 196, 197/**/, 196, 196,196,196, 196,196, 196, 196, 197);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 196, 196,196,196, 196,196, 196, 196, 197/**/, 196, 196,196,196, 196,196, 196, 196, 197);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 196, 196,196,196, 196,196, 196, 196, 197/**/, 196, 196,196,196, 196,196, 196, 196, 180);

    /*Seconda riga*/
    printf("   %c%c%c%c%c%c%c%c%c%c   %c%c   %c", 179, 219, 219, 219, 219, 219, 219, 219, 219, 179, a[1][1], a[1][1], 179);
    printf("%c%c%c%c%c%c%c%c%c   %c%c   %c", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[1][3], a[1][3], 179);
    printf("%c%c%c%c%c%c%c%c%c   %c%c   %c", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[1][5], a[1][5], 179);
    printf("%c%c%c%c%c%c%c%c%c   %c%c   %c\n", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[1][7], a[1][7], 179);

    printf(" B %c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c %c", 179, 219, 219, 219, 219, 219, 219, 219, 219, 179, a[1][1], a[1][1], a[1][1], a[1][1], a[1][1], a[1][1]/**/,  179);
    printf("%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c %c", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[1][3], a[1][3], a[1][3], a[1][3], a[1][3], a[1][3]/**/,  179);
    printf("%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c %c", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[1][5], a[1][5], a[1][5], a[1][5], a[1][5], a[1][5]/**/,  179);
    printf("%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c %c\n", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[1][7], a[1][7], a[1][7], a[1][7], a[1][7], a[1][7]/**/,  179);

    printf("   %c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c %c", 179, 219, 219, 219, 219, 219, 219, 219, 219, 179, a[1][1], a[1][1], a[1][1], a[1][1], a[1][1], a[1][1]/**/,  179);
    printf("%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c %c", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[1][3], a[1][3], a[1][3], a[1][3], a[1][3], a[1][3]/**/,  179);
    printf("%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c %c", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[1][5], a[1][5], a[1][5], a[1][5], a[1][5], a[1][5]/**/,  179);
    printf("%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c %c\n", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[1][7], a[1][7], a[1][7], a[1][7], a[1][7], a[1][7]/**/,  179);

    printf("   %c%c%c%c%c%c%c%c%c%c   %c%c   %c", 179, 219, 219, 219, 219, 219, 219, 219, 219, 179, a[1][1], a[1][1], 179);
    printf("%c%c%c%c%c%c%c%c%c   %c%c   %c", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[1][3], a[1][3], 179);
    printf("%c%c%c%c%c%c%c%c%c   %c%c   %c", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[1][5], a[1][5], 179);
    printf("%c%c%c%c%c%c%c%c%c   %c%c   %c\n", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[1][7], a[1][7], 179);

    /*riga di mezzo*/
    printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 195, 196, 196,196,196, 196,196, 196, 196, 197/**/, 196, 196,196,196, 196,196, 196, 196, 197);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 196, 196,196,196, 196,196, 196, 196, 197/**/, 196, 196,196,196, 196,196, 196, 196, 197);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 196, 196,196,196, 196,196, 196, 196, 197/**/, 196, 196,196,196, 196,196, 196, 196, 197);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 196, 196,196,196, 196,196, 196, 196, 197/**/, 196, 196,196,196, 196,196, 196, 196, 180);

    /*Terza riga*/
    printf("   %c   %c%c   %c%c%c%c%c%c%c%c%c%c", 179, a[2][0], a[2][0], 179,/**/ 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf("   %c%c   %c%c%c%c%c%c%c%c%c%c", a[2][2], a[2][2], 179,/**/ 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf("   %c%c   %c%c%c%c%c%c%c%c%c%c", a[2][4], a[2][4], 179,/**/ 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf("   %c%c   %c%c%c%c%c%c%c%c%c%c\n", a[2][6], a[2][6], 179,/**/ 219, 219, 219, 219, 219, 219, 219, 219, 179);

    printf(" C %c %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c", 179, a[2][0], a[2][0], a[2][0], a[2][0], a[2][0], a[2][0]/**/, 179, 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf(" %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c", a[2][2], a[2][2], a[2][2], a[2][2], a[2][2], a[2][2]/**/, 179, 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf(" %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c", a[2][4], a[2][4], a[2][4], a[2][4], a[2][4], a[2][4]/**/, 179, 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf(" %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c\n", a[2][6], a[2][6], a[2][6], a[2][6], a[2][6], a[2][6]/**/, 179, 219, 219, 219, 219, 219, 219, 219, 219, 179);

    printf("   %c %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c", 179, a[2][0], a[2][0], a[2][0], a[2][0], a[2][0], a[2][0]/**/, 179, 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf(" %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c", a[2][2], a[2][2], a[2][2], a[2][2], a[2][2], a[2][2]/**/, 179, 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf(" %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c", a[2][4], a[2][4], a[2][4], a[2][4], a[2][4], a[2][4]/**/, 179, 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf(" %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c\n", a[2][6], a[2][6], a[2][6], a[2][6], a[2][6], a[2][6]/**/, 179, 219, 219, 219, 219, 219, 219, 219, 219, 179);

    printf("   %c   %c%c   %c%c%c%c%c%c%c%c%c%c", 179, a[2][0], a[2][0], 179,/**/ 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf("   %c%c   %c%c%c%c%c%c%c%c%c%c", a[2][2], a[2][2], 179,/**/ 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf("   %c%c   %c%c%c%c%c%c%c%c%c%c", a[2][4], a[2][4], 179,/**/ 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf("   %c%c   %c%c%c%c%c%c%c%c%c%c\n", a[2][6], a[2][6], 179,/**/ 219, 219, 219, 219, 219, 219, 219, 219, 179);

    /*riga di mezzo*/
    printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 195, 196, 196,196,196, 196,196, 196, 196, 197/**/, 196, 196,196,196, 196,196, 196, 196, 197);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 196, 196,196,196, 196,196, 196, 196, 197/**/, 196, 196,196,196, 196,196, 196, 196, 197);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 196, 196,196,196, 196,196, 196, 196, 197/**/, 196, 196,196,196, 196,196, 196, 196, 197);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 196, 196,196,196, 196,196, 196, 196, 197/**/, 196, 196,196,196, 196,196, 196, 196, 180);


    /*quarta riga*/
    printf("   %c%c%c%c%c%c%c%c%c%c   %c%c   %c", 179, 219, 219, 219, 219, 219, 219, 219, 219, 179, a[3][1], a[3][1], 179);
    printf("%c%c%c%c%c%c%c%c%c   %c%c   %c", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[3][3], a[3][3], 179);
    printf("%c%c%c%c%c%c%c%c%c   %c%c   %c", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[3][5], a[3][5], 179);
    printf("%c%c%c%c%c%c%c%c%c   %c%c   %c\n", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[3][7], a[3][7], 179);

    printf(" D %c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c %c", 179, 219, 219, 219, 219, 219, 219, 219, 219, 179, a[3][1], a[3][1], a[3][1], a[3][1], a[3][1], a[3][1]/**/,  179);
    printf("%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c %c", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[3][3], a[3][3], a[3][3], a[3][3], a[3][3], a[3][3]/**/,  179);
    printf("%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c %c", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[3][5], a[3][5], a[3][5], a[3][5], a[3][5], a[3][5]/**/,  179);
    printf("%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c %c\n", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[3][7], a[3][7], a[3][7], a[3][7], a[3][7], a[3][7]/**/,  179);

    printf("   %c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c %c", 179, 219, 219, 219, 219, 219, 219, 219, 219, 179, a[3][1], a[3][1], a[3][1], a[3][1], a[3][1], a[3][1]/**/,  179);
    printf("%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c %c", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[3][3], a[3][3], a[3][3], a[3][3], a[3][3], a[3][3]/**/,  179);
    printf("%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c %c", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[3][5], a[3][5], a[3][5], a[3][5], a[3][5], a[3][5]/**/,  179);
    printf("%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c %c\n", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[3][7], a[3][7], a[3][7], a[3][7], a[3][7], a[3][7]/**/,  179);

    printf("   %c%c%c%c%c%c%c%c%c%c   %c%c   %c", 179, 219, 219, 219, 219, 219, 219, 219, 219, 179, a[3][1], a[3][1], 179);
    printf("%c%c%c%c%c%c%c%c%c   %c%c   %c", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[3][3], a[3][3], 179);
    printf("%c%c%c%c%c%c%c%c%c   %c%c   %c", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[3][5], a[3][5], 179);
    printf("%c%c%c%c%c%c%c%c%c   %c%c   %c\n", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[3][7], a[3][7], 179);

    /*riga di mezzo*/
    printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 195, 196, 196,196,196, 196,196, 196, 196, 197/**/, 196, 196,196,196, 196,196, 196, 196, 197);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 196, 196,196,196, 196,196, 196, 196, 197/**/, 196, 196,196,196, 196,196, 196, 196, 197);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 196, 196,196,196, 196,196, 196, 196, 197/**/, 196, 196,196,196, 196,196, 196, 196, 197);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 196, 196,196,196, 196,196, 196, 196, 197/**/, 196, 196,196,196, 196,196, 196, 196, 180);

    /*Quinta riga*/
    printf("   %c   %c%c   %c%c%c%c%c%c%c%c%c%c", 179, a[4][0], a[4][0], 179,/**/ 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf("   %c%c   %c%c%c%c%c%c%c%c%c%c", a[4][2], a[4][2], 179,/**/ 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf("   %c%c   %c%c%c%c%c%c%c%c%c%c", a[4][4], a[4][4], 179,/**/ 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf("   %c%c   %c%c%c%c%c%c%c%c%c%c\n", a[4][6], a[4][6], 179,/**/ 219, 219, 219, 219, 219, 219, 219, 219, 179);

    printf(" E %c %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c", 179, a[4][0], a[4][0], a[4][0], a[4][0], a[4][0], a[4][0]/**/, 179, 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf(" %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c", a[4][2], a[4][2], a[4][2], a[4][2], a[4][2], a[4][2]/**/, 179, 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf(" %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c", a[4][4], a[4][4], a[4][4], a[4][4], a[4][4], a[4][4]/**/, 179, 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf(" %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c\n", a[4][6], a[4][6], a[4][6], a[4][6], a[4][6], a[4][6]/**/, 179, 219, 219, 219, 219, 219, 219, 219, 219, 179);

    printf("   %c %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c", 179, a[4][0], a[4][0], a[4][0], a[4][0], a[4][0], a[4][0]/**/, 179, 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf(" %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c", a[4][2], a[4][2], a[4][2], a[4][2], a[4][2], a[4][2]/**/, 179, 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf(" %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c", a[4][4], a[4][4], a[4][4], a[4][4], a[4][4], a[4][4]/**/, 179, 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf(" %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c\n", a[4][6], a[4][6], a[4][6], a[4][6], a[4][6], a[4][6]/**/, 179, 219, 219, 219, 219, 219, 219, 219, 219, 179);

    printf("   %c   %c%c   %c%c%c%c%c%c%c%c%c%c", 179, a[4][0], a[4][0], 179,/**/ 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf("   %c%c   %c%c%c%c%c%c%c%c%c%c", a[4][2], a[4][2], 179,/**/ 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf("   %c%c   %c%c%c%c%c%c%c%c%c%c", a[4][4], a[4][4], 179,/**/ 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf("   %c%c   %c%c%c%c%c%c%c%c%c%c\n", a[4][6], a[4][6], 179,/**/ 219, 219, 219, 219, 219, 219, 219, 219, 179);

    /*riga di mezzo*/
    printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 195, 196, 196,196,196, 196,196, 196, 196, 197/**/, 196, 196,196,196, 196,196, 196, 196, 197);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 196, 196,196,196, 196,196, 196, 196, 197/**/, 196, 196,196,196, 196,196, 196, 196, 197);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 196, 196,196,196, 196,196, 196, 196, 197/**/, 196, 196,196,196, 196,196, 196, 196, 197);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 196, 196,196,196, 196,196, 196, 196, 197/**/, 196, 196,196,196, 196,196, 196, 196, 180);

    /*Sesta riga*/
    printf("   %c%c%c%c%c%c%c%c%c%c   %c%c   %c", 179, 219, 219, 219, 219, 219, 219, 219, 219, 179, a[5][1], a[5][1], 179);
    printf("%c%c%c%c%c%c%c%c%c   %c%c   %c", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[5][3], a[5][3], 179);
    printf("%c%c%c%c%c%c%c%c%c   %c%c   %c", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[5][5], a[5][5], 179);
    printf("%c%c%c%c%c%c%c%c%c   %c%c   %c\n", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[5][7], a[5][7], 179);

    printf(" F %c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c %c", 179, 219, 219, 219, 219, 219, 219, 219, 219, 179, a[5][1], a[5][1], a[5][1], a[5][1], a[5][1], a[5][1]/**/,  179);
    printf("%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c %c", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[5][3], a[5][3], a[5][3], a[5][3], a[5][3], a[5][3]/**/,  179);
    printf("%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c %c", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[5][5], a[5][5], a[5][5], a[5][5], a[5][5], a[5][5]/**/,  179);
    printf("%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c %c\n", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[5][7], a[5][7], a[5][7], a[5][7], a[5][7], a[5][7]/**/,  179);

    printf("   %c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c %c", 179, 219, 219, 219, 219, 219, 219, 219, 219, 179, a[5][1], a[5][1], a[5][1], a[5][1], a[5][1], a[5][1]/**/,  179);
    printf("%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c %c", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[5][3], a[5][3], a[5][3], a[5][3], a[5][3], a[5][3]/**/,  179);
    printf("%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c %c", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[5][5], a[5][5], a[5][5], a[5][5], a[5][5], a[5][5]/**/,  179);
    printf("%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c %c\n", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[5][7], a[5][7], a[5][7], a[5][7], a[5][7], a[5][7]/**/,  179);

    printf("   %c%c%c%c%c%c%c%c%c%c   %c%c   %c", 179, 219, 219, 219, 219, 219, 219, 219, 219, 179, a[5][1], a[5][1], 179);
    printf("%c%c%c%c%c%c%c%c%c   %c%c   %c", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[5][3], a[5][3], 179);
    printf("%c%c%c%c%c%c%c%c%c   %c%c   %c", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[5][5], a[5][5], 179);
    printf("%c%c%c%c%c%c%c%c%c   %c%c   %c\n", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[5][7], a[5][7], 179);

    /*riga di mezzo*/
    printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 195, 196, 196,196,196, 196,196, 196, 196, 197/**/, 196, 196,196,196, 196,196, 196, 196, 197);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 196, 196,196,196, 196,196, 196, 196, 197/**/, 196, 196,196,196, 196,196, 196, 196, 197);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 196, 196,196,196, 196,196, 196, 196, 197/**/, 196, 196,196,196, 196,196, 196, 196, 197);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 196, 196,196,196, 196,196, 196, 196, 197/**/, 196, 196,196,196, 196,196, 196, 196, 180);

    /*Settima riga*/
    printf("   %c   %c%c   %c%c%c%c%c%c%c%c%c%c", 179, a[6][0], a[6][0], 179,/**/ 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf("   %c%c   %c%c%c%c%c%c%c%c%c%c", a[6][2], a[6][2], 179,/**/ 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf("   %c%c   %c%c%c%c%c%c%c%c%c%c", a[6][4], a[6][4], 179,/**/ 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf("   %c%c   %c%c%c%c%c%c%c%c%c%c\n", a[6][6], a[6][6], 179,/**/ 219, 219, 219, 219, 219, 219, 219, 219, 179);

    printf(" G %c %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c", 179, a[6][0], a[6][0], a[6][0], a[6][0], a[6][0], a[6][0]/**/, 179, 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf(" %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c", a[6][2], a[6][2], a[6][2], a[6][2], a[6][2], a[6][2]/**/, 179, 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf(" %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c", a[6][4], a[6][4], a[6][4], a[6][4], a[6][4], a[6][4]/**/, 179, 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf(" %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c\n", a[6][6], a[6][6], a[6][6], a[6][6], a[6][6], a[6][6]/**/, 179, 219, 219, 219, 219, 219, 219, 219, 219, 179);

    printf("   %c %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c", 179, a[6][0], a[6][0], a[6][0], a[6][0], a[6][0], a[6][0]/**/, 179, 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf(" %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c", a[6][2], a[6][2], a[6][2], a[6][2], a[6][2], a[6][2]/**/, 179, 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf(" %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c", a[6][4], a[6][4], a[6][4], a[6][4], a[6][4], a[6][4]/**/, 179, 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf(" %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c\n", a[6][6], a[6][6], a[6][6], a[6][6], a[6][6], a[6][6]/**/, 179, 219, 219, 219, 219, 219, 219, 219, 219, 179);

    printf("   %c   %c%c   %c%c%c%c%c%c%c%c%c%c", 179, a[6][0], a[6][0], 179,/**/ 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf("   %c%c   %c%c%c%c%c%c%c%c%c%c", a[6][2], a[6][2], 179,/**/ 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf("   %c%c   %c%c%c%c%c%c%c%c%c%c", a[6][4], a[6][4], 179,/**/ 219, 219, 219, 219, 219, 219, 219, 219, 179);
    printf("   %c%c   %c%c%c%c%c%c%c%c%c%c\n", a[6][6], a[6][6], 179,/**/ 219, 219, 219, 219, 219, 219, 219, 219, 179);

    /*riga di mezzo*/
    printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 195, 196, 196,196,196, 196,196, 196, 196, 197/**/, 196, 196,196,196, 196,196, 196, 196, 197);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 196, 196,196,196, 196,196, 196, 196, 197/**/, 196, 196,196,196, 196,196, 196, 196, 197);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 196, 196,196,196, 196,196, 196, 196, 197/**/, 196, 196,196,196, 196,196, 196, 196, 197);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 196, 196,196,196, 196,196, 196, 196, 197/**/, 196, 196,196,196, 196,196, 196, 196, 180);

    /*Ottava riga*/
    printf("   %c%c%c%c%c%c%c%c%c%c   %c%c   %c", 179, 219, 219, 219, 219, 219, 219, 219, 219, 179, a[7][1], a[7][1], 179);
    printf("%c%c%c%c%c%c%c%c%c   %c%c   %c", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[7][3], a[7][3], 179);
    printf("%c%c%c%c%c%c%c%c%c   %c%c   %c", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[7][5], a[7][5], 179);
    printf("%c%c%c%c%c%c%c%c%c   %c%c   %c\n", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[7][7], a[7][7], 179);

    printf(" H %c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c %c", 179, 219, 219, 219, 219, 219, 219, 219, 219, 179, a[7][1], a[7][1], a[7][1], a[7][1], a[7][1], a[7][1]/**/,  179);
    printf("%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c %c", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[7][3], a[7][3], a[7][3], a[7][3], a[7][3], a[7][3]/**/,  179);
    printf("%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c %c", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[7][5], a[7][5], a[7][5], a[7][5], a[7][5], a[7][5]/**/,  179);
    printf("%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c %c\n", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[7][7], a[7][7], a[7][7], a[7][7], a[7][7], a[7][7]/**/,  179);

    printf("   %c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c %c", 179, 219, 219, 219, 219, 219, 219, 219, 219, 179, a[7][1], a[7][1], a[7][1], a[7][1], a[7][1], a[7][1]/**/,  179);
    printf("%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c %c", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[7][3], a[7][3], a[7][3], a[7][3], a[7][3], a[7][3]/**/,  179);
    printf("%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c %c", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[7][5], a[7][5], a[7][5], a[7][5], a[7][5], a[7][5]/**/,  179);
    printf("%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c %c\n", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[7][7], a[7][7], a[7][7], a[7][7], a[7][7], a[7][7]/**/,  179);

    printf("   %c%c%c%c%c%c%c%c%c%c   %c%c   %c", 179, 219, 219, 219, 219, 219, 219, 219, 219, 179, a[7][1], a[7][1], 179);
    printf("%c%c%c%c%c%c%c%c%c   %c%c   %c", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[7][3], a[7][3], 179);
    printf("%c%c%c%c%c%c%c%c%c   %c%c   %c", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[7][5], a[7][5], 179);
    printf("%c%c%c%c%c%c%c%c%c   %c%c   %c\n", 219, 219, 219, 219, 219, 219, 219, 219, 179, a[7][7], a[7][7], 179);

    /*riga di mezzo*/
    printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 192, 196, 196,196,196, 196,196, 196, 196, 193/**/, 196, 196,196,196, 196,196, 196, 196, 193);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 196, 196,196,196, 196,196, 196, 196, 193/**/, 196, 196,196,196, 196,196, 196, 196, 193);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 196, 196,196,196, 196,196, 196, 196, 193/**/, 196, 196,196,196, 196,196, 196, 196, 193);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 196, 196,196,196, 196,196, 196, 196, 193/**/, 196, 196,196,196, 196,196, 196, 196, 217);

    printf("       1        2        3        4        5        6        7        8\n\n" );

}

/* Inizializza la damiera e i nomi giocatori per la funzione sorteggio e turno*/
/* Fa avviare una nuova partita di dama */
void nuova_Partita(void)
{
    char Player1[1024];
    char Player2[1024];
    int colore = 2;    // colore positivo = turno dei bianchi/negativo = turno dei neri
    int a[8][8] = {{196, 0, 196, 0, 196, 0, 196, 0},
                    {0, 196, 0, 196, 0, 196, 0, 196},
                    {196, 0, 196, 0, 196, 0, 196, 0},
                    {0, 32, 0, 32, 0, 32, 0, 32},
                    {32, 0, 32, 0, 32, 0, 32, 0},
                    {0, 254, 0, 254, 0, 254, 0, 254},
                    {254, 0, 254, 0, 254, 0, 254, 0},
                    {0, 254, 0, 254, 0, 254, 0, 254}
                    };

    sorteggio(Player1, Player2);
    system("cls");
    turno( a, colore, Player1, Player2);
}

/* Legge i nomi dei due giocatori e con un sorteggio decide chi deve cominciare */
void sorteggio( char *Player1, char *Player2)
{
    int i; // Contatore generico

    char hold[1024]; // Array temporaneo

    printf("\n\t%c Giocatore 1 inserisca il nome\n", 207);

    for(i=0; i<50;i++){ printf("%c", 196);}  // Grafica
    printf("\n");
    fgets( Player1, 1024, stdin);
    printf("\n");


    printf("\t%c Giocatore 2 inserisca il nome\n", 207);

    for(i=0; i<50;i++){ printf("%c", 196);} // Grafica
    printf("\n");
    fgets( Player2, 1024, stdin);


    while(strcmp(Player1, Player2)==0)     //Se i nomi sono uguali chiede il reinserimento
    {
        system("cls");
        printf("\tI nomi sono uguali prego reinserirli\n\n");
        printf("\t%c Giocatore 1 inserisca il nome\n", 207);
        for(i=0; i<50;i++){ printf("%c", 196);}
        printf("\n");
        fgets( Player1, 1024, stdin);
        printf("\t%c Giocatore 2 inserisca il nome\n", 207);
        for(i=0; i<50;i++){ printf("%c", 196);}
        printf("\n");
        fgets( Player2, 1024, stdin);
    }

    Player1[strlen( Player1)-1]= '\0';  // elimina il doppio /n ad entrambi i giocatori
    Player2[strlen( Player2)-1]= '\0';

    system("cls");

    srand(time(NULL));     // Sorteggio
    if (rand()%2 == 1)     // Inverte gli array dei giocatori
    {
        printf ("\n\nIl BIANCO va a %s\n\nPer una migliore esperienza di gioco premere alt+invio\n\n", Player2);
        strcpy (hold, Player1);
        strcpy (Player1, Player2);
        strcpy (Player2, hold);

        system("PAUSE");

    }
    else                   // Lascia uguali gli array dei giocatori
    {
        printf ("\n\nIl BIANCO va a %s\n\nPer una migliore esperienza di gioco premere alt+invio\n\n", Player1);
        system("PAUSE");
    }
}

/* Gestisce i risultati delle varie funzioni */
void turno(int a[8][8], int colore, char Player1[], char Player2[])
{



    for(colore=colore; colore>=0; colore++)      // Cicla il turno fin qualdo il colore non diventa negativo
    {
        if(colore%2==0)                          // Turno dei banchi
        {
            system("cls");
            grafica( a);
            printf("Turno Bianchi: %s\n", Player1);
            if (check_PresaD( a, colore)==0)     // Controlla se le dame bianche possono fare una presa
            {
                if( check_PresaPB( a)==0)           // Controlla se le pedine bianche possonofare una presa
                {
                    if(gameover(Player1, Player2, colore, a)==0)        // Controlla se il bianco ha ancora mosse
                    {
                        int ret;         // Valore di ritorno di scelta
                        ret=scelta (colore, a, Player1, Player2);
                        while(ret==2)           // Scelta non è andata a buon fine e continua a ciclare
                        {
                            system("PAUSE");
                            system("cls");
                            grafica(a);         // Pulisce e aggiorna la damiera
                            printf("Turno Bianchi: %s\n", Player1);

                            ret=scelta (colore, a, Player1, Player2);
                        }
                        if(ret==0)      // Il giocatore si è arreso, i giocatori hanno fatto la patta o si ha salavto la partita
                        {
                            colore=-2;  // esce dal turno
                        }

                    }
                    else        // non ci sono più mosse disponibili
                    {
                        colore=-2;      // esce dal turno
                        printf("%s non ha piu' mosse disponibili hai perso\n", Player1);
                        system("PAUSE");
                    }
                }
                else       // è stata trovata una presa
                {
                    printf("\n");
                    system("cls");
                    grafica( a);    // pasaa il turno e aggiorna la tabella
                }
            }
            else         // è stata trovata una presa
            {
                printf("\n");
                system("cls");
                grafica( a);    // pasaa il turno e aggiorna la tabella
            }

        }

        else    // Turno dei Neri
        {
            system("cls");
            grafica( a);
            printf("Turno Neri: %s\n", Player2);
            if (check_PresaD( a, colore)==0)        // Controlla se le dame nere possono fare una presa
            {
                if( check_PresaPN( a)==0)        // Controlla se le pedine nere possonofare una presa
                {
                    if(gameover(Player1, Player2, colore, a)==0)    // Il nero può ancora muovere
                    {
                        int ret;


                        ret=scelta (colore, a, Player1, Player2);
                        while(ret==2)       // Scelta non è andata a buon fine e la continua a ciclare
                        {
                            system("PAUSE");
                            system("cls");
                            grafica(a);
                            printf("Turno Neri: %s\n", Player2);

                            ret=scelta (colore, a, Player1, Player2);
                        }
                        if(ret==0)      // Il giocatore si è arreso, i giocatori hanno fatto la patta o si ha salavto la partita
                        {

                            colore=-2;  //esce dal turno
                        }
                    }
                    else        // Il giocatore nero non può fare mosse, ha perso
                    {
                        printf("%s non ha piu' mosse disponibili, ha perso\n", Player2);
                        system("PAUSE");
                        colore=-2;
                    }
                }
                else    // Ha trovato una presa
                {
                    printf("\n");
                    system("cls");
                    grafica( a);    // Aggiorna la damiera
                }
            }
            else    // Ha trovato una presa
            {
                printf("\n");
                system("cls");
                grafica( a);    //Aggiorna la damiera
            }

        }
        damaPowerUp( a); // Trasforma le pedine in dame
    }

}

/* Carica i dati di "Salvataggio.txt" e fa iniziare il turno */
void carica_partita(void)
{
    FILE *fp;
    int i, j;   // contatori
    int colore;
    int ret=0;      // 0 caricamento riuscito, 1 caricamento fallito
    int a[8][8];    // Matrice dove vengono caricati i dati
    char Player1[1024];  // Nomi dei due giocatori
    char Player2[1024];

    if ((fp = fopen("Salvataggio.txt", "r"))==NULL)
    {
        printf("\nerrore: Il file Salvataggio.txt non puo' essere aperto\n");
        system("PAUSE");
        ret=1;
    }
    else // Riesce ad aprire il file
    {
        if(fgets(Player1, 1024, fp)==NULL) // Non è riuscito ad acquisire la prima riga del file che corrisponde al primo nome del giocatore
        {
            ret=1;  // caricamento fallito
        }
        if(fgets(Player2, 1024, fp)==NULL) // Non è riuscito ad acquisire la seconda riga del File che corrisponde al giocatore2
        {
            ret=1;  // caricamento fallito
        }

        fscanf(fp, "%d ", &colore); // Aquisisce il valore del turno: bianco o nero ( pari o dispari )

        for(i=0; i<8; i++) // Aquisisce tutti gli elementi della matrice che sono salvati nel file in sequenza distanziata da spazi
        {
            for(j=0; j<8; j++)
            {
                if(fscanf(fp, "%d", &a[i][j])!=1) // Non è riuscito ad acquisire un elemento della matrice
                {
                    j=8; // Esce dal ciclo
                    i=8;
                    ret=1; // Caricamento fallito
                }
            }
        }

        Player1[strlen( Player1)-1]= '\0';  // elimina il doppio /n ad entrambi i giocatori
        Player2[strlen( Player2)-1]= '\0';

        fclose(fp);

        if(ret!=1) // Il caricamento è riuscito
        {
            system("cls");
            turno( a, colore, Player1, Player2);
        }
        else // Caricamento non riuscito ret=1
        {
            printf("\nCaricamento del file fallito\n\n\n");
            system("PAUSE");
        }
    }




}


/*  Riceve un array di struct e lo ordina in base alle vittorie, se trova due nomi con le stesse vittorie
    ordina i nomi dei vincitori per ordine alfabetico   */
void BubbleStruct(struttura *array_Struct,int size)
{
    int i;   // Contatore delle passate
    int c;  // Contatore degli elementi dell'array di struct
    struttura temp_s;   // Struttura temporanea per fare lo swapping fra strutture

    for(i=0; i<size; i++)  // Ciclo per le passate
    {
        for(c=0; c<size; c++)  // Ciclo per li elementi
        {
            if(array_Struct[c].Vittorie>array_Struct[c+1].Vittorie)  // Le vittorie dell'elemento maggiore sono maggiori dell'elelemento successivo
            {
                if(array_Struct[c].Vittorie==array_Struct[c+1].Vittorie)    // Le vittorie dell'elemento maggiore sono uguali all'elemento successivo
                {
                    if(strcmp(array_Struct[c].Nome, array_Struct[c+1].Nome)>0)  // Ordina i nome per alfabeto
                    {
                        temp_s=array_Struct[c];                                  /*                                         */
                        array_Struct[c]=array_Struct[c+1];                       /*          inverte le strutture           */
                        array_Struct[c+1]=temp_s;                                /*                                         */
                    }
                }
            }
            else    // Le vittorie dell'elemento maggiore sono minori dell'elelemento successivo
            {
                temp_s=array_Struct[c];
                array_Struct[c]=array_Struct[c+1];                               // inverte le strutture
                array_Struct[c+1]=temp_s;
            }
        }

    }
}

/* Acquisisce i dati dal file Vincitori.txt e li salva in un array di struct */
void PalmaresGiocatori(void)
{
    int j=0;      /* contatore dei giocatori */
    int i;        /* contatore generico */

    FILE *ft;     // Puntatore al file
    char riga_temp[1024];           // striga dove viene salvata temporaneamente una riga del FILE

    struttura *Player = (struttura*)malloc(sizeof(struttura)); //Inizializza il primo giocatore con la vittoia impostata a 1
    Player[0].Vittorie=1;

    if ((ft=fopen("Vincitori.txt", "r"))==NULL) // Il file non può essere aperto
    {
        printf("\n\nIl file non puo' essere aperto\n\n");
    }
    else    // Il file può essere aperto
    {
        if((fgets(Player[0].Nome, 1024, ft))==NULL) // Non è riuscito ad aquisire il primo vincitore
        {
            printf("\n\nFile vuoto\n\n");
        }
        else // è riuscito ad aquisire il primo nome
        {

            while((fgets(riga_temp, 1024, ft))!=NULL)           // aquisisce la riga successiva dal File e la salva temporaneamente
            {

                for(i=0; i<=j; i++)                             // Cicla per tutti i giocatori acquisiti
                                                                // Controlla se la riga temporanea è uguale a uno dei nomi aquisiti in precedenza
                {
                    if(strcmp(riga_temp, Player[i].Nome)==0)    //la riga temp è uguale a uno dei giocatori già letti
                    {
                        Player[i].Vittorie++;                   // Aumenta il numero di vittorie di quel giocatore
                        i=j+1;                                  // Esce dal ciclo
                    }
                    else
                    {
                        if(i==j)                                // la riga temporanea è diversa da tutti i giocatori precedentemente letti
                        {
                            j++;
                            grow_Array2 ( &Player , j);         // Aumenta la dimensione dello struct dei giocatori di 1
                            Player[j].Vittorie=1;               // Imposta le sue vittorie a 1
                            strcpy(Player[j].Nome, riga_temp);  // Inizializza il nuovo struct vuoto con il nome nuove del giocatore
                            i=j+1;                              // esce dal ciclo
                        }
                    }
                }
            }


            BubbleStruct( Player, j);  // Ordinamento delle strutture

            printf("\n   Vittorie     Vincitori\n\n");
            for(i=0; i<=j; i++)     //Stampa delle strutture
            {
                printf("   %d\t\t%-s", Player[i].Vittorie, Player[i].Nome );
            }
            printf("\n\n");

        }

        fclose(ft);

    }



    system("PAUSE");
}


void regole(void) //funzione regole di gioco//
{
    printf("La damiera si compone di 64 caselle alternate per colore, bianche e scure, e va posizionata con l'ultima casella in basso a destra di colore nero.\n\n");
    printf("Ciascun giocatore dispone all'inizio di 12 pedine, di colore diverso da quelle dell'avversario (bianche o nere), collocate sulle prime tre righe di caselle scure poste sul proprio lato della damiera.");
    printf(" La scelta del colore fra i giocatori si effettua per sorteggio.\n\n");
    printf("Inizia a giocare sempre il bianco.\n\n");
    printf("La pedina si muove sempre in diagonale sulle caselle scure di una casella alla volta e soltanto in avanti.");
    printf(" Quando una pedina raggiunge una delle caselle dell'ultima riga viene promossa, diventa dama e deve essere contraddistinta con la sovrapposizione di un'altra pedina prelevata tra quelle non in gioco.\n\n");
    printf("Ogni pedina puo' mangiare quelle avversarie che si trovano in avanti, sulla casella diagonale accanto alla propria e che abbiano la casella successiva libera. ");
    printf("Dopo la presa, se incontrano in diagonale altre pedine con la successiva casella libera, si deve continuare a mangiare. In tal caso la presa si chiama multipla.\n\n");
    printf("La dama si muove anch'essa di una casella alla volta, sempre in diagonale, in tutte le direzioni possibili, mangiando sia le pedine che le dame avversarie.\n\n");
    printf("Avendo piu' possibilita' di presa si debbono rispettare obbligatoriamente nell'ordine le seguenti priorita':\n");
    printf("1 e' obbligatorio mangiare dove ci sono piu' pezzi\n");
    printf("2 a parita' di pezzi da prendere, tra pedina e dama si e' obbligati a mangiare la dama. Inoltre se si puo' optare tra il mangiare di dama o di pedina e' obbligatorio mangiare con la dama\n");
    printf("3 la dama sceglie la presa dove si mangiano piu' dame\n");
    printf("4 a parita'  di condizioni si mangia dove s'incontra prima la dama avversaria\n\n");
    printf("Si vince per abbandono dell'avversario, che si trova in palese difficolta', o quando si catturano o si bloccano tutti i pezzi avversari.\n\n");
    printf("Si pareggia in una situazione di evidente equilibrio finale per accordo dei giocatori\n\n");

    system("PAUSE");
}



int check_PresaD( int a[8][8],int colore)
{
    int ret=0;      // RET=0 non è stata trovata almeno una presa
    int i, j;       // contatori  indici delle matrici
    int c=0;        // lunghezza dello struct-1
    int size1=0;    // Lunghezza di Percorso[]Mangiato
    int pedina, dama;
    PercorsoTemporaneo *PercorsoTemp=(PercorsoTemporaneo*)calloc( 1, sizeof(PercorsoTemporaneo)); // Array di strutture contenete tutti i percorsi di presa

    if(colore%2==0) // Turno bianchi
    {
        pedina =196;
        dama=176;
    }
    else             // Turno neri
    {
        pedina=254;
        dama=219;
    }



    for (i=0; i<=7; i++)    // Ciclo per controllare tutte le caselle
    {
        for(j=0; j<=7; j++)
        {
            if(a[i][j]==395-dama) // Ha trovato una dama del turno del giocatore
            {
                if((a[i-1][j-1]==pedina||a[i-1][j-1]==dama)&&a[i-2][j-2]==32&&i-1>=0&&j-1>=0) // Ha trovato una presa nella posizione diagonale in basso a sinistra
                {
                    grow_Array( &PercorsoTemp, c);  // Realloca l'array di struct ingrandendolo di di una grandezza c+1
                    if(a[i-1][j-1]==dama)   // Mangia una dama
                    {
                        strcpy(PercorsoTemp[c].Percorso, "d");  // Scrive in Percorso che la dama ha mangiato una dama(d) avversaria
                    }
                    else if (a[i-1][j-1]==pedina)   // Mangia una pedina
                    {
                        strcpy(PercorsoTemp[c].Percorso, "p");  // Scrive in Percorso che la dama ha mangiato una pedina(p) avversaria
                    }
                    PercorsoTemp[c].Mangiato[0]=i;    // Aggiunge le cordinate di partenza e di arrivo della dama dopo la mangiata
                    PercorsoTemp[c].Mangiato[1]=j;
                    PercorsoTemp[c].Mangiato[2]=i-2;
                    PercorsoTemp[c].Mangiato[3]=j-2;
                    matriscopy ( PercorsoTemp[c].damiera, a); // Copia la matrice della partita nella matrice del Percorso inizializzato
                    PercorsoTemp[c].damiera[i-1][j-1]=32;       // Elimina la dama/o pedina che ha mangiato e sposta la dama
                    PercorsoTemp[c].damiera[i][j]=32;
                    PercorsoTemp[c].damiera[i-2][j-2]=395-dama;
                    c++;   // Aumenta la lunghezza dell'arry di struct
                    //Passa alla funzione ricorsiva, l'array di struct , la lunghezza dell'array di struct, la lunghezza dell'array Percorso Mangiato, le cordinate dove deve controllare la prossima pres, la damiera modificata, il colore del turno
                    presaD(&PercorsoTemp, &c, size1+4, i-2, j-2, PercorsoTemp[c-1].damiera, colore);
                    ret=1; // Indica che è stata trovata una presa
                }

                if((a[i-1][j+1]==pedina||a[i-1][j+1]==dama)&&a[i-2][j+2]==32&&i-1>=0&&j+1<=7)    // Ha trovato una presa possibile nella posizione in basso a destra della dama
                {
                    grow_Array( &PercorsoTemp, c);
                    if(a[i-1][j+1]==dama)
                    {
                        strcpy(PercorsoTemp[c].Percorso, "d");
                    }
                    else if (a[i-1][j+1]==pedina)
                    {
                        strcpy(PercorsoTemp[c].Percorso, "p");
                    }
                    PercorsoTemp[c].Mangiato[0]=i;
                    PercorsoTemp[c].Mangiato[1]=j;
                    PercorsoTemp[c].Mangiato[2]=i-2;
                    PercorsoTemp[c].Mangiato[3]=j+2;
                    matriscopy ( PercorsoTemp[c].damiera, a);
                    PercorsoTemp[c].damiera[i-1][j+1]=32;
                    PercorsoTemp[c].damiera[i][j]=32;
                    PercorsoTemp[c].damiera[i-2][j+2]=395-dama;

                    c++;
                    presaD(&PercorsoTemp, &c, size1+4, i-2, j+2, PercorsoTemp[c-1].damiera, colore);
                    ret=1;

                }

                if((a[i+1][j-1]==pedina||a[i+1][j-1]==dama)&&a[i+2][j-2]==32&&i+1<=7&&j-1>=0) // presa in alto a sinistra
                {
                    grow_Array( &PercorsoTemp, c);
                    if(a[i+1][j-1]==dama)
                    {
                        strcpy(PercorsoTemp[c].Percorso, "d");
                    }
                    else if (a[i+1][j-1]==pedina)
                    {
                        strcpy(PercorsoTemp[c].Percorso, "p");
                    }
                    PercorsoTemp[c].Mangiato[0]=i;
                    PercorsoTemp[c].Mangiato[1]=j;
                    PercorsoTemp[c].Mangiato[2]=i+2;
                    PercorsoTemp[c].Mangiato[3]=j-2;
                    matriscopy ( PercorsoTemp[c].damiera, a);
                    PercorsoTemp[c].damiera[i+1][j-1]=32;
                    PercorsoTemp[c].damiera[i][j]=32;
                    PercorsoTemp[c].damiera[i+2][j-2]=395-dama;
                    c++;
                    presaD(&PercorsoTemp, &c, size1+4, i+2, j-2, PercorsoTemp[c-1].damiera, colore);
                    ret=1;
                }

                if((a[i+1][j+1]==pedina||a[i+1][j+1]==dama)&&a[i+2][j+2]==32&&i+1<=7&&j+1<=7) // Presa in alto a destra
                {
                    grow_Array( &PercorsoTemp, c);
                    if(a[i+1][j+1]==dama)
                    {
                        strcpy(PercorsoTemp[c].Percorso, "d");
                    }
                    else if (a[i+1][j+1]==pedina)
                    {
                        strcpy(PercorsoTemp[c].Percorso, "p");
                    }

                    PercorsoTemp[c].Mangiato[0]=i;
                    PercorsoTemp[c].Mangiato[1]=j;
                    PercorsoTemp[c].Mangiato[2]=i+2;
                    PercorsoTemp[c].Mangiato[3]=j+2;
                    matriscopy ( PercorsoTemp[c].damiera, a);
                    PercorsoTemp[c].damiera[i+1][j+1]=32;
                    PercorsoTemp[c].damiera[i][j]=32;
                    PercorsoTemp[c].damiera[i+2][j+2]=395-dama;
                    c++;
                    presaD(&PercorsoTemp, &c, size1+4, i+2, j+2, PercorsoTemp[c-1].damiera, colore);
                    ret=1;

                }

            }
        }
    }


    if(ret==1) // C'è stata almeno una presa
    {

        presa_Migliore( PercorsoTemp, c, a);


    }

    free(PercorsoTemp);
    PercorsoTemp= NULL;
    return ret;
}

void presaD ( PercorsoTemporaneo **Temp, int *size_S, int size_M,int c1,int c2, int a[8][8], int colore)
{
    int c=*size_S-1; // c indica la posizione dell'ultimo Temp che è stato modificato nella funzione chiamante
    int pedina, dama;

    if(colore%2==0) //Turno Bianchi
    {
        pedina =196;
        dama=176;
    }
    else //Turno Neri
    {
        pedina=254;
        dama=219;
    }

    if((a[c1-1][c2-1]==pedina||a[c1-1][c2-1]==dama)&&a[c1-2][c2-2]==32&&c1-1>=0&&c2-1>=0) //Presa in basso a sinistra
    {
        grow_Array( Temp, *size_S); // Aumenta la grandezza dell'array di struct di 1
        (*Temp)[*size_S]=(*Temp)[c]; // Copia lo struct che ha ricevuto dal chiamante in quello nuovo che ha creato con grow_array
        if(a[c1-1][c2-1]==dama) // accoda all'array Percorso dello struct una p o una d in base a quello che la dama ha mangiato
        {
            strcat((*Temp)[*size_S].Percorso, "d");
        }
        else if (a[c1-1][c2-1]==pedina)
        {
            strcat((*Temp)[*size_S].Percorso, "p");
        }
        (*Temp)[*size_S].Mangiato[size_M]=c1-2; // accoda le cordinate della casella vuota dove è arrivata la dama dopo che ha mangiato
        (*Temp)[*size_S].Mangiato[size_M+1]=c2-2;
        (*Temp)[*size_S].damiera[c1-1][c2-1]=32; // Trasforma la damiera dopo la mangiata
        (*Temp)[*size_S].damiera[c1][c2]=32;
        (*Temp)[*size_S].damiera[c1-2][c2-2]=395-dama;
        (*size_S)++; // Lunghezza dell'array di struct +1
        //Passa alla funzione ricorsiva, l'array di struct , la lunghezza dell'array di struct, la lunghezza dell'array Percorso Mangiato, le cordinate dove deve controllare la prossima pres, la damiera modificata, il colore del turno
        presaD(Temp, size_S, size_M+2, c1-2, c2-2, (*Temp)[*size_S-1].damiera, colore);

    }


   if((a[c1-1][c2+1]==pedina||a[c1-1][c2+1]==dama)&&a[c1-2][c2+2]==32&&c1-1>=0&&c2+1<=7) // Presa in basso a sinistra
    {
        grow_Array( Temp, *size_S);
        (*Temp)[*size_S]=(*Temp)[c];
        if(a[c1-1][c2+1]==dama)
        {
            strcat((*Temp)[*size_S].Percorso, "d");
        }
        else if (a[c1-1][c2+1]==pedina)
        {
            strcat((*Temp)[*size_S].Percorso, "p");
        }
        (*Temp)[*size_S].Mangiato[size_M]=c1-2;
        (*Temp)[*size_S].Mangiato[size_M+1]=c2+2;
        (*Temp)[*size_S].damiera[c1-1][c2+1]=32;
        (*Temp)[*size_S].damiera[c1][c2]=32;
        (*Temp)[*size_S].damiera[c1-2][c2+2]=395-dama;

        (*size_S)++;
        presaD(Temp, size_S, size_M+2, c1-2, c2+2, (*Temp)[*size_S-1].damiera, colore);
    }

    if((a[c1+1][c2-1]==pedina||a[c1+1][c2-1]==dama)&&a[c1+2][c2-2]==32&&c1+1<=7&&c2-1>=0) // Presa in alto a sinistra
    {
        grow_Array( Temp, *size_S);
        (*Temp)[*size_S]=(*Temp)[c];
        if(a[c1+1][c2-1]==dama)
        {
            strcat((*Temp)[*size_S].Percorso, "d");
        }
        else if (a[c1+1][c2-1]==pedina)
        {
            strcat((*Temp)[*size_S].Percorso, "p");
        }
        (*Temp)[*size_S].Mangiato[size_M]=c1+2;
        (*Temp)[*size_S].Mangiato[size_M+1]=c2-2;
        (*Temp)[*size_S].damiera[c1+1][c2-1]=32;
        (*Temp)[*size_S].damiera[c1][c2]=32;
        (*Temp)[*size_S].damiera[c1+2][c2-2]=395-dama;
        (*size_S)++;
        presaD( Temp, size_S, size_M+2, c1+2, c2-2, (*Temp)[*size_S-1].damiera, colore);

    }


    if((a[c1+1][c2+1]==pedina||a[c1+1][c2+1]==dama)&&a[c1+2][c2+2]==32&&c1+1<=7&&c2+1<=7)   // Presa in alto a destra
    {
        grow_Array( Temp, *size_S);
        (*Temp)[*size_S]=(*Temp)[c];
        if(a[c1+1][c2+1]==dama)
        {
            strcat((*Temp)[*size_S].Percorso, "d");
        }
        else if (a[c1+1][c2+1]==pedina)
        {
            strcat((*Temp)[*size_S].Percorso, "p");
        }

        (*Temp)[*size_S].Mangiato[size_M]=c1+2;
        (*Temp)[*size_S].Mangiato[size_M+1]=c2+2;
        (*Temp)[*size_S].damiera[c1+1][c2+1]=32;
        (*Temp)[*size_S].damiera[c1][c2]=32;
        (*Temp)[*size_S].damiera[c1+2][c2+2]=395-dama;
        (*size_S)++;
        presaD(Temp, size_S, size_M+2, c1+2, c2+2, (*Temp)[*size_S-1].damiera, colore);
    }

}

/* Analizza l'array di struct e sceglie il percorso migliore, lo stampa e lo esegue. In caso di paità fra i percorsi
    permette all'utente di scegliere quale percorso fare */
void presa_Migliore(const PercorsoTemporaneo *Temp,int size_S, int a[8][8])
{


    int i, j; // Contatori generici
    int magg=0; // Indice del maggiore
    int len1; // Lunghezza .Percorso del maggiore
    int *Maggiori; // Array contenente tutti gli indici dei percorsi maggiori in caso di uguaglianza
    int size_V=1;   // Lunghezza di Maggiori[]
    int scelta; // Scelta del percorso da fare
    char cord; // Cordinata come lettera


    len1= strlen(Temp[magg].Percorso); // Il maggiore è il primo elemento dell'array di struct
    Maggiori=(int*)malloc(sizeof(int));

    for(i=1; i<size_S; i++) // Controlla tutti gli struct dell'array Temp[]
    {
        if(len1 < strlen(Temp[i].Percorso)) // La lunghezza del Percorso del maggiore è minore della lunghezza del Percorso del successivo ex: p < pp
        {
            // Il maggiore diventa il successivo
            magg=i;
            len1 = strlen(Temp[i].Percorso);
        }
        if(len1 == strlen(Temp[i].Percorso)) // Le lunghezze sono uguali
        {
            if(strcmp(Temp[magg].Percorso, Temp[i].Percorso)==1) // Il percorso del successivo è "migliore" del percorso maggiore
            {
                // Il maggiore diventa il successivo
                magg=i;
                len1 = strlen(Temp[i].Percorso);
            }
        }
    }

    Maggiori[0]=magg; // Viene salvato nell'array dei Maggiori l'indice del Percorso migliore


    for(i=magg+1; i<size_S; i++) // Controlla tuttu gli struct subito dopo l'indice del maggiore
    {
        if(strcmp(Temp[magg].Percorso, Temp[i].Percorso)==0) // I percorsi sono uguali
        {
            Maggiori=(int*)realloc( Maggiori, (size_V+1)*sizeof(int)); // auemnta la grandezza del vettore
            Maggiori[size_V]=i; // aggiunge l'indice all'array dei Percorsi Maggiori
            size_V++;
        }
    }



    if(size_V==1) // Nell'array Maggiori c'è solo un elemento
    {
        printf("Stai per fare questa presa:\n");

        len1=(strlen(Temp[Maggiori[0]].Percorso)*2)+2; // len1 corrisponde alla lunghezza dell'array Temp.Mangiato ex: len(Percorso)=2 -> len(Mangiato)=6

        printf("1:");

        for(j=0; j<len1; j++) // Cicla tutto Temp.Mangiato
        {
            if(Temp[Maggiori[0]].Mangiato[j]<=7&&Temp[Maggiori[0]].Mangiato[j]>=0) // Le cordinate sono comprese fra 0 e 7
            {
                cord = trasformaCord( Temp[Maggiori[0]].Mangiato[j]); // Trasforma il valore int della cordinata in Temp.Mangiato in una lettera dell'alfabeto

                printf("   %c", cord);
            }

            j++; // Passa alla cordinata successiva

            if(Temp[Maggiori[0]].Mangiato[j]<=7&&Temp[Maggiori[0]].Mangiato[j]>=0)  // Le cordinate sono comprese fra 0 e 7
            {
                printf("-%d", Temp[Maggiori[0]].Mangiato[j]+1); // Stampa della cordinata + 1
            }
        }
        free(Maggiori);
        Maggiori=NULL;
        matriscopy( a, Temp[magg].damiera); // Trasforma la damiera di gioco dopo aver eseguito il percorso migliore
        printf("\n");
        system("PAUSE");
    }
    else // Nell'array Maggiori c'è più di un solo elemento
    {

        for(i=0; i<size_V; i++) // Cicla fino alla fine dell'array
        {
            printf("%d:", i+1);

            len1=(strlen(Temp[Maggiori[i]].Percorso)*2)+2; // Corrisponde alla lunghezza dell'array Temp.Mangiato

            for(j=0; j<len1; j++) // Cicla tutto Temp.Mangiato
            {
                if(Temp[Maggiori[i]].Mangiato[j]<=7&&Temp[Maggiori[i]].Mangiato[j]>=0)
                {
                    cord = trasformaCord( Temp[Maggiori[i]].Mangiato[j]); // Trasforma il valore int della cordinata in Temp.Mangiato in una lettera dell'alfabeto

                    printf("   %c", cord);
                }

                j++; // Passa alla cordinata successiva

                if(Temp[Maggiori[i]].Mangiato[j]<=7&&Temp[Maggiori[i]].Mangiato[j]>=0)
                {
                    printf("-%d", Temp[Maggiori[i]].Mangiato[j]+1);
                }

            }
            printf("\n");
        }

        printf("Quale presa vuoi fare?\n");

        while(scanf("%d", &scelta)!=1)
        {
            clear_input_buffer();
            printf("Scelta non valida, inserire il numero della presa\n");
        }
        clear_input_buffer();

        while(scelta<1||scelta>size_V) // scelta non è un valore compreso fra 0 e size_V-1
        {
            printf("Scelta non valida, inserire il numero della presa\n");
            while(scanf("%d", &scelta)!=1)
            {
                clear_input_buffer();
                printf("Scelta non valida, inserire il numero della presa\n");

            }
            clear_input_buffer();
        }

        matriscopy( a, Temp[Maggiori[scelta-1]].damiera); //Modifica la damiera di gioco dopo aver eseguito il percorso scelto dall'utente
        free(Maggiori);
        Maggiori=NULL;
    }


}

/* Riceve un int e lo trasforma in una lettera della damiera */
char trasformaCord( int cord1 )
{

    char ret;

    switch(cord1)
    {
    case 0 :
        ret= 'A';
        break;
    case 1:
        ret= 'B';
        break;
    case 2:
        ret= 'C';
        break;
    case 3:
        ret= 'D';
        break;
    case 4:
        ret= 'E';
        break;
    case 5:
        ret= 'F';
        break;
    case 6:
        ret= 'G';
        break;
    case 7:
        ret= 'H';
        break;
    default:
        ret= 0;
        break;
    }
    return ret;
}


/* Controlla se una pedina bianca può fare una presa */
int check_PresaPB( int a[8][8])
{
    int ret=0;     // ret=0 non ci sono prese. ret=1 c'è almeno una presa
    int i, j;      // contatori  indici delle matrici
    int c=0;       // contatore degli struct
    int size1=0;     // grandezza del vettore PercorsoTemp.Mangiato
    PercorsoTemporaneo *PercorsoTemp;       // Percorsi di presa
    PercorsoTemp=(PercorsoTemporaneo*)calloc( 0, sizeof(PercorsoTemporaneo));

    for ( i=0; i<=7; i++)         // Controlla tutte le caselle
    {
        for(j=0; j<=7; j++)
        {
            if(a[i][j]==254)    // C'è una pedina bianca
            {
                if(a[i-1][j-1]==196&&a[i-2][j-2]==32&&i-1>=0&&j-1>=0)  // Ha la possibilità di fare presa sulla digonale in alto a sinistra
                {
                    grow_Array( &PercorsoTemp, c);
                    strcpy(PercorsoTemp[c].Percorso, "p");      // Aggiunge una p all'array di quello che ha mangiato
                    PercorsoTemp[c].Mangiato[0]=i;          // Aggiunge in sequenza le cordinate della pedina prima e dopo la mangiata
                    PercorsoTemp[c].Mangiato[1]=j;
                    PercorsoTemp[c].Mangiato[2]=i-2;
                    PercorsoTemp[c].Mangiato[3]=j-2;
                    matriscopy ( PercorsoTemp[c].damiera, a);   // Copia la matrice di gioco nella matrice dello struct
                    PercorsoTemp[c].damiera[i-1][j-1]=32;   // Modifica tale matrice a mangiata effettuata
                    PercorsoTemp[c].damiera[i][j]=32;   // La pedina mangiata diventa uguale a 32 (casella nera vuota)
                    PercorsoTemp[c].damiera[i-2][j-2]=254;
                    c++; // Incrementa il contatore degli struct
                    /* Passa alla funzione l'indirizzo dell'array di struct, l'indirizzo del contatore, la grandezza dell'array .Mangiato e di quella di .Percorso e infine passa la matrice modificata */
                    presaPB(&PercorsoTemp, &c, size1+4, i-2, j-2, PercorsoTemp[c-1].damiera);
                    ret=1; // è stata trovata una presa */
                }

                if(a[i-1][j+1]==196&&a[i-2][j+2]==32&&i-1>=0&&j+1<=7)     // Ha la possibilità di fare presa sulla digonale in alto a destra
                {
                    grow_Array( &PercorsoTemp, c);
                    strcpy(PercorsoTemp[c].Percorso, "p");                /* Aggiunge una "p" all'array di cosa ha mangiato */
                    PercorsoTemp[c].Mangiato[0]=i;
                    PercorsoTemp[c].Mangiato[1]=j;
                    PercorsoTemp[c].Mangiato[2]=i-2;
                    PercorsoTemp[c].Mangiato[3]=j+2;
                    matriscopy ( PercorsoTemp[c].damiera, a);
                    PercorsoTemp[c].damiera[i-1][j+1]=32;
                    PercorsoTemp[c].damiera[i][j]=32;
                    PercorsoTemp[c].damiera[i-2][j+2]=254;
                    c++;
                    presaPB(&PercorsoTemp, &c, size1+4, i-2, j+2, PercorsoTemp[c-1].damiera);
                    ret=1;
                }


            }
        }
    }

    if(ret==1)  // è stat trovata almeno una presa
    {
        presa_Migliore( PercorsoTemp, c, a);
    }

    free(PercorsoTemp);
    PercorsoTemp=NULL;

    return ret;
}

/* Controlla se una pedina nera può fare una presa */
int check_PresaPN( int a[8][8])
{
    int ret=0;  // ret=0 non ci sono prese. ret=1 c'è almeno una presa
    int i, j;     // contatore indici della matrice
    int c=0;        // contatore degli struct
    int size1=0;                            //grandezza del vettore PercorsoTemp
    PercorsoTemporaneo *PercorsoTemp;
    PercorsoTemp=(PercorsoTemporaneo*)calloc( 0, sizeof(PercorsoTemporaneo));

    for (i=0; i<=7; i++)   //Controlla tutte le caselle
    {
        for(j=0; j<=7; j++)
        {
            if(a[i][j]==196)
            {
                if(a[i+1][j-1]==254&&a[i+2][j-2]==32&&i+1<=7&&j-1>=0)      // é possibile fare una presa in basso a sinistra
                {
                    grow_Array( &PercorsoTemp, c);      // Aumenta la grandezza dell'array
                    strcpy(PercorsoTemp[c].Percorso, "p");       // Aggiunge una "p" all'array di cosa ha mangiato
                    PercorsoTemp[c].Mangiato[0]=i;      // Aggiunge all'array .Mangiato gli indici dopo la mangiata
                    PercorsoTemp[c].Mangiato[1]=j;
                    PercorsoTemp[c].Mangiato[2]=i+2;
                    PercorsoTemp[c].Mangiato[3]=j-2;
                    matriscopy ( PercorsoTemp[c].damiera, a);   // Copia la matrice del gioco nella matrice della struttura
                    PercorsoTemp[c].damiera[i+1][j-1]=32;   // Modifica la damiera della struttura effetuano la presa
                    PercorsoTemp[c].damiera[i][j]=32;
                    PercorsoTemp[c].damiera[i+2][j-2]=196;
                    c++;    // Incrementa il numeero delle strutture (Percorsi)
                    presaPN(&PercorsoTemp, &c, size1+4, i+2, j-2, PercorsoTemp[c-1].damiera);
                    ret=1;
                }

                if(a[i+1][j+1]==254&&a[i+2][j+2]==32&&i+1<=7&&j+1<=7)     // C'è una presa in alto a destra
                {
                    grow_Array( &PercorsoTemp, c);
                    strcpy(PercorsoTemp[c].Percorso, "p");                /* Aggiunge una "p" all'array di cosa ha mangiato */
                    PercorsoTemp[c].Mangiato[0]=i;
                    PercorsoTemp[c].Mangiato[1]=j;
                    PercorsoTemp[c].Mangiato[2]=i+2;
                    PercorsoTemp[c].Mangiato[3]=j+2;
                    matriscopy ( PercorsoTemp[c].damiera, a);
                    PercorsoTemp[c].damiera[i+1][j+1]=32;
                    PercorsoTemp[c].damiera[i][j]=32;
                    PercorsoTemp[c].damiera[i+2][j+2]=196;
                    c++;
                    presaPN(&PercorsoTemp, &c, size1+4, i+2, j+2, PercorsoTemp[c-1].damiera);
                    ret=1;
                }


            }
        }
    }

    if(ret==1) // Ha trovato almeno una presa
    {
        presa_Migliore( PercorsoTemp, c, a);
    }

    free(PercorsoTemp);
    PercorsoTemp=NULL;

    return ret;
}

/* Costruisci tutti i possibili percorsiper una presa */
void presaPN ( PercorsoTemporaneo **Temp,int *size_S, int size_M,int c1,int c2, int a[8][8])
{
    int c=*size_S-1;    // c indica la posizione dell'ultimo Temp che è stato modificato nella funzione chiamante

    if(a[c1+1][c2-1]==254 && a[c1+2][c2-2]==32 && c1+1<=7 && c2-1>=0 ) // C'è una presa in basso a sinistra
    {
        grow_Array( Temp, *size_S); // Aumenta la grandezza dell'array di struct (Percorsi)
        (*Temp)[*size_S]=(*Temp)[c];    // Copia l'ultimo struct che è stato modificato nella funzione chiamante
        (*Temp)[*size_S].Mangiato[size_M]=c1+2; // Aggiunge a .Mangiato le cordinate della presa
        (*Temp)[*size_S].Mangiato[size_M+1]=c2-2;
        (*Temp)[*size_S].damiera[c1+1][c2-1]=32;    // Modifica la damiera dello struct effettuando la presa
        (*Temp)[*size_S].damiera[c1][c2]=32;
        (*Temp)[*size_S].damiera[c1+2][c2-2]=196;
        strcat((*Temp)[*size_S].Percorso, "p");
        (*size_S)++;
        presaPN(Temp, size_S, size_M+2, c1+2, c2-2, (*Temp)[*size_S-1].damiera);

    }


    if(a[c1+1][c2+1]==254 && a[c1+2][c2+2]==32 && c1+1<=7 && c2+1<=7)   // C'è una presa in basso a destra
    {
        grow_Array( Temp, *size_S);
        (*Temp)[*size_S]=(*Temp)[c];
        (*Temp)[*size_S].Mangiato[size_M]=c1+2;
        (*Temp)[*size_S].Mangiato[size_M+1]=c2+2;
        (*Temp)[*size_S].damiera[c1+1][c2+1]=32;
        (*Temp)[*size_S].damiera[c1][c2]=32;
        (*Temp)[*size_S].damiera[c1+2][c2+2]=196;
        strcat((*Temp)[*size_S].Percorso, "p"); // Aggiunge una p al'array .Percorso per indicare che è stata magiata una pedina
        (*size_S)++;    //  Contatore degli struct (Percorso)
        presaPN(Temp, size_S, size_M+2, c1+2, c2+2, (*Temp)[*size_S-1].damiera);
    }
}

void presaPB ( PercorsoTemporaneo **Temp,int *size_S, int size_M,int c1,int c2, int a[8][8])
{

    int c=*size_S-1;    // c indica la posizione dell'ultimo Temp che è stato modificato nella funzione chiamante

    if(a[c1-1][c2-1]==196 && a[c1-2][c2-2]==32 && c1-1>=0 && c2-1>=0 )  // C'è una presa in alto a sinistra
    {
        grow_Array( Temp, *size_S); // Aumenta la grandezza dell'array di struct (Percorsi)
        (*Temp)[*size_S]=(*Temp)[c]; // Copia l'ultimo struct che è stato modificato nella funzione chiamante
        (*Temp)[*size_S].Mangiato[size_M]=c1-2; //Aggiunge a .Mangiato le cordinate delle posizioni dopo la presa
        (*Temp)[*size_S].Mangiato[size_M+1]=c2-2;
        (*Temp)[*size_S].damiera[c1-1][c2-1]=32; // Modifica la damiera dello struct effettuando la presa
        (*Temp)[*size_S].damiera[c1][c2]=32;
        (*Temp)[*size_S].damiera[c1-2][c2-2]=254;
        strcat((*Temp)[*size_S].Percorso, "p"); // Aggiunge una p al'array .Percorso per indicare che è stata magiata una pedina
        (*size_S)++; // Cntatore deli struct
        presaPB(Temp, size_S, size_M+2, c1-2, c2-2, (*Temp)[*size_S-1].damiera );

    }


    if(a[c1-1][c2+1]==196 && a[c1-2][c2+2]==32 && c1-1>=0 && c2+1<=7)
    {
        grow_Array( Temp, *size_S);
        (*Temp)[*size_S]=(*Temp)[c];
        (*Temp)[*size_S].Mangiato[size_M]=c1-2;
        (*Temp)[*size_S].Mangiato[size_M+1]=c2+2;
        (*Temp)[*size_S].damiera[c1-1][c2+1]=32;
        (*Temp)[*size_S].damiera[c1][c2]=32;
        (*Temp)[*size_S].damiera[c1-2][c2+2]=254;
        strcat((*Temp)[*size_S].Percorso, "p");
        (*size_S)++;
        presaPB(Temp, size_S, size_M+2, c1-2, c2+2, (*Temp)[*size_S-1].damiera);
    }
}


/* Controlla se almeno una pedina del turno del giocatore si può muovere */
int gameover(const char Player1[],const char Player2[],int colore,int a[8][8])
{
    int muovi=1; // Non ci sono mosse disponibili. muovi = 0 ci sono mosse disponibili
    int i, j;   // contatori generici
    int pedina, dama;
    FILE *fp;

    if(colore%2==0)
    {
        pedina=254;
        dama=219;
    }
    else
    {
        pedina=196;
        dama=176;
    }

    for(i=0; i<8; i++)  // Controlla tutte le caselle
    {
        for(j=0; j<8; j++)
        {
            if(a[i][j]==pedina||a[i][j]==dama)  // C'è una pedina o dama
            {
                if(a[i][j]==dama)   // è una dama
                {
                    if((a[i-1][j-1]==32&&i-1>=0&&j-1>=0) || (a[i-1][j+1]==32&&i-1>=0&&j+1<=7) || (a[i+1][j-1]==32&&i+1<=7&&j-1>=0) || (a[i+1][j+1]==32&&i+1<=7&&j+1<=7))
                    { // Si può muovere
                        muovi=0;
                        j=9;    // esce dal ciclo
                        i=9;

                    }
                }
                else // C'è una pedina
                {
                    if(pedina==254) // è il turno dei bianchi
                    {
                        if((a[i-1][j-1]==32&&i-1>=0&&j-1>=0) || (a[i-1][j+1]==32&&i-1>=0&&j+1<=7))
                        {   // si può muovere
                            muovi=0;
                            j=9;    // esce dal ciclo
                            i=9;
                        }
                    }
                    else if(pedina==196) // è il turno dei neri
                    {
                        if((a[i+1][j-1]==32&&i+1<=7&&j-1>=0) || (a[i+1][j+1]==32&&i+1<=7&&j+1<=7))
                        {   // si può muovere
                            muovi=0;
                            j=9;    // esce dal ciclo
                            i=9;
                        }
                    }
                }
            }
        }
    }

    if(muovi==1) // Non ci sono mosse disponibili
    {
        if ((fp = fopen("Vincitori.txt", "a"))==NULL)
        {
            printf("errore: Il file dei Vincitori non può essere aperto\n");
        }
        else
        {
            if(colore%2==0) // Turno dei bianchi
            {
                fprintf( fp, "%s\n", Player2);
            }
            else // Turno dei neri
            {
                fprintf( fp, "%s\n", Player1);
            }

            fclose(fp);
        }
    }


    return muovi;
}

/*menù interno a turno, permette al giocatore di turno di scegliere tra muovere, arrendersi, patteggiare o salvare la partita e quindi terminare il programma*/
int scelta (int colore, int a[8][8], char Player1[], char Player2[])
{
    char scelta;
    int ritorno;
    printf ("Scegliere cosa fare:\t");
    printf ("M - Mossa\t");
    printf ("S - Salva partita\t ");
    printf ("P - Concorda patta\t");
    printf ("R - Chiedi resa    \n");

    scanf ("%c", &scelta);
    while (getchar() != '\n');  //svuota il buffer input
    scelta = toupper(scelta);   //trasforma in maiuscola il valore inserito
    switch (scelta)
    {
    case 'M':
        ritorno = mossa(colore, a);  //avvia la sottofunzione che regola la mossa
        break;
    case 'S':
        printf ("Salvataggio in corso\n");
        ritorno = salva_partita (Player1, Player2, colore, a); //salva la partita in corso
        break;
    case 'P':
        printf ("I giocatori sono d'accordo? (Y/N)\n");
        scanf ("%c", &scelta);
        while (getchar() != '\n');
        scelta = toupper(scelta);
        if (scelta == 'Y')                              //controlla se i giocatori sono d'accordo sul pattegiare
        {
            printf ("Patta accordata\n");
            ritorno = 0;                               //termina la partita corrente senza un vincitore
        }
        else
        {
            printf("Patta non accordata\n");
            ritorno = 2;
        }
        break;
    case 'R':
        if (colore%2 == 0)                           //controlla quale giocatore sia di turno
        {
            printf ("Vittoria del NERO\n");         //concede la vittoria al giocatore avversario
            ritorno = salva_vincitori (Player2);    //aggiorna il file del palmares
        }
        else
        {
            printf ("Vittoria del BIANCO\n");       //concede la vittoria al giocatore avversario
            ritorno = salva_vincitori (Player1);    //aggiorna il file del palmares
        }
        break;
    default:
        printf ("Scelta non valida\n");
        ritorno = 2;
        break;
    }

    return ritorno;
}

/*funzione che gestisce i controlli sulla casella in cui si trova il pezzo che si vuole muovere*/
int mossa (int colore, int a[8][8])
{
    char alph;
    int cor1;
    int cor2;
    int ritorno, check;

    printf ("Inserire coordinate di partenza: ");
    check = scanf ("%c %d", &alph, &cor2);        //controlla se i valori inseriti sono validi come coordinate
    while (getchar() != '\n');                    //ripulisce il buffer input
    alph = toupper (alph);                        //rende maiscuola la lettera inserita come coordinata
    if (check == 2)                               //se il primo controllo è andato a buon fine
    {
        cor1 = alph - 'A';                        //assegna alle due coordinate valori compresi tra 0 e 7
        cor2 = cor2 - 1;
        if ((cor1>=0) && (cor1<8) && (cor2>=0) && (cor2<8))  //controlla se l'assegnamento è andato a buon fine
        {
            if (colore%2 == 0)   //controlla quale giocatore sia di turno
            {
                if  ((a[cor1][cor2] == 254) || (a[cor1][cor2] == 219))  //controlla se la casella indicata contiene un pezzo bianco
                {
                    ritorno = casa_arrivo (a, cor1, cor2);  //avvia la sottofunzione apposita
                }
                else
                {
                    printf ("Mossa non valida\n");
                    ritorno = 2;                   //avvisa che la funzione non è andata a buon fine e bisogna quindi ripetere il turno
                }
            }
            else
            {
                if  (a[cor1][cor2] == 196 || a[cor1][cor2] == 176) //controlla se la casella indicata contiene un pezzo nero
                {
                    ritorno = casa_arrivo (a, cor1, cor2);
                }
                else
                {
                    printf ("Mossa non valida\n");
                    ritorno = 2;
                }
            }
        }
        else
        {
            printf ("Mossa non valida\n");
            ritorno = 2;
        }
    }
    else
    {
        printf ("Errore di inserimento\n");
        ritorno = 2;
    }

    return ritorno; //avvisa dell'esito della funzione
}


/* Stampa nel file la damiera, il turno e i nomi dei giocatori */
int salva_partita(char Player1[],char Player2[], int colore, int a[8][8])
{
    FILE *fp;
    int i, j;   // contatori
    int ret=0;  // flag per errori nel caricamento
    if ((fp = fopen("Salvataggio.txt", "w"))==NULL)
    {
        printf("errore: Il file Salvataggio.txt non può essere aperto\n");
        system("PAUSE");
        ret=2;
    }
    else // il file è aperto
    {
        fprintf( fp, "%s\n%s\n%d", Player1, Player2, colore);
        for(i=0; i<8; i++) // Stampa nel file la damiera del gioco
        {
            for(j=0; j<8; j++)
            {
                fprintf(fp, " %d", a[i][j]);
            }
        }
        fclose(fp);
        printf("Salvataggio riuscito\n");
        system("PAUSE");
    }
    return ret;
}

/* Apre il file Vincitori.txt e scrive i vincitori */
int salva_vincitori (char Player[])
{
    FILE *ft;
    int ritorno;

    if ((ft = fopen("Vincitori.txt", "a")) == NULL)
    {
        printf("Il file non puo' essere aperto");
        ritorno = 2;
    }
    else
    {
        fprintf (ft, "%s\n", Player);
        ritorno = 0;

        fclose (ft);
    }

    system ("PAUSE");
    return ritorno;
}


/*Sottofunzione di mossa, regola il controllo della validità delle coordinate di arrivo inserite e compie lo spostamento delle pedine*/
int casa_arrivo (int a[8][8], int cor1, int cor2)
{
    char alph;
    int cor3;
    int cor4;
    int ritorno, hold, check;

    printf ("Inserire coordinate di arrivo: ");
    check = scanf ("%c %d", &alph, &cor4);   //controlla se i valori inseriti sono validi come coordinate
    while (getchar() != '\n');               //ripulisce il buffer input
    alph = toupper (alph);                   //rende maiscuola la lettera inserita come coordinata
    if (check == 2)                          //se il primo controllo è andato a buon fine
    {
        cor3 = alph - 'A';                   //assegna alle due coordinate valori compresi tra 0 e 7
        cor4 = cor4 - 1;
        if ((cor3 >= 0) && (cor3 < 8) && (cor4 >= 0) && (cor4 < 8)) //controlla che l'assegnamento sia andato a buon fine
        {
            if (a[cor3][cor4] == 32 )   //controlla se la casella di arrivo è vuota
            {
                if ((a[cor1][cor2] == 219 ) || (a[cor1][cor2]== 176 ))   //controlla se la casella di partenza contiene una dama bianca o nera
                {
                    if (((cor3 - cor1 == 1) || (cor3 - cor1 == -1)) && ((cor4 - cor2 == 1)||(cor4 - cor2 == -1)))   //controlla, in presenza di dame, se la casella di arrivo è raggiungibile da quella di partenza
                    {
                        hold = a[cor1][cor2];           //inverte i valori della casella di partenza e di quella di arrivo
                        a[cor1][cor2] = a[cor3][cor4];
                        a[cor3][cor4] = hold;
                        ritorno = 1;                   //avverte che la mossa è valida ed è stata effettuata
                    }
                    else
                    {
                        printf ("Mossa non valida\n");
                        ritorno = 2;
                    }
                }
                else
                {
                    if (a[cor1][cor2] == 254 )   //controlla se la casella di partenza contiene una pedina bianca, altrimenti per esclusione essa ne contiene per forza una nera
                    {
                        if ((cor3 - cor1 == -1) && ((cor4 - cor2 == 1) || (cor4 - cor2 == -1)))   //controlla se la casella di arrrivo è raggiungibile da quella di partenza
                        {
                            hold = a[cor1][cor2];           //inverte i valori della casella di partenza e di quella di arrivo
                            a[cor1][cor2] = a[cor3][cor4];
                            a[cor3][cor4] = hold;
                            ritorno = 1;                   //avverte che la mossa è valida ed è stata effettuata
                        }
                        else
                        {
                            printf ("Mossa non valida\n");
                            ritorno = 2;
                        }
                    }
                    else
                    {
                        if ((cor3 - cor1 == 1) && ((cor4 - cor2 == 1) || (cor4 - cor2 == -1)))   // //controlla se la casella di arrrivo è raggiungibile da quella di partenza
                        {
                            hold = a[cor1][cor2];           //inverte i valori della casella di partenza e di quella di arrivo
                            a[cor1][cor2] = a[cor3][cor4];
                            a[cor3][cor4] = hold;
                            ritorno = 1;                   //avverte che la mossa è valida ed è stata effettuata
                        }
                        else
                        {
                            printf ("Mossa non valida\n");
                            ritorno = 2;
                        }
                    }
                }
            }
            else
            {
                printf ("Mossa non valida\n");
                ritorno = 2;
            }
        }
        else
        {
            printf ("Mossa non valida\n");
            ritorno = 2;
        }
    }
    else
    {
        printf ("Errore di inserimento\n");
        ritorno = 2;
    }

    return ritorno;
}

int clear_input_buffer(void)
{
    int ch;
    while (((ch = getchar()) != EOF) && (ch != '\n')) /* void */;
    return ch;
}

/* Trasforma le pedine in dame */
void damaPowerUp (int a[8][8])
{
    int i;
    for (i=0; i<=7; i=i+2) // Controlla la prima riga e l'ultima riga
    {
        if (a[0][i]==254)     /*inserire valore pedina bianca*/
        {
            a[0][i]=219;   /*inserire valore dama bianca*/
        }
        if (a[7][i+1]==196)   /*inserire valore pedina nera*/
        {
            a[7][i+1]=176; /*inserire valore dama nera*/
        }
    }
}

void grow_Array( PercorsoTemporaneo **array,int size){

    size++;
    PercorsoTemporaneo *temp= (PercorsoTemporaneo*)realloc( *array, (size * sizeof(PercorsoTemporaneo)));

    if (temp == NULL)
    {
        printf("Memoria heap finita.\n");
    }
    else
    {
        *array = temp;
    }
}

void grow_Array2 (struttura **myStruct, int size){

    size++;
    struttura *temp = (struttura *)realloc( *myStruct, (size * sizeof(struttura) ));

    if (temp == NULL)
    {
        printf("Memoria heap finita\n");
    }
    else
    {
        *myStruct = temp;
    }

}

void matriscopy (void * destmat, void * srcmat)
{
  memcpy(destmat,srcmat, 8*8*sizeof(int));
}
