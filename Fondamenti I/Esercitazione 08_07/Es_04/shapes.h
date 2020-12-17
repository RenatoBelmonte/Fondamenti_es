#if !defined SHAPES_H
#define SHAPES_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

struct line{
    uint16_t x1, y1;
    uint16_t x2, y2;
    uint8_t thickness;
};

extern bool line_load(FILE *f, struct line *pln);

#endif //SHAPES_H
