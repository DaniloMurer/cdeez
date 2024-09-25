#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *open_file(char *file_path) { return fopen(file_path, "r"); }

char *get_file_content(FILE *file) {

  // get size of file, so we now how much memory we need to allocate
  fseek(file, 0, SEEK_END);
  size_t size = ftell(file);
  fseek(file, 0, SEEK_SET);

  char *content = malloc(size);
  while (!feof(file)) {
    char *temp = malloc(256);
    fgets(temp, sizeof(temp), file);
    strncat(content, temp, sizeof(temp));
    free(temp);
  }
  return content;
}
