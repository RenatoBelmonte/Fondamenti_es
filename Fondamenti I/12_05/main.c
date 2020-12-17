#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 266;
    char s[] = "prova";
    FILE *f;

    f = fopen("out1", "w");    // 3 caratteri (3 byte) +
    fprintf(f, "%i\n%s", x, s); //1 stringa (5 char) +
    fclose(f);                  //a capo (2 char) = 10 byte

    f = fopen("out2", "wb");    //3 caratteri (3 byte) +
    fprintf(f, "%i\n%s", x, s); //1 carattere \n (1 byte) +
    fclose(f);                  //1 stringa (5 charchar) = 9 byte

    f = fopen("out3", "w");    //1 int (4 byte)
    fwrite(&x, sizeof x, 1, f);//1 stringa (6 char) = 10 byte
    fwrite(&s, sizeof s, 1, f);// !!! ERRORE = 11 byte
    fclose(f);

    f = fopen("out4", "wb");    //1 int (4 byte)
    fwrite(&x, sizeof x, 1, f); //1 stringa (6 char) = 10 byt
    fwrite(&s, sizeof s, 1, f);
    fclose(f);

    return 0;
}
