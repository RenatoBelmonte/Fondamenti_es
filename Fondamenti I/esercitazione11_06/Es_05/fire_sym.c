#include "fire_sym.h"
void propagate_fire(const struct forest *f)
{
    if(f == NULL)
        return NULL;

    size_t rows = f->rows;
    size_t cols = f->cols;
    double *d = malloc(rows*cols*sizeof(char));
    int i = 0;

    for(int r = 0; r < rows; ++r)
    {
        for(int c = 0; c < cols; ++c)
        {
            if(f->data[r*cols+c-1] == 'F' || f->data[r*(cols-1)+c] == 'F')
                d[i] = 'F';

            else if(c != cols-1 && f->data[r*cols+c+1] == 'F')
                d[i] = 'F';

            else if(r != rows-1 && f->data[r*(cols+1)+c] == 'F')
                d[i] = 'F';

            else
                d[i] = f->data[r*cols+c];

            ++i;
        }
    }

    for(int c = 0; c < rows*cols; ++c)
        {
             f->data[c] =d[c];
        }

}
