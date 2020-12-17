#ifndef PRODOTTO_COMPLESSO_H
#define PRODOTTO_COMPLESSO_H

struct complesso
{
    double re,im;
};

extern struct complesso prodotto_complesso( struct complesso comp1, struct complesso comp2);

#endif // PRODOTTO_COMPLESSO_H
