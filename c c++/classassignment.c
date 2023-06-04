//max,min,average marks using loops
 #include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int max=-1;
    int min=102;
    int marks;
    float sum=0;
   
    for(int i=0;i<n;i++){
        scanf("%d",&marks);
        
        sum=sum+marks;
        if(marks>max){
            max=marks;
        }
        if (marks<min){
            min=marks;
        }
    }
    
    printf("the max is %d\n",min);
    printf("the min is %d\n",max);
    printf("averag %f",sum/n);
    return 0;
}

////using array
//int main(){
//    int n;
//    int arr[100];
//    printf("the number is ");
//    scanf("%d",&n);
//    int highest=arr[0];
//    int lowest=arr[0];
//    float sum=0;
//    for(int i=0;i<n;i++){
//        scanf("%d",&arr[i]);
//    }
//    
//    for(int i=0;i<n;i++){
//        
//        sum=sum+arr[i];
//        if(highest<arr[i]){
//            highest=arr[i];
//
//        }
//        if(lowest>arr[i]){
//            lowest=arr[i];
//        }
//    }
//    printf("highest is %d\n",highest);
//    printf("low is %d\n",lowest);
//    printf("avg is %f ",sum/n);
//    return 0;
//}