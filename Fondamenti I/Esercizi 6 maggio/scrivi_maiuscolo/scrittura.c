#include "scrittura.h"

extern int scrivimaiuscolo (const char *filename) //fare con fgetc
{

    FILE *f = fopen(filename, "r");
        if (f == NULL)
            return 0;

    fseek(f, 0, SEEK_END);
    const long size = ftell(f);
    rewind(f);

    char *str = malloc(size* sizeof(char));
    int ret = fscanf(f, "%[]", str);
        if (ret == 0 || ret == -1)
            return 0;

    printf("%s\n\ndiventa:\n\n",str);

    for (int i = 0; str[i] != 0; ++i)
    {
        if (islower(str[i]))
            str[i] = toupper(str[i]);
    }

    printf("%s\n\n",str);

    fclose(f);
    return 1;
}
