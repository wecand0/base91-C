#include <stdio.h>
#include <string.h>
#include <malloc.h>

#include "src/base91.h"

int main() {
   const char *data = "hello world";

    uint8_t *encoded = (uint8_t *) calloc(strlen(data) * 2, 1);
    uint8_t *decoded = (uint8_t *) calloc(strlen(data) * 2, 1);
    size_t out_size = 0;
    base91_encode((uint8_t *)data, strlen(data), encoded, &out_size);

    printf("Encoded text: %s" "   \t,size: ""%zu\n", encoded, out_size);


    base91_decode(encoded, out_size, decoded, &out_size);

    printf("Decoded text: %s" "   \t,size: ""%zu\n", decoded, out_size);

    free(encoded);
    free(decoded);
}