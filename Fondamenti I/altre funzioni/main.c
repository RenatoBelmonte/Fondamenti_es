#include <stdio.h>
#include <stdlib.h> //contiene tanto
#include <assert.h>
#include <math.h>
#include <float.h> //tante informazioni su float, double etc rispetto al processore
#include <limits.h> //stessa cosa per gli interi
#include <time.h>
#include <errno.h> //gestione errori

int main()
{
    int x = 5;
    assert (x >= 0); // se non è vero il programma si interrompe
    double r = sqrt(x);

    char c = NULL;
    atof(c); //da stringa a numero (come fscanf) ascii to float vecchio
    strtod(c, NULL); //nuove più controlli stringa to double; per controllare gli errori

    char str[100] = "3.415xx";
    char *p;
    double d = strtod(str, &p); // converte da testo a double il puntatore punta alla prima posizione che non è riuscito a convertire

    srand((unsigned int) time (NULL)); //time = tempo in secondi
    int s = 0;
    for (int i = 0; i < 1000000; ++i)
        {
            int x = rand() % 11 -5;
            //printf("%d, ", x);
            s += x;
         }

    printf("\n\n%d\n", s);


    exit(0); //uscita con ritorno del valore definito dal parametro

    div_t res = div(9,4); //struct con quoziente e resto
    int a = abs(-45); //fabs per la virgola

    //arrotondamenti : ceil intero superiore; floor intero inferiore; round

    //NAN e INFINITY macro per infinito e not a number;con isinf e isnan


    errno = 0; //impostare a 0 e controlare se varia

    return 0;
}
