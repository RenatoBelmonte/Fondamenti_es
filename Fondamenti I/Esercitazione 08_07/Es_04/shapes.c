#include "shapes.h"
bool line_load(FILE *f, struct line *pln)
{
    bool ris = 0;
    ris = fread(&pln->x1, sizeof(uint16_t), 1, f);
        if(ris == 0)
            return 0;
    ris = fread(&pln->y1, sizeof(uint16_t), 1, f);
        if(ris == 0)
            return 0;

    ris = fread(&pln->x2, sizeof(uint16_t), 1, f);
        if(ris == 0)
            return 0;
    ris = fread(&pln->y2, sizeof(uint16_t), 1, f);
        if(ris == 0)
            return 0;

    ris = fread(&pln->thickness, sizeof(uint8_t), 1, f);
        if(ris == 0)
            return 0;

    return 1;
}
