#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int w = atoi(argv[1]);
  int h = atoi(argv[2]);
  int r = atoi(argv[3]);
  int g = atoi(argv[4]);
  int b = atoi(argv[5]);
  printf("P3\n%d %d\n255\n", w, h);
  for (int i = 0; i < w*h; i++){
    printf("%d %d %d\n", r, b, g);
  }
  return 0;
}
