#include<stdio.h>
// to print good and goodbye
//declaration or prototype
/*void printHello();
void printgoodbye();

int main() {   //function call
    printHello();
    printHello();
    printgoodbye();
    return 0;
}
 // function defintion 
void printHello(){
    printf("good\n");
    
}
void printgoodbye(){
    printf("goodbye");

}*/

//to print namaste if indian else bonjour for french
/*void namaste();
void bonjour();

int main(){
   
    char c1;
    printf("enter ");
    scanf("%c",&c1);
    if (c1=='i'){
        namaste();
    }
    else{
        bonjour();
    }
    return 0;
}

void namaste(){
    printf("nams");

}
void bonjour(){
    printf("bon");

}*/

void printTable( n);

int main(){
    int n;
    printf("the num is ");
    scanf("%d",&n);
    printTable(n);
    return 0;
}
void printTable( n){
    int i;
    for( i=1; i<11; i++) {
        printf("%d\n",i*n);
    }
}
