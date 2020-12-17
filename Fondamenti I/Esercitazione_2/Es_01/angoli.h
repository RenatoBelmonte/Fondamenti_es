#if !defined ANGOLI_H
#define ANGOLI_H
#include <stdlib.h>
#include <stdint.h>

    struct angolo {
        uint16_t gradi;
        uint16_t primi;
        uint16_t secondi;
        };

    extern struct angolo somma_angoli(struct angolo a, struct angolo b);

#endif //ANGOLI_H
