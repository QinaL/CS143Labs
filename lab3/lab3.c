#include <stdio.h>
#include <stdlib.h>
#include "lab3.h"

// in this file, write implementations of the functions whose headers appear in lab3.h

// important: don't write a main function
// this is a module meant to be imported


unsigned int len(char *string){
  int len = 0;
  for (int i = 0; ; i++){
    if (string[i] == '\0'){
      break;
    } else {
      len++;
    }
  }
  return len;
}

char *repeat_char(char c, unsigned int n){
  char *repeat = (char*)malloc(sizeof(char)*(n+1));
  for (int i = 0; i < n; i++){
    repeat[i] = c;
  }
  repeat[n] = '\0';
  return repeat;
}

unsigned int count_char(char c, char *string){
  int count = 0;
  for (int i = 0; ; i++){
    if (string[i] == '\0'){
      break;
    }
    if (string[i] == c){
      count++;
    }
  }
  return count;
}

unsigned int *locations_of(char c, char *string, unsigned int *n){
  *n = count_char(c, string);

  if (*n == 0){
    return NULL;
  }

  unsigned int *locations = malloc(*n*sizeof(unsigned int));
  int cur = 0;
  for (int i = 0; cur <= *n; i++){
    if (string[i] == c){
      locations[cur] = i;
      cur++;
    }
  }
  return locations;
}

/*
int main(){
  printf("%u", len("ABCD"));
  printf("%s", repeat_char('w', 4));
  printf("%u", count_char('b', "acbbc"));
  unsigned int len = 0;
  unsigned int *n = &len;
  printf("%p, %u", n, *n);
  unsigned int *loc =locations_of('a', "abxdx", n); 
  printf("%u", *n); 
  return 0;
}
*/
