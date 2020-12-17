#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char s[40] = "Hello world!\n Renato";
    size_t lun = strlen(s);

    char s1[] = "Renato";

    bool r1 = strcmp(s, s1); //0 uguali;
                             //<0 s viene prima
                             //>0 s1 viene prima
    size_t count;
    bool r = strncmp(s, s1, count); //quanti Byte confrontare

    char *c = NULL;
    c = strchr(s, "c"); //restituisce il puntatore alla prima posizione in cui trova il carattere
    c = strrchr(s, "c"); //la stessa cosa ma da destra, ad esempio per cercare il terminatore
    c = strstr(s, s1); //cerca una parola in una stringa e retituisce un puntatore alla posizione

    //Bisogna allocare prima la memoria, ma mettono il terminatore
    strcpy(s, s1); //ritorna la destinazione
    strcat(s, s1); //aggiunge una stringa dopo un altra
    //posso limitare il numero di caratteri aggiungengo n dopo str
    //se strncpy raggiunge il count non mette il terminatore

    return 0;
}
