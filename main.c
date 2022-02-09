#include <stdio.h>

int main(void) {
  int tab[5];
  int i;
  for(i=0;i<5;i++){
    printf("Element %d: ", i);
    scanf("%d",&tab[i]);
  }
  return 0;
}