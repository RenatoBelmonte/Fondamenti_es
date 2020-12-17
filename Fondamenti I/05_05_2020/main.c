#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *f = fopen("numero","rb");
        if  (f == NULL)
        return -1;

    {/*int b0 = fgetc(f);
    int b1 = fgetc(f);
    int b2 = fgetc(f);
    int b3 = fgetc(f);

    int i = b0 + b1*256 + b2*256*256 + b3*256*256*256;*/
    /*unsigned char b[4];

    b[0] = fgetc(f);
    b[1] = fgetc(f);
    b[2] = fgetc(f);
    b[3] = fgetc(f);

    int *p = *(int*) b;*/}

    float b; //0100 0001 0100 0100 00..00 --> 41 44 00 00
    int res, e=0;
    res = fread(&b,sizeof(float),1,f);
    res = fread(&b,sizeof(float),res,f);
    e = feof(f);

    fclose(f);
    return 0;
}
