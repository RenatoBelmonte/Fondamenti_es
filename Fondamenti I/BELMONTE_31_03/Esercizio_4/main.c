#include <stdbool.h>

extern bool is_terna_pitagorica (unsigned int a, unsigned int b, unsigned int c);

int main(void)
{
    unsigned int a=3, b=4, c=5;
    bool var = is_terna_pitagorica(a,b,c);

    return 0;
}
