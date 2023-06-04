#include<stdio.h>
//sum of 1st n natural nos
/*int sum1(n);
int main(){
    int n;
    scanf("%d",&n);
    
    sum1(n);
    printf("the sum is %d",sum1(n));
    return 0;
}
int sum1(n){
    
    if(n==0){
        return 0;
    }
    
    return sum1(n-1)+n;
  
}*/
/*int fac(n);
int main(){
    int n;
    scanf("%d",&n);
    
    fac(n);
    printf("the sum is %d",fac(n));
    return 0;
}
int fac(n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return fac(n-1)*n;
    }
}*/

//int main(){
//   int a;
//   
//
//    scanf("%d",&a);
//    float b=a*(9.0/5.0)+32;//.0 is used to multiply with floating value ...in python // was there 
//    printf("%f",b);
//    return 0;
//}
// fibonacci series 
int fib(n);
int main(){
    int n;
    scanf("%d",&n);
    
    fib(n);
    printf("the fib is %d",fib(n));
    return 0;
}
int fib(n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    else{
        return fib(n-2)+fib(n-1);
    }
}