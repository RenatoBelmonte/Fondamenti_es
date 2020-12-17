#include "rle.h"

int main(void)
{
    const char *in = "file3.rle";
    const char *out = "prova";

    bool res = easy_rle_decode(in, out);
    return 0;
}
