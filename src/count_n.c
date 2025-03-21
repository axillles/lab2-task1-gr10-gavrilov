#include "count_n.h"
#include <string.h>

int count_n(const char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'н' || str[i] == 'Н') {
            count++;
        }
    }
    return count;
}