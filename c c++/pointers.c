// #include<stdio.h>
// int main(){
//     int age=22;
//     int *ptr=&age;
//     int ag1=*ptr;// value stored in ptr variable 
//     //printf("%d\n",ag1);
//     printf("%d",*ptr);
//     return 0;
// }
//address
//int main(){
//    int age=22;
//    int *ptr=&age;
//    printf("%u",&age);
//    return 0;
//}
//value 
/*int main(){
    int age=22;
    int *ptr=&age;
    printf("%d\n",*(&age));
    printf("%d",*ptr);
    return 0;
}*/

//int main(){
//    int i =5;
//    int *ptr=&i;
//    int **pptr=&ptr;
//    printf("%d",**pptr);
//    return 0;
//
//}
//swaping by me(call by value)
// void swap(a,b);
// int main(){
//     int a,b;
//     a=5;
//     b=3;
    
//     swap(a,b);
    
//     return 0;
// }
// void swap(a,b){
//     int c=a;
//     a=b;
//     b=c;
//     printf("%d %d\n",a,b);
// }

//  void work(int a,int b,int *sum,int*prod,int*avg);
//  int main(){
//      int a=3;
//      int b =5;
//      int sum,prod,avg;
//      work(a,b,&sum,&prod,&avg);
//      printf("%d %d %d",sum,prod,avg);
//      return 0;
//  }
//  void work(int a,int b,int*sum,int*prod,int*avg){
//     *sum=a+b;
//     *prod=a*b;
//     *avg=(a+b)/2;  
// }

//call by reference
// void swap(int*a,int*b);
// int main(){
//     int x=7;
//     int y=6;
//     printf("before %d %d\n",x,y);
//     swap(&x,&y);
//     printf("after %d %d",x,y);

//     return 0;
// }
// void swap(int*a,int*b){
//     int t=*a;
//     *a=*b;
//     *b=t;
// }

// int main(){
//     int c;
//     c=33;
//     int p=*c;

//     printf("%d",p);
// }

// int main(){
//     int i=8;
//     int *p=&i;
//     int **pq=&p;
//     printf("%d",&p);
// }

//function in pointer
// int sum(int*a,int*b);
// int main(){
//     int x,y;
//     scanf("%d %d",&x,&y);
//     sum(&x,&y);
//     printf("the summ is %d",sum(&x,&y));
//     return 0;
// }
// int sum(int*a,int*b){
//     return *a + *b;
// }


//array pointer
// int main(){
//     int a[3],*p;
//     for(int i=0;i<3;i++){
//         scanf("%d",&a[i]);
//     }
//     int sum=0;
//     p=&a[0];
//     for(int i=0;i<3;i++){
//         sum=sum+*(p+i);

//     }
//     printf("%d",sum);
// }

// int main()
// {
//     float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
//     float *ptr1 = &arr[0];
//     float *ptr2 = ptr1 + 3;
 
//     printf("%f ", *ptr2);
//     printf("%d", *ptr2 );
 
//    return 0;
// }

// int main()
// {
//  char *ptr = "GeeksQuiz";
//  printf("%c", *&*&*ptr);
//  return 0;
// }
// #include<math.h>
// #include<stdlib.h>
// int add(int*a,int*b);
// int sub(int*a,int*b);
// int main(){
//     int x,y;
//     scanf("%d%d",&x,&y);
//     //addsub(&x,&y);
//     printf("%d\n",add(&x,&y));
//     printf("%d",sub(&x,&y));
// }
// int add(int*a,int*b){
//     return *a+(*b);
    
    
// }
// int sub(int*a,int*b){

//     return abs(*a-(*b));
// }

#include<stdio.h>
// struct job{
//     int enhour;
//     int enmin;
//     int exhour;
//     int exmin;
// };
// int main(){
//     struct job b;
//     scanf("%d",&b.enhour);
//     scanf("%d",&b.enmin);
//     scanf("%d",&b.exhour);
//     scanf("%d",&b.exmin);
//     if((b.exhour-b.enhour)>=8){
//         if((b.exmin-b.enmin)>=30){
//             printf("Present (Full Day)");
//         }
//     }else{
//         printf("Absent (Half Day)");
//     }
// }

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    //int arr1[5],arr2[5];
    int arr1[5]={4,6,2,9,7};
    int arr2[5]={99,48,67,1,33};
    // for(int i=0;i<5;i++){
    //     arr[i]=arr1[i];

    // }
    // for(int i=0;i<5;i++){
    //     arr[i+5]=arr2[i];

    // }
    for(int i=0;i<n;i++){
        arr[i]=arr1[i];
    }
    for(int i=0;i<n;i++){
        arr[i+n]=arr2[i];
    }
    printf("they are:");
    for(int i=0;i<2*n;i++){
        printf("%d\t",arr[i]);
    }

}



