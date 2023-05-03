#include <stdio.h>

struct rgb {
  unsigned char r;
  unsigned char g;
  unsigned char b;
};

struct image {
  unsigned int width;
  unsigned int height;
  struct rgb *pixels;
};

int main(int argc, char *argv[]){
  struct image img; 
  FILE *f = fopen(argv[1], "r");
  if (f == NULL){
    printf("f null");
    f = stdin;
  }
  char type[3];
  fgets(type, 3, f); 
  fscanf(f, "%u %u", &img.width, &img.height);
  printf("%s", type);
  printf("%u %u", img.width, img.height);
  return 0;
}
