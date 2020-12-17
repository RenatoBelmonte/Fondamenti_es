#include <string.h>
#include <stdlib.h>
#define PUNTO str[c] = '.'; ++c;
#define LINEA str[c] = '_'; ++c;
#define SPAZIO str[c] = ' '; ++c;

char *codifica_morse(const char *testo)
{
    if(testo == NULL)
        return NULL;

    size_t n = strlen(testo);
    char *str = malloc(4 * n * sizeof(char));
    int c = 0;
    for(int i = 0; testo[i] != 0; ++i)
    {
        if(testo[i] == 'E')
            {
                PUNTO;
                SPAZIO;
            }
        else if(testo[i] == 'A')
            {
                PUNTO;
                LINEA;
                SPAZIO;
            }
        else if(testo[i] == 'I')
            {
                PUNTO;
                PUNTO;
                SPAZIO;
            }
        else if(testo[i] == 'O')
            {
                LINEA;
                LINEA;
                LINEA;
                SPAZIO;
            }
        else if(testo[i] == 'N')
            {
                LINEA;
                PUNTO;
                SPAZIO;
            }
        else if(testo[i] == 'L')
            {
                PUNTO;
                LINEA;
                PUNTO;
                PUNTO;
                SPAZIO;
            }
        else if(testo[i] == 'R')
            {
                PUNTO;
                LINEA;
                PUNTO;
                SPAZIO;
            }
        else if(testo[i] == 'T')
            {
                LINEA;
                SPAZIO;
            }
        else if(testo[i] == 'S')
            {
                PUNTO;
                PUNTO;
                PUNTO;
                SPAZIO;
            }
        else if(testo[i] == 'C')
            {
                LINEA;
                PUNTO;
                LINEA;
                PUNTO;
                SPAZIO;
            }
        else if(testo[i] == 'D')
            {
                LINEA;
                PUNTO;
                PUNTO;
                SPAZIO;
            }
        else if(testo[i] == 'P')
            {
                PUNTO;
                LINEA;
                LINEA;
                PUNTO;
                SPAZIO;
            }
       else if(testo[i] == 'U')
            {
                PUNTO;
                PUNTO;
                LINEA;
                SPAZIO;
            }
        else if(testo[i] == 'M')
            {
                LINEA;
                LINEA;
                SPAZIO;
            }
        else if(testo[i] == 'V')
            {
                PUNTO;
                PUNTO;
                PUNTO;
                LINEA;
                SPAZIO;
            }
        else if(testo[i] == 'G')
            {
                LINEA;
                LINEA;
                PUNTO;
                SPAZIO;
            }
        else if(testo[i] == 'H')
            {
                PUNTO;
                PUNTO;
                PUNTO;
                PUNTO;
                SPAZIO;
            }
        else if(testo[i] == 'F')
            {
                PUNTO;
                PUNTO;
                LINEA;
                PUNTO;
                SPAZIO;
            }
        else if(testo[i] == 'B')
            {
                LINEA;
                PUNTO;
                PUNTO;
                PUNTO;
                SPAZIO;
            }
        else if(testo[i] == 'Q')
            {
                LINEA;
                LINEA;
                PUNTO;
                LINEA;
                SPAZIO;
            }
        else if(testo[i] == 'Z')
            {
                LINEA;
                LINEA;
                PUNTO;
                PUNTO;
                SPAZIO;
            }
        else if(testo[i] == 'J')
            {
                PUNTO;
                LINEA;
                LINEA;
                LINEA;
                SPAZIO;
            }
        else if(testo[i] == 'K')
             {
                 LINEA;
                 PUNTO;
                 LINEA;
                 SPAZIO;
             }
        else if(testo[i] == 'W')
            {
                PUNTO;
                LINEA;
                LINEA;
                SPAZIO;
            }
        else if(testo[i] == 'X')
            {
                LINEA;
                PUNTO;
                PUNTO;
                LINEA;
                SPAZIO;
            }
        else if(testo[i] == 'Y')
            {
                LINEA;
                PUNTO;
                LINEA;
                LINEA;
                SPAZIO;
            }
        else if(testo[i] == ' ')
            {
                str[c] = '/';
                ++c;
                SPAZIO;
            }
    str[c] = 0;
    }

    return str;
}
