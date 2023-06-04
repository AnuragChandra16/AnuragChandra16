#include<stdio.h>
//read a file
//int main(){
//    FILE *fptr;
//    fptr=fopen("test.txt","r");
//    char ch;
//    fscanf(fptr,"%c",&ch);
//    printf("character is %c",ch);
//    fclose(fptr);
//    return 0;
//}
int main(){
    FILE *fptr;
    fptr=fopen("test.txt","w");
    //char ch;
    //fscanf(fptr,"%c",&ch);
    fprintf(fptr,"%c","r");
    fclose(fptr);
    return 0;
}   