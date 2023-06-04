#include<stdio.h>
#include<string.h>
//struct student{
//    int roll;
//    float cgpa;
//    char name[100];
//};

/*int main(){
    struct student s1;
    s1.roll=6573;
    s1.cgpa=6.87;
    strcpy(s1.name,"JACXK");
    printf("student name is %s ,roll no and cgpa are ,%d,%f",s1.name,s1.roll,s1.cgpa);
    return 0;
}*/

//int main(){
//    struct student cse[100];
//    cse[0].roll=9876;
//    cse[0].cgpa=9.7;
//    strcpy(cse[0].name,"jack");
//    printf("%s %d %f",cse[0].name,cse[0].roll,cse[0].cgpa);
//    return 0;
//}

/*int main(){
    struct student s1={1654,9.00,"kiwi"};
    printf("%s",s1.name);
    return 0;
}*/
//complex no
//struct complex{
//    int real;
//    int img;
//};
//
//int main(){
//    struct complex number1={6,8};
//    printf("real part %d\n",number1.real);
//    printf("img is %d",number1.img);
//    return 0;
//}
//

// struct bank{
//     int acc;
//     char name[100];
// };
// int main(){
//     struct bank acc1;
//     acc1.acc=987;
//     strcpy(acc1.name,"anurag");
//     printf("acc no is %d and name is %s",acc1.acc,acc1.name);

//     return 0;

// }
// #include<stdlib.h>
// #include<stdio.h>
// #include<string.h>
// struct bank
// {
//     char name[50];
//     int mob;
//     int ex;
//     int lan;
//     //char *ln;
//     char lan2[10][10];
// };
// int main()
// {
//     int n;
//     //int n;
//     printf("Enter it: ");
//     scanf("%d",&n);
//     struct bank b[n];
//     for(int i=0;i<n;i++){
//         scanf("%s",b[i].name);
//         scanf("%d",&b[i].mob);
//         scanf("%d",&b[i].ex);
//         scanf("%d",&b[i].lan);
//         //b[i].ln = (char*)calloc(b[i].lan,sizeof(char));
//         for(int j=0;j<b[i].lan;j++){
//             scanf("%s",b[i].lan2[j]);
//         }
        

//     }
//     int d;
//     char l[10];
//     scanf("%d",&d);
//     scanf("%s",l);
        
//     // for(int k=0;k<n;k++){
//     //     printf("%s\n",b[k].name);
//     //     for (int l = 0; l < b[k].lan; l++)
//     //     {
//     //         printf("%s %d\n",b[k].lan2[l],l);
//     //     }
        
//     // }
//     for(int i=0;i<n;i++){
//         if(b[i].ex==d){
//             for(int j=0;j<b[i].lan;j++){
//                 if(strcmp(b[i].lan2[j],l)==0){
//                     printf("%s - %d\n",b[i].name,b[i].mob);
//                 }
//             }
//         }
//         else{
//             printf("nope");
//         }
//     }

// }

//triangle from hackerrank
#include<math.h>

/*struct triangle{
    int a;
    int b;
    int c;

};
int main(){
    int n;
    scanf("%d",&n);
    struct triangle t[n];
    int s[n],s1[n];
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&t[i].a,&t[i].b,&t[i].c);
        int p=(t[i].a+t[i].b+t[i].c)/2;
        s[i]=p*(p-t[i].a)*(p-t[i].b)*(p-t[i].c);
        s1[i]=sqrt(s[i]);
    }
    //int t;
    for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
            if(s1[i]>s1[j]){
                int k=t[i].a;
                int l=t[i].b;
                int m=t[i].c;
                t[i].a=t[j].a;
                t[i].b=t[j].b;
                t[i].c=t[j].c;
                t[j].a=k;
                t[j].b=l;
                t[j].c=m;
            }
        }
    }

    for(int i=0;i<n;i++){
		printf("%d %d %d\t",t[i].a,t[i].b,t[i].c);
	}
}*/


struct time{
    unsigned int hour;
    unsigned int min;
    unsigned int sec;
};
void time1(struct time t1,struct time t2);
int main(){
    struct time t1,t2;
    printf("time for 1 is: ");
    scanf("%d %d %d",&t1.hour,&t1.min,&t1.sec);
    printf("time for 2 is: ");
    scanf("%d %d %d",&t2.hour,&t2.min,&t2.sec);
    time1(t1,t2);
}
void time1(struct time t1,struct time t2){
    int h,m,s;
    h=t1.hour+t2.hour;
    m=t1.min+t2.min;
    s=t1.sec+t2.sec;
    if(s>60){
        m=m+(s/60);
        s=s-60;
    }
    if(m>60){
        h=h+(m/60);
        m=m-60;
    }
    printf("the hour min and sec is %d %d %d",h,m,s);

}
