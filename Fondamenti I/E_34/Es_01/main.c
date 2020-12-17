#include <stdbool.h>
#include <stdlib.h>

extern bool is_date(const char *s);
int main()
{
    char *str = "12/12/2012";

    bool res = is_date(str);
    return 0;
}
