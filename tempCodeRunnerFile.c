#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    printf("Random no between 0 to 100 is %d\n",rand()%100);
    
    
    
     return 0;
}
