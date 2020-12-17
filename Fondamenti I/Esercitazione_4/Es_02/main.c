#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

extern bool inverti_case(const char *nomefilein, const char *nomefileout);
int main(void)
{
    char *in = "in3";
    char *out = "prova";

    bool res = inverti_case(in, out);

    return 0;
}
