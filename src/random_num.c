#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));  // initialize RNG

    for (int i=0; i < 30; i++){
        printf("%d ", rand() % 100);
    }
    printf("\n");
    return 0;
}

