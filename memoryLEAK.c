#include<stdio.h>

#include<stdlib.h>

int main(){

    int ch = 1;

    int *ptr ;

    while(ch < 50){
        
        printf("Momery Leak demo \n");

        ptr = (int*)malloc(40000 * sizeof(int));

        printf("continue ?? press 1 for continue");

        scanf("%d", &ch);
    }

    return 0 ;
    
}