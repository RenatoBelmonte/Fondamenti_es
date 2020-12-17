#include "image.h"

int main(void)
{
    const char *file = "C:\\Users\\renat\\Desktop\\vuoto.txt";
    size_t n = 0;

    struct image *res = read_images(file, &n);

    return 0;
}
