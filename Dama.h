#ifndef DAMA_H_INCLUDED
#define DAMA_H_INCLUDED


typedef struct
{
    int Mangiato[23]; // vettore contenente gli indici degli spostamenti
    char Percorso[11]; //vettore contenente gli indici di cosa ha mangiato
    int damiera[8][8]; // damiera del percorso
} PercorsoTemporaneo;

typedef struct
{
    char Nome[1024];
    int Vittorie;
} struttura;


// Per la descrizione delle funzioni visualizzare il documento d'implementazione


void grafica(int a[8][8]);

void nuova_Partita(void);
void sorteggio( char *Player1, char *Player2);
void turno(int a[8][8], int colore, char Player1[], char Player2[]);

void carica_partita(void);


void PalmaresGiocatori(void);
void BubbleStruct(struttura *array_Struct,int size);

void regole(void);

int check_PresaD( int a[8][8],int colore);
void presaD ( PercorsoTemporaneo **Temp,int *size_S, int size_M,int c1,int c2,int a[8][8], int colore);
int check_PresaPB( int a[8][8]);
int check_PresaPN( int a[8][8]);
void presaPB ( PercorsoTemporaneo **Temp,int *size_S, int size_M,int c1,int c2, int a[8][8]);
void presaPN ( PercorsoTemporaneo **Temp,int *size_S, int size_M,int c1,int c2, int a[8][8]);
void presa_Migliore(const PercorsoTemporaneo *Temp,int size_S, int a[8][8]);
char trasformaCord( int cord1);

int gameover(const char Player1[],const char Player2[],int colore,int a[8][8]);

int scelta (int colore, int a[8][8], char Player1[], char Player2[]);
int salva_partita(char Player1[],char Player2[], int colore, int a[8][8]);
int salva_vincitori (char Player[]);

int mossa (int colore, int a[8][8]);
int casa_arrivo (int a[8][8], int cor1, int cor2);

int clear_input_buffer(void);

void damaPowerUp (int a[8][8]);

/* Funzioni di supporto */
void grow_Array( PercorsoTemporaneo **array,int size);
void grow_Array2 (struttura **myStruct, int size);
void matriscopy (void * destmat, void * srcmat);


#endif // DAMA_H_INCLUDED
