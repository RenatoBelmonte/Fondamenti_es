#if !defined IMAGE_H
#define IMAGE_H
#include <stdlib.h>
#include <stdio.h>

struct image {
    char name[255];
    size_t height, width;
};

extern struct image *read_images(const char *filenmae, size_t *n);

#endif //IMAGE_H
