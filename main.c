#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("How many numbers do you want give :");
    int x,input,*ptr;
    scanf("%d",&x);
    ptr = malloc(x * sizeof(int));
    FILE * fpeven; FILE * fpodd;
    fpeven = fopen("even.txt","w"); fpodd = fopen("odd.txt","w");

    for(int i = 0;i < x;i++){
        printf("Give a number :");
        scanf("%d",&input);
        ptr[i] = input;
        if(input % 2 == 0) fprintf(fpeven,"%d\n",input);
        else fprintf(fpodd,"%d\n",input);
    }
    fclose(fpeven);
    fclose(fpodd);
}