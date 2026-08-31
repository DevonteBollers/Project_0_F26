#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char* rand_string(char* str, size_t size);

char* rand_string(char* str, size_t size){
    int random_int;
    
    for(int i = 0; i < size; i++){
        random_int = rand() % 26;
        *(str + i) =  random_int + 'a';
    }

    *(str + size) = '\0';

    return str;
}

