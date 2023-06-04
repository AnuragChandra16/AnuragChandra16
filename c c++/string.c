#include<stdio.h>  

/*int main() {
    char name[]="anurag";
    printf("%s",name);
    return 0;
}*/

//to print name in a loop
/*void stringname(char arr[]);

int main(){
    char firstname[]="anurag";
    char lastname[]="chandra";
    stringname(firstname);
    stringname(lastname);
    return 0;

}

void stringname(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);

    }
    printf("\n");
}*/ 
//lenght of a string
/*int stringname(char arr[]);

int main(){
    char firstname[]="anurag";
    stringname(firstname);
    printf("lenght is: %d",stringname(firstname));
    return 0;
}
int stringname(char arr[]){
    int cou=0;
    for(int i=0;arr[i]!='\0';i++){
        cou++;
    }
    return cou;
}*/
#include<string.h>
//int main(){
//    char name[]="anurag";
//    printf("%d",strlen(name));
//    return 0;
//
//
//}

//int main(){
//    char f[]="ban";
//    char sec[]="app";
//    printf("%d",strcmp(f,sec));
//    return 0;
//
//}
//to write a stringe from old string index is n to m
/*void slice(char str1[],int n,int m);
int main(){
    char str1[100];
    fgets(str1,100,stdin);
    int n,m;
    scanf("%d %d",&n,&m);
    slice(str1,n,m);
    
    return 0;


}
void slice(char str1[],int n, int m){
    char newstr2[100];
    int j=0;
    for(int i=n;i<=m,i++;j++){
        newstr2[j]=str1[i];
    }
    newstr2[j]='\0';
    puts(newstr2);

}*/

//no of vowels
// int main(){
//     char UP[100];
//     fgets(UP,100,stdin);
//     int count=0;
//     for(int i=0;UP[i]!='\0';i++){
//         if(UP[i]=='a' || UP[i]=='e' || UP[i]=='i' || UP[i]=='o' || UP[i]=='u'){
//             count++;
//         }
       
//     }
//     printf("%d",count); 
    
// }

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[100];
    scanf("%[^\n]s",s);
    for(int i=0;i<strlen(s);i++){
        if(s[i]==' '){
            for(int j=0;j<i;j++){
                printf("%c",s[j]);
            }
            printf("\n");
        }else{
            continue;
        }
    }
    
    return 0;
}

