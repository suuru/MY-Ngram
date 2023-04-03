#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char input[100001] = ""; 

    int i;

    for(i = 1; i < argc; i++){
        strcat(input, argv[i]);
    }


    int counts[256] = {0};
    int len = strlen(input);

    for(i = 0; i < len; i++){
        counts[(int)input[i]]++;
    }

    
    for(i = 0; i < 256; i++){
        if(counts[i] > 0){
            printf("%c:%d\n", (char)i, counts[i]);
        }
    }

    return 0;

}