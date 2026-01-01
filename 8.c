#include <stdio.h>
//#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int my_strlen(char str[]){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}

int main(void) {
    //code
    //allow watching in debuging
    setbuf(stdout, NULL);
    char str[]={"naor balas"};
    printf("%d\n",my_strlen(str));
    return 0;
}