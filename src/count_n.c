#include "count_n.h"
#include <string.h>

int count_n(const char *str) {
  int count = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    if ((unsigned char)str[i] == 0xD0 && ((unsigned char)str[i + 1] == 0xBD || (unsigned char)str[i + 1] == 0x9D)) {
      i++;
      count++;
    }
  }
  return count;
}