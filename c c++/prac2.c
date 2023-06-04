#include<stdio.h>
#include<string.h>
// int main(){
//     char dat='02/05/2023';
//     char date[100];
//     scanf("%s",date);
//     //printf("%d",date[1]);
//     int s=0;
//     int i=0;
//     // int c=date[0];
//     // printf("%d",c);
//     int d=date[0]-48;
//     int c=date[1]-48;
    
//     int e=d*10+c;
//     int f=e-2;
//     //printf("%d",e);
//     //int c=s-2;
//     if(f%7==0){
//         printf("tues\n");
//     }
//     else if(f%7==1){
//         printf("wed\n");
//     }else{
//         printf("bhak\n");
//     }

// }


//reverse a number using pointer
// int rev(int*a);
// int main(){
//     int a;
//     printf("the no is");
//     scanf("%d",&a);
//     rev(&a);
//     printf("%d",a);

// }
// int rev(int*a){
//     int s=0;
//     while(*a>0){
//         s=s*10+(*a%10);
//         *a=*a/10;
        
//     }
//     *a=s;
//     return s;

    

// }


#include <stdio.h>
#include <string.h>

// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     scanf("%s", str);

//     int freq[26] = {0};  // initialize to 0

//     int len = strlen(str);
//     for (int i = 0; i < len; i++) {
//         freq[str[i] - 'a']++;  // increment the frequency of the character
//     }

//     for (int i = 0; i < 26; i++) {
//         if (freq[i] != 0) {
//             printf("%c: %d\n", i + 'a', freq[i]);  // print the character and its frequency
//         }
//     }

//     return 0;
// }

/*struct student{
    char name[50];
    int roll;
    char dob[50];
    int marks[50];
};
int main(){
    int n;
    
    printf("the no is:");
    scanf("%d",&n);
    struct student s1[n];
    struct student s2[n];
    printf("input for 1: ");
    for(int i=0;i<n;i++){
        //scanf("%s",s1[i].name);
        //scanf("%d",&s1[i].roll);
        //scanf("%s",s1[i].dob);
        scanf("%d",&s1[i].marks);

    }
    printf("input for 2nd: ");
    for(int j=0;j<n;j++){
        //scanf("%s",s2[j].name);
        //scanf("%d",&s2[j].roll);
        //scanf("%s",s2[j].dob);
        scanf("%d",&s2[j].marks);

    }
    printf("for 1 is:");
    for(int i=0;i<n;i++){
        printf("%d\t",s1[i].marks);
        
    }
    printf("for 2 is:");
    for(int j=0;j<n;j++){
        printf("%d\t",s2[j].marks);
        
    }
    /*int arr[2*n];
    for(int i=0;i<n;i++){
        arr[i]=s1[i].marks;
    }
    for(int i=0;i<n;i++){
        arr[i+5]=s2[i].marks;
    }
    for(int i=0;i<2*n;i++){
        for(int j=i+1;j<2*n;j++){
            int k=arr[i];
            arr[i]=arr[j];
            arr[j]=k;
        }
    }
    printf("sorted is:");
    for(int i=0;i<2*n;i++){
        printf("%d\t",&arr[i]);
    }
    printf("\n");
    printf("highest is %d\n",arr[0]);
    printf("lowest is  %d\n",arr[2*n-1]);
    int c=0;
    int p;
    int same[p];
    for(int i=0;i<2*n;i++){
        for(int j=i+1;j<2*n;j++){
            if(arr[i]==arr[j]){
                same[c]=arr[i];
            }

        }
        c++;
    }
    printf("same are:");
    for(int i=0;i<c;i++){
        printf("%d",same[i]);
    }*/



    


    




