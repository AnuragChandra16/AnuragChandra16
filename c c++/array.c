#include<stdio.h>
//count no of odd nos
/*int main(){
    int marks[4]={4,3,44,5};
    printf("%d",marks[1]);
    return 0;
}*/
/*int countodd(int arr[],int n);

int main(){
    int arr[]={3,5,6,2,5,6,1,22};
    
    printf("%d",countodd(arr,8));
    
    
    return 0;

}

int countodd(int arr[],int n){
    int c=0;
    for(int i=0;i<(n+1);i++){
        if (arr[i]%2!=0){
            c++;
        }

    }
    return c;
}*/
// location by memory bytes(here 1)
/*int main(){
    char pr=30.00;
    char *ptr=&pr;
    printf("%u\n",ptr);
    ptr++;
    printf("%u",ptr);
    return 0;
}*/

//location of an array
//int main(){
//    int age[]={4,3,7,8};
//    int *ptr=age;
//    printf("%u",ptr);
//    return 0;
//}





/*int main()
{
  int arr[5];   // array
  int i; // loop var

  printf("Enter elements of the array - \n");

  for(i=0;i<5;i++)
  {
    scanf("%d",&arr[i]);
  }

  printf("Content of the array - \n");

  for(i=0;i<5;i++)
  {
    printf("%d \n",arr[i]);
  }

  return 0;
}*/
//reverse an array
// int reverse(int arr[],int n);
// int main(){
//     int arr[]={1,2,3,4,5,6};
//     reverse(arr,6);
//     return 0;

// }
// int reverse(int arr[],int n){
//     for(int i=0;i<3;i++){
//         int firva=arr[i];
//         int secva=arr[n-i-1];
//         arr[i]=secva;
//         arr[n-i-1]=firva;

//     }
//     for (int i=0;i<6;i++){
//         printf("%d",arr[i]);
//     }
    
// }

//unique elements 
/*int main(){
	int n=16;
	int arr[]={4,56,77,1,22,4,65,77,77,33,1,4,56,77,56,32};
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


//distinct elements
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




