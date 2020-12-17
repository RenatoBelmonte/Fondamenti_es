#include "shapes.h"
bool rect_load(FILE *f, struct rect *r)
{
    int ris = 0;
    ris = fread(&r->x, sizeof(int16_t), 1, f);
        if(ris == 0)
          {
              return 0;
          }
    ris = fread(&r->y, sizeof(int16_t), 1, f);
        if(ris == 0)
          {
              return 0;
          }
    ris = fread(&r->width, sizeof(uint16_t), 1, f);
        if(ris == 0)
          {
              return 0;
          }
    ris = fread(&r->height, sizeof(uint16_t), 1, f);
        if(ris == 0)
          {
              return 0;
          }
    ris = fread(&r->symbol, sizeof(char), 1, f);
        if(ris == 0)
          {
              return 0;
          }

return 1;
}
