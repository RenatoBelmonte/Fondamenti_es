#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int felice(unsigned int num)
{
    FILE *f = fopen("tmp", "w+");
    unsigned int *str = calloc(10, sizeof(int));
    unsigned int *cron = malloc(sizeof(int));
    str[0] = num * num;
    int i = 0;

    for (size_t n = 0; str [0] != 1; ++n)
    {
        fprintf(f, "%i", str[0]);
        rewind(f);

        while (str[i-1] != 0)
        {
            str[i] = fgetc(f);
            str[i] = atoi((char*)&str[i]);
            str[i] *= str[i];
            ++i;
        }

        for (i; i > 0; --i)
        {
            str[0] += str[i];
            str[i] = 0;
        }
        rewind(f);
        fwrite(str, sizeof(int), 10, f);
        rewind(f);

        cron = realloc(cron, (n+1) * sizeof(int));
        int ser = (int)str[0];
        char *stop = memchr((char*)cron, ser, n);
        cron[n] = str[0];

        if (stop != NULL)
        {
            fclose(f);
            free(cron);
            free(str);
            return 0;
        }
    }

    fclose(f);
    free(cron);
    free(str);
    return 1;
}


/*ciclo :     fprintf(f, "%i", str[0]);
    rewind(f);
    str[0] = fgetc(f);
    str[1] = fgetc(f);
    rewind(f);
    str[0] = atoi(&str[0]);
    str[1] = atoi(&str[1]);
    str[0] *= str[0];
    str[1] *= str[1];
    str[0] += str[1];
    if (str[0] == 1)
        return 1;*/
