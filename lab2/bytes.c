#include <stdio.h>
#include <ctype.h>

int main(){
  int c = getchar();
  for (int i = 0; ; i++){
    if (c == EOF){
      break;
    }
    if (isprint(c)){ 
      printf("%d\t'%c'\t%02X\t%d", i, c, c, c);
    } else {
      printf("%d\t%s\t%02X\t%d", i, "[10]", c, c);
    }
    putchar('\n');
    c = getchar();
  }
  return 0;
}
