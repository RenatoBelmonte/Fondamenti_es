double esegui_operazione (char op, double n1, double n2)
{
    if (op == '+')
    return n1 + n2;

    if (op == '-')
    return n1 - n2 ;

    if (op == '*')
    return n1 * n2;

    if (op == '/')
    return n1 / n2;

    return 0;
}

#include <stdlib.h>

int main()
{
    double x;

    x = esegui_operazione('+', 31.4, 6.8);

    x = esegui_operazione('/', 24.8, 3.0);


    union esempio_u{
            char c;
            short s;
            int i;
        };
    struct esempio_s{
           char c;
           short s;
           int i;
        };

        struct esempio_s s= {0x55,0x5555,0x55555555};

    size_t v = sizeof (union esempio_u);
    size_t y = sizeof (s);

    return 0;
}
