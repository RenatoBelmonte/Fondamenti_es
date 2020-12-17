#include "angoli.h"

extern struct angolo somma_angoli(struct angolo a, struct angolo b)
{
    struct angolo res = {0, 0, 0};;

    res.secondi = a.secondi + b.secondi;
        while (res.secondi >= 60)
        {
            res.secondi -= 60;
            ++res.primi;
        }

    res.primi += a.primi + b.primi;
        while(res.primi >= 60)
        {
            res.primi -= 60;
            ++res.gradi;
        }

    res.gradi += a.gradi + b.gradi;

    return res;
}
