#include<iostream>
using namespace std;
//code for 1st occurence and last occurence 
/*int binarysearch(int arr[],int n,int k);
int binarysearchlast(int arr[],int n,int k);
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    //binarysearch(arr,n,k);
    cout<<binarysearch(arr,n,k)<<endl;
    cout<<binarysearchlast(arr,n,k)<<endl;
}
int binarysearch(int arr[],int n,int k){
     int s=0;
     int e=n;
     int ans=-1;
     while(s<=e){
         int mid=(s+e)/2;
         if(arr[mid]==k){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>k){     //go to left part
            e=mid-1;
        }
        else{
            s=mid+1;  //go to ri8 part
        }
    }
    return ans;
}


int binarysearchlast(int arr[],int n,int k){
     int s=0;
     int e=n;
     int ans1=-1;
     while(s<=e){
         int mid=(s+e)/2;
         if(arr[mid]==k){
            ans1=mid;
            s=mid+1;
        }
        else if(arr[mid]>k){     //go to left part
            e=mid-1;
        }
        else{
            s=mid+1;  //go to ri8 part
        }
    }
    return ans1;
}*/


//peak index in mountain array
/*int peak(int arr[],int n);
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    peak(arr,n);
    cout<<"peak index is:"<<peak(arr,n);
    return 0;
}
int peak(int arr[],int n){
    int e=n;
    int s=0;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else if(arr[mid]>arr[mid+1]){
            e=mid-1;
        }
        else{
            return mid;
        }
    }
}*/

//pivot element 
int pivot(int arr[],int n);
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"pivot element is:"<<pivot(arr,n);
    return 0;
}
int pivot(int arr[],int n){
    int e=n;
    int s=0;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]<arr[mid+1]){
            e=mid;
        }
        else if(arr[mid]>arr[mid+1]){
            s=mid+1;
        }
        else{
            return arr[mid];
        }
    }
}

 
