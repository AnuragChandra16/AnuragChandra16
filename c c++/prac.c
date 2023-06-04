/*#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	for(int i=0;i<a;i++){
        int b;
	    scanf("%d",&b);
	    if(b>30){
        
	      printf("YES");
    
	     }else{
	       return 0;
	     }
	    }
	return 0;
}*/
#include <stdio.h>

/*{
	// your code goes here
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	    int a;
	    scanf("%d",&a);
	    if(a>66 && a<45001){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}*/

/*int main(void) {
	char A;
	printf("enter the word ");
	scanf("%c",&A);
	if(A>65 && A<90){
		printf("yed");
	}else{
		printf("no");
	}
	return 0;
}*/
//
//#include <stdio.h>
//
//int main(void) {
//	// your code goes here
//	int t;
//	scanf("%d",&t);
//	for(int i=0;i<t;i++){
//	    int m,n;
//	    scanf("%d %d",&m,&n);
//	    if(m>n){
//	        printf(n);
//	    }
//	    else if(n>m){
//	        printf(m);
//	    }
//	    else{
//	        printf(m);
//	    }
//	}
//	return 0;
//}
//int main(){
//	int n;
//	int sum=0;
//	int fd;
//	n=987;
//	while(n>0){
//		n=n/10;
//		printf("%d\n",n);
//		
//	}
//	
//	
//	
//	return 0;
//}
//armstrong no
/*int main(){
	int a;
	scanf("%d",&a);
	
	int d=0;
	while(a>0){
		int c=a%10;
		d+=c*c*c;
		a/=10;

	}
	if(d==a){
		printf("yes");
	}else{
		printf("no");
	}
	return 0;
}*/
//how to make an array
/*int main(){
	int n;
	
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//for(int j=0;j<n;j++){
		//printf("%d\t",a[j]);
	//}
	for(int j=0;j<n-1;j++){
		int t=0;
		for(int k=j+1;k<n;k++){
			if(a[j]<a[k]){
				t=1;
				break;
			}
			

		}
		if(t==0){
			printf("%d\t",a[j]);
			
		}
	}
	printf("%d",a[n-1]);
	return 0;
}*/

/*int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    for(int j=0;j<n;j++){
	        scanf("%d",&a[j]);
	    }
	    for(int k=0;k<n;k++){
			printf("%d-%d\n",k,a[k]);
		}
	}
	return 0;
}*/

//int main(){
//	int n;
//	scanf("%d",&n);
//	//int k=1;                 //1
//								//2  2
//								//3 3 3 
//	for(int i=0;i<n;i++){
//		for(int j=n-1-i;j<n;j++){
//			printf("%d",j);
//			
//		}
//		printf("\n");
//		//k=k+1;
//	}
//	return 0;
//
//
//
//
//0
//0..01...012.......0123...012...01..0
// int main(){
// 	int n;
// 	scanf("%d",&n);
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<i+1;j++){
// 			printf("%d",j);
// 		}
// 		printf("\n");
// 	}
	
	


// 	for(int k=n-1;k>0;k--){
// 		for(int l=0;l<k;l++){
// 			printf("%d",l);
// 		}
// 		printf("\n");
// 	}
	
// }

//int main(){
//	int n;
//	scanf("%d",&n);
//	for(int i=0;i<n;i++){
//		for(int j=i;j<n;j++){
//			printf(" ");
//		}
//		for(int k=0;k<i+1;k++){
//			printf("%d",k);
//		}
//		printf("\n");
//	}
// //}

// #include<string.h>
// int main(){
// 	char a[50],b[50];
// 	scanf("%s%s",&a,&b);
// 	strcat(a," ");
// 	printf("%s",strcat(a,b));
// 	return 0;
// }

// int main(){
// 	int r,c;
// 	scanf("%d %d",&r,&c);
// 	int mat[r][c];
// 	for(int i=0;i<r;i++){
// 		for(int j=0;j<c;j++){
// 			scanf("%d",&mat[i][j]);
// 		}

// 	}
// 	printf("the matrix is:\n");
// 	for(int i=0;i<r;i++){
// 		for(int j=0;j<c;j++){
// 			printf("%d\t",mat[i][j]);
// 		}
// 		printf("\n");
// 	}
// 	printf("the transpose is:\n");
	
// 	for(int i=0;i<r;i++){
// 		for(int j=0;j<c;j++){
// 			if(i==j){
// 				printf("%d\t",mat[i][j]);
// 			}else{
// 				printf("%d\t",mat[j][i]);
// 			}
// 		}
// 		printf("\n");
// 	}
// 	int det=0;
	
// 	return 0;
// }
//binary search
// int main(){
// 	int t;
// 	scanf("%d",&t);
// 	int arr[t];

// 	for(int i=0;i<t;i++){
// 		scanf("%d",&arr[i]);
// 	}
// 	int k,tt=0;
// 	scanf("%d",&k);
// 	for(int i=0;i<t;i++)
// 	{
// 		if(arr[i]==k){
// 			printf("%d",arr[i]);
// 			tt=1;
// 			break;
// 		}
// 	}
// 	if (tt==0)
// 	{
// 		printf("-1");
// 	}
		
// 	}


// int main(){
//  	int t;
//  	scanf("%d",&t);
//  	int arr[t];
//  	for(int i=0;i<t;i++){
//  		scanf("%d",&arr[i]);
// 	}
// 	int k;
// 	scanf("%d",&k);
// 	for(int i=0;i<t;i++){
// 		if(arr[i]==k){
// 			printf("True");
// 			break;
// 		}else{
// 			printf("False");
// 			break;
// 		}
// 	}
// }
//if a no is power of 2
// #include <stdio.h>

// int main() {
//     unsigned int N;
//     scanf("%u", &N);

//     // Check if N is a power of 2
//     if (N != 0 && (N & (N - 1)) == 0) {
//         printf("%u is a power of 2\n", N);
//     } else {
//         printf("%u is not a power of 2\n", N);
//     }

//     return 0;
// }

//substring and its index
// #include<string.h>
// int main(){
// 	char *A,*B;
// 	A="geeksforgeeks";
// 	B="for";
// 	char*a=strstr(A,B);
// 	if(strstr(A,B)!=NULL){
// 		printf("%d\n",a-A);
// 		printf("yes");

// 	}else{
// 		printf("no");
// 	}
// }	

// int fib(int n);
// int main(){
// 	int n;
// 	scanf("%d",&n);
// 	fib(n);
// 	printf("the fib is:%d",fib(n));
// 	return 0;
// }
// int fib(int n){
// 	if(n==0||n==1){
// 		return n;
// 	}else{
// 		return fib(n-1)+fib(n-2);
// 	}
// }

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
// //Complete the following function.

// int find_nth_term(int n, int a, int b, int c) {
//   //Write your code here.
//   if(n<=a || n<=b || n<c){
// 	return n;

//   }else{
// 	return (n)=find_nth_term(n-1,a,b,c)+find_nth_term(n-2,a,b,c)+find_nth_term(n-3,a,b,c);
//   }
  
// }

// int main() {
//     int n, a, b, c;
  
//     scanf("%d %d %d %d", &n, &a, &b, &c);
//     int ans = find_nth_term(n, a, b, c);
 
//     printf("%d", ans); 
//     return 0;
// }

// int marks(int t,int m[] ,char gen);
// int main(){
// 	int t;
// 	scanf("%d",&t);
// 	int m[t];
// 	for(int i=0;i<t;i++){
// 		scanf("%d",&m[i]);
// 	}
// 	fflush(stdin);
// 	char gen;
// 	scanf("%c",&gen);
// 	int sum;
// 	marks(t,m,gen);
// 	printf(" sum %d",marks(t,m,gen));
// 	return 0;
// }
// int marks(int t,int m[],char gen){
// 	int sum=0;
// 	if(gen=='b'){
		
// 		for(int i=0;i<t;i=i+2){
// 			sum=sum+m[i];
// 		}

// 	}else{
		
// 		for(int i=1;i<t;i=i+2){
// 			sum=sum+m[i];
// 		}
// 	}
// 	return sum;
// }
  
// int main(){
//  	int r,c;
//  	scanf("%d %d",&r,&c);
//  	int mat[r][c];
// 	int mat1[r][c];
//  	for(int i=0;i<r;i++){
// 		for(int j=0;j<c;j++){
// 			scanf("%d",&mat[i][j]);
// 		}
// 	}
// 	for(int i=0;i<r;i++){
// 		for(int j=0;j<c;j++){
// 			scanf("%d",&mat1[i][j]);
// 		}
// 	}
// 	int mat2[r][c];
// 	for(int i=0;i<r;i++){
// 		for(int j=0;j<c;j++){
// 			mat2[i][j]=mat[i][j]*mat1[i][j];
// 		}
// 	}
// 	for(int i=0;i<r;i++){
// 		for (int j = 0; j < c; j++){
// 			printf("%d\t",mat2[i][j]);

// 		}
// 		printf("\n");
		
		
// 	}
// }
//tower of henoi
// void tower(int n,char a,char b,char c);
// int main(){
// 	int n;
// 	char a,b,c;
// 	scanf("%d",&n);
// 	tower(n,'a','b','c');
// 	return 0;
// }
// void tower(int n,char a,char b,char c){
// 	if(n==0)
// 		return ; 
// 		tower(n-1,a,c,b);
// 		printf("disk %d moved from %c to %c\n",n,a,c);
// 		tower(n-1,c,b,a);
	
// }
// #include<string.h>
// int main(){
// 	char s[100];
// 	scanf("%[^\n]%*c",s);
// 	int c=0;
// 	for(int i=0;i<strlen(s);i++){
// 		if(s[i]=='a' || s[i]=='e'|| s[i]=='i' || s[i]=='o' || s[i]=='u'){
// 			c++;
// 		}
// 	}
// 	printf("%d",c);
// 	return 0;

// }
//descending order
// int main(){
// 	int n;
// 	scanf("%d",&n);
// 	int arr[n];
	
// 	//scanf("%d",&n);
	
// 	for(int i=0;i<n;i++){
// 		scanf("%d",&arr[i]);
// 	}
// 	int temp;
// 	for(int i=0;i<n;i++){
// 		for(int j=i+1;j<n;j++){
// 			if(arr[i]<arr[j]){//arr[i]>aa[j] for ascending
// 				temp=arr[i];
// 				arr[i]=arr[j];
// 				arr[j]=temp;
// 			}
// 		}
// 	}
// 	for(int i=0;i<n;i++){
// 		printf("%d\n",arr[i]);
// 	}
// 	return 0;
// }
// #include<string.h>
// int main(){
// 	char str1[100];
// 	scanf("%[^\n]%*c",&str1);
// 	int l=0;
// 	int h=strlen(str1)-1;
// 	int c=0;
// 	while(h>l){
// 		if(str1[l++]!=str1[h--]){
// 			printf("n");
// 			break;
// 		}else{
// 			c=c+1;
// 			if(c==h){
// 				printf("y");
// 			}
// 		}
// 	}
// 	return 0;
// }

//pat2
#include<math.h>
// float Feecal(float a,float b,float c,float p,float d);
// int main(){
// 	float a;
// 	float b;
// 	scanf("%f %f",&a,&b);
// 	float c=b-a;
// 	float d;
// 	float p;
// 	p=100+c*150.50;
// 	d=100+c*110.50;
// 	Feecal(a,b,c,p,d);
// 	return 0;

// }
// float Feecal(float a,float b,float c,float p,float d){
// 	if(c<0){
// 		printf("error");
// 	}else{
// 		printf("%.2f\n",c);
// 		printf("%.2f\n",round(d));
// 		printf("%.2f\n",round(p));

// 	}
		

// }

// int main(){
// 	float b=67.765;
// 	printf("%.2f",round(b));
// 	return 0;
// }
	
// int even(int n,int arr[]);
// int main(){
// 	int n;
// 	scanf("%d",&n);
// 	int arr[475];
// 	for(int i=0;i<n;i++){
// 		scanf("%d",&arr[i]);
// 	}
// 	printf("%d",even(n,arr));
// 	return 0;


// }

// static int arr[100];


// int even(int n,int arr[]){
// 	int c=0;
// 	int arr2[4858];
// 	// for (int i = 0; i < n; i++)
// 	// {
// 	// 	printf("%d\n",arr[i]);
// 	// }
// 	for(int i=0;i<n;i++)
// 	{
// 		if(arr[i]%2==0)
// 		{
// 			arr2[c]=arr[i];
// 			c++;
// 		}
		
// 	}
// 	// return arr2;
// 	for (int i = 0; i < c; i++)
// 	{
// 		printf(" hii %d\n",arr2[i]);
// 	}
	
	
// }
// #include<string.h>
// //int str1(char word);
// int main(){
// 	char word[100];
// 	scanf("%[^\n]%*c",&word);
// 	for(int i=0;i<strlen(word);i++){
// 		 if(word[i]=='a'){
// 		 	word[i]='1';
// 		 }
// 		 else if(word[i]=='b'){
// 		 	word[i]='2';
// 		 }
// 		 else{
// 		 	continue;
// 		 }
// 		//printf("no is %c\n",word[i]);
// 	}
// 	printf("%s",word);
	
// 	return 0;
// }
// int main(){

// // 	int a=100;
// // 	int b=10;
// // 	int c=100%10;
// // 	printf("%d",c);
// 	char word;
// 	scanf("%c",&word);
// 	switch(word){
// 		case 'a':
// 			printf("a");
// 			break;
// 		case 'b':
// 			printf("b");
// 			break;
// 		case 'c':
// 			printf("c");
// 			break;
// 		default:
// 			printf("nope");
// 			break;
// 	}
// 	return 0;
// }

// int main(){
// 	int a,b;
// 	scanf("%d %d",&a,&b);
// 	int mat[a][b];
// 	for(int i=0;i<a;i++){
// 		for(int j=0;j<b;j++){
// 			scanf("%d\t",&mat[i][j]);
// 		}
// 		printf("\n");
// 	}
// 	printf("mat is\n");
// 	for(int i=0;i<a;i++){
// 		for(int j=0;j<b;j++){
// 			printf("%d\t",mat[i][j]);
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }

// int matrix(int n,int m,int mat[n][m],int mat1[n][m],int mat2[n][m]);
// int main(){
// 	int n,m;
// 	scanf("%d %d",&n,&m);
// 	int mat[n][m],mat1[n][m],mat2[n][m];
// 	matrix(n,m,mat,mat1,mat2);
// 	printf("the sum mat is\n");
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<m;j++){
// 			printf("%d\t",mat[i][j]);
// 		}
// 		printf("\n");
// 	}
// }
// int matrix(int n,int m,int mat[n][m],int mat1[n][m],int mat2[n][m]){
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<m;j++){
// 			scanf("%d",&mat1[i][j]);
// 		}
// 	}
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<m;j++){
// 			scanf("%d",&mat2[i][j]);
// 		}
// 	}
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<m;j++){
// 			mat[i][j]=mat1[i][j]+mat2[i][j];
// 		}
// 	}
// 	return mat[n][m];




// }

// int main(){
// 	int n;
// 	scanf("%d",&n);
	
// 	for(int i=0;i<n;i++){
// 		float marks;
// 		scanf("%f",&marks);
// 		if(marks>=180){
// 			printf("4");
// 		}
// 		else{
// 			printf("3");
// 		}
// 	}
// }
// #include<string.h>
// int main(){
// 	int age,pm;
	
// 	char health[50],gender[50],place[50];
// 	int amt;
// 	scanf("%d",&amt);
// 	fflush(stdin);
// 	scanf("%d",&age);
// 	fflush(stdin);
// 	scanf("%d",&pm);
// 	fflush(stdin);
// 	scanf("%[^\n]%*c",health);
// 	fflush(stdin);
// 	scanf("%[^\n]%*c",gender);
// 	fflush(stdin);
// 	scanf("%[^\n]%*c",place);
// 	fflush(stdin);
// 	int ramt=amt;
	
// 	int reverse=0;
// 	int rem;
// 	while(amt>0){
// 		rem=amt%10;
// 		reverse=reverse*10+rem;
// 		amt=amt/10;

// 	}
// 	int c=reverse%10;
// 	int maxamt=c*pm+ramt;
// 	printf("%d\n",ramt);
// 	if((age>25 & age<35) && (pm==4) && strcmp(health,"ok")==0 && strcmp(gender,"male")==0 && strcmp(place,"city")==0 && (amt<200000)){
// 		printf("secured\n");
// 		printf("%d\n",pm);
// 		printf("%d\n",maxamt);
// 	}
// 	// else if(age>25 & age<35 & pm==3 & health=='ok' & gender=='f' & place=='city' & amt<100000){
// 	// 	printf("secured\n");
// 	// 	printf("%d\n",pm);
// 	// 	printf("%d\n",maxamt);
// 	// }
// 	else{
// 		printf("insecured");
// 	}
// 	return 0;

	
// }

//int max(int n,int arr[n]);
// int sort(int n,char arr[n]);
// void prsort(int n,char arr[n]);
// int main(){
//  	int n;
//  	scanf("%d",&n);
//  	fflush(stdin);
//  	char arr[n];
 	
//  	scanf("%[^\n]%*c",arr);
 	
//  	sort(n,arr);
//  	prsort(n,arr);
// }
// 	//printf("the max is %d",max(n,arr));
	
	


// }
// // int max(int n,int arr[n]){
// // 	int m=0;
// // 	for(int i=0;i<n-1;i++){
// // 		if(arr[i]>arr[i+1]){
// // 			m=arr[i];

// // 		}
// // 		else{
// // 			continue;
// // 		}
// // 	}
// // 	return m;
// // }

// int sort(int n,int arr[n]){
// 	int t;
// 	for(int i=0;i<n;i++){
// 		for(int j=i+1;j<n;j++){
// 			if(arr[i]<arr[j]){
// 				t=arr[i];
// 				arr[i]=arr[j];
// 				arr[j]=t;

// 			}
				
			
// 			else{
// 				continue;
// 			}
// 		}
// 	}
// }
// void prsort(int n,int arr[n]){
//  	printf("%s",arr);
// }


// }
// #include<string.h>
// #include<ctype.h>
// int main(){
// 	char str1[60];
// 	scanf("%[^\n]%*c",str1);
// 	int c,d,e,f,g;
// 	c=0;
// 	d=0;
// 	e=0;
// 	f=0;
// 	g=0;
// 	for(int i=0;i<strlen(str1);i++){
// 		if(str1[i]>96){
// 			c=c+1;
// 		}
// 		else if(str1[i]>64 && str1[i]<91){
// 			d=d+1;
// 		}
// 		else if(str1[i]==' '){
// 			e=e+1;
// 		}
// 		else if(isdigit(str1[i])){
// 			g++;
// 		}
// 		else{
// 			f++;
// 		}
		
// 	}
// 	printf("%d\n",c);
// 	printf("%d\n",d);
// 	printf("%d\n",e);
// 	printf("%d\n",f);
// 	printf("%d\n",g);

// }

// int fac(int n);
// int series(int n);
// int main(){
// 	int n;
// 	scanf("%d",&n);
// 	fac(n);
// 	series(n);
// 	printf("%d",series(n));
// }
// int fac(int n){
// 	if(n==0){
// 		return 0;
// 	}
// 	else if(n==1){
// 		return 1;
// 	}
// 	else{
// 		return n*fac(n-1);
// 	}
// }
// int series(int n){
// 	if(n==1){
// 		return 1;
// 	}
// 	return fac(n)/n+series(n-1);
// }
// #include<string.h>
// #include<ctype.h>
// int main(){
// 	char word[98];
// 	scanf("%[^\n]%*c",word);
// 	//printf("%d\n",strlen(word));
// 	int c=0;
// 	for(int i=0;i<strlen(word);i++){
// 		if(word[i]==' '){
// 			break;
// 		}else{
// 			c++;
// 		}
// 	}
// 	//printf("%d",c);
// 	//strcpy(word[0],toupper(word[0]));
// 	for(int i=0;i<strlen(word);i++){
// 	 	if(i==0){
// 	 		word[i]=toupper(word[i]);
// 	 	}
// 	 	else if(word[i]==' '){
// 			for(int i=c+1;i<strlen(word);i++){
// 				word[i]=toupper(word[i]);
// 			}


// 		}
// 		else{
// 			continue;
// 		}
	 	
// 	}
// 	printf("%s",word);
	
// }

// int main(){
// 	char a;
// 	scanf("%c",&a);
// 	if(a>=65 && a<=90){
// 		printf("%c",a+32);
// 	}
	
// }

// int main(){
// 	int n;
// 	n=5;
// 	int arr1[n];
// 	int arr2[n];
// 	for(int i=0;i<n;i++){
// 		scanf("%d",&arr1[i]);
// 	}
// 	for(int i=0;i<n;i++){
// 		scanf("%d",&arr2[i]);
// 	}
// 	int result[98];
// 	for(int i=0;i<n;i++){
// 		result[i]=arr1[i];
// 	}
// 	for(int i=n;i<n+n;i++){
// 		result[i]=arr2[i-n];
// 	}
// 	printf("the aray is");
// 	for(int i=0;i<n+n;i++){
// 		printf("%d\t",result[i]);
// 	}
// }
#include<string.h>
// int main(){
// 	char str1[989];
// 	scanf("%[^\n]%*c",str1);
// 	char str2[50];
// 	// int l=0;
// 	// int m=strlen(str1)-1;
// 	// while(m>=0){
// 	// 	str2[l]=str1[m];
// 	// 	l++;
// 	// 	m--;
// 	// }
// 	// printf("%s",str2);



// }
// #include<math.h>
// int main(){
// 	int n;
// 	scanf("%d",&n);
// 	for(int i=0;i<n;i++){
// 		float t,p,q,r;
// 		scanf("%f %f %f %f",&t,&p,&q,&r);
// 		float c=t*p*q*r;
// 		float d=100/c;
// 		float f=d*100;
// 		float g=round(f);
// 		float k=(g/100);
// 		// float e=(int)(d*100)+0.5;
// 		//printf("%f",k);
		
// 		if(k<9.580001 && k!=9.580000){
// 			printf("%f\n",k);
// 			printf("YES");
// 		}else{
// 			printf("NO");
// 		}

// 	}
// }

#include <stdio.h>

// int main(void) {
// 	// your code goes here
// 	int t;
// 	scanf("%d",&t);
// 	for(int i=0;i<t;i++){
// 	    int n;
// 	    scanf("%d",&n);
// 	    for(int i=0;i<n;i++){
// 	        int k[n];
// 	        scanf("%d",&k[i]);
	        
// 	    }
// 	    int c[n-1];
// 	    for(int i=0;i<n;i++){
// 	        scanf("%d",c[i]);
	        
// 	    }
// 	    int sum=0;
// 	    int max=-1;
// 	    int rem=0;
// 	    for(int i=0;i<n;i++){
// 	        while(c[i]>0){
// 	            rem=c[i]%10+rem;
// 	            sum=sum+rem;
// 	            c[i]=c[i]/10;
	            
// 	        }
// 	        if(sum>max){
// 	            max=sum;
// 	        }else{
// 	            continue;
// 	        }
// 	    }
// 	    printf("%d\n",max);
// 	}
// 	return 0;
// }




//#include<stdio.h>
// int main()
// {
//  if(5+1==6 && 8-1>4){
// 	printf("j");
//  }
//  return 0;
// }
//hackerrank triangle
/*#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
 		scanf("%d",&arr[i]);
 	}
 	int t;
 	for(int i=0;i<n;i++){
 		for(int j=i+1;j<n;j++){
 			if(arr[i]>arr[j]){
 				t=arr[i];
 				arr[i]=arr[j];
 				arr[j]=t;
 			}else{
 				continue;
 			}
 		}
 	}
 	for(int i=0;i<n;i++){
 		printf(" they are %d\t",arr[i]);
	}*/	
#include<math.h> 
/*int main(){
 	int arr1[]={5,7,8,9,9,23};
 	int arr2[]={12,66,5,78,12,0};
 	int n=6;

 	for(int i=0;i<n;i++){
  		for(int j=i+1;j<n;j++){
  			if(arr2[i]>arr2[j]){
  				int t=arr2[i];
  				arr2[i]=arr2[j];
  				arr2[j]=t;
  			}else{
  				continue;
  			}
  		}
  	}
	
 	int arr[n];
 	int c=0;
 	for(int i=0;i<n;i++){
 		int f=0;
 		for(int j=i+1;j<n;j++){
 			if(arr1[i]!=arr1[j]){
 				f=0;
 			}else{
 				f++;
				
				break;
 			}
		}		
 		if(f==0){
 			arr[c]=arr1[i];
 			c++;
			
 		}else{
 			continue;
 		}
		
 	}
 	/*printf("they are\n");
 	for(int i=0;i<c;i++){
 		printf("%d\t",arr[i]);
 	}*/
	/*int arrr[n];
 	int d=0;
 	for(int i=0;i<n;i++){
 		int f1=0;
 		for(int j=i+1;j<n;j++){
 			if(arr2[i]!=arr2[j]){
 				f1=0;
 			}else{
 				f1++;
				
				break;
 			}
		}		
 		if(f1==0){
 			arrr[d]=arr2[i];
 			d++;
			
 		}else{
 			continue;
 		}
		
 	}
	// printf("they are\n");
 	// for(int i=0;i<d;i++){
 	// 	printf("%d\t",arrr[i]);
 	// }
	int final[n];
	for(int i=0;i<c;i++){
		final[i]=arr[i];
	}
	for(int j=0;j<d;j++){
		final[j+c]=arrr[j];
	}
	/*printf("they are:");
	for(int i=0;i<(c+d);i++){    //for full combine array
		printf("%d\t",final[i]);
	}*/
	/*int final2[2*n];
 	int e=0;
 	for(int i=0;i<(c+d);i++){
 		int f2=0;
 		for(int j=(c+d)-i;j>i;j--){
 			if(final[i]!=final[j]){
 				f2=0;
 			}else{
 				f2++;
				
				break;
 			}
		}		
 		if(f2==0){
 			final2[e]=final[i];
 			e++;
			
 		}else{
 			continue;
 		}
		
 	}
	
	
	printf("they are :");
	for(int i=0;i<e;i++){
		printf("%d\t",final2[i]);
	}

 	return 0;


}*/

//unique elements 
/*int main(){
	int n=17;
	int arr[]={4,56,77,1,22,4,65,77,77,33,1,4,56,77,56,32,9};
	//int f=0;
	for(int i=0;i<n;i++){
		int f=0;
		for(int j=0;j<n;j++){

			if(i!=j){
				if(arr[i]==arr[j]){
					f++;
				}


			}
		}
		if(f==0){
			printf("%d\n",arr[i]);
		}
	}
}*/

int main(){
	int n;
	int sum=0;
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		

	}
}	