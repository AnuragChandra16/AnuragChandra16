/*#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
//int arr[n];
int *ptr;

ptr=(int*)calloc(n,sizeof(ptr));
for(int i=0;i<n;i++){
	scanf("%d",&ptr[i]);
}
int t;
for(int i=0;i<n;i++){
	for(int j=i+1;j<n;j++){
		if(ptr[i]>ptr[j]){
			t=ptr[i];
			ptr[i]=ptr[j];
			ptr[j]=t;
		}else{
			continue;
		}
	}
}
for(int i=0;i<n;i++){
	printf(" they are %d\t",ptr[i]);
}

 }*/

//string sort
#include<string.h>
int main(){
	int n;
	
	char arr[100];
	scanf("%[^\n]s",arr);
	int t;
	for(int i=0;i<strlen(arr);i++){
		for(int j=i+1;j<strlen(arr);j++){
			if(arr[i]>arr[j]){
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}else{
				continue;
			}
		}
	}
	for(int i=0;i<strlen(arr);i++){
		printf(" they are %c\t",arr[i]);
	}

}