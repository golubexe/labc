#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    
  char args[1000] = "";
  for (int i = 1; i < argc; i++) {
    strcat(args, argv[i]);
  }

  printf("%s\n", args);

  return 0;
}