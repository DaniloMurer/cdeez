#include "lib/reader.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *file = open_file("test/Jenkinsfile");
  char *file_content = get_file_content(file);
  printf("%s\n", file_content);

  free(file_content);
  fclose(file);
  return 0;
}
