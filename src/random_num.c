#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand(time(NULL));
  int i = 30;
  while(i--) printf("%d ",rand()%100);
  printf("\n");
  return 0;
}
