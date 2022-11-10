#include<stdio.h>
#include<string.h>

int main(){

    //declare pointer for file
    FILE *fileptr;
    int c;

    fileptr = fopen("textfile.txt", "r");

    if(fileptr == NULL){
        printf("error in opening file");
        return(-1);
    }

    while(1){
        c = fgetc(fileptr);

        if(feof(fileptr))
            break;

        printf("%c", c);
    }
    fclose(fileptr);

    return 0;
}