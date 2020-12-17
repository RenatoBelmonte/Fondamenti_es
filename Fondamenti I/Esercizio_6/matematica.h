#if !defined MATEMATICA_H
#define MATEMATICA_H

    #define uint unsigned int
    #define QUADRATO(x) (x)*(x)
    #define CUBO(x) (x)*(x)*(x)
    #include <stdint.h>
    #include <stdlib.h>

double potenza(double b, double e);
double pi_greco(int k);
double sin(double x);
double cos(double x);
double tan(double x);
double e(void);
double fattoriale (double n);
void swap (int *a, int *b);
double esp(double x);
double sqrt(double a);

#endif //MATEMATICA_H
