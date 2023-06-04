#include<iostream>
#include<algorithm>
using namespace std;
//binary search
// int binarysearch(int arr[],int n,int k);
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int k;
//     cin>>k;
//     //binarysearch(arr,n,k);
//     cout<<binarysearch(arr,n,k)<<endl;

// }
// int binarysearch(int arr[],int n,int k){
//     int s=0;
//     int e=n;
//     while(s<=e){
//         int mid=(s+e)/2;
//         if(arr[mid]==k){
//             return mid;

//         }
//         else if(arr[mid]>k){     //go to left part
//             e=mid-1;
//         }
//         else{
//             s=mid+1;  //go to ri8 part
//         }
//     }
// }



// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int s1=0; //total age of male customers
//     int s2=0; //total age of female customers
//     int c=0; //count of male customers
//     for(int i=0;i<n;i++){
//         string gen;
//         //getline(cin,gen);
//         cin>>gen;
        
//         if(gen=="Male"){
//             int age1;
//             cin>>age1;
//             s1=s1+age1;
//             c++;
            
//         }else{
//             int age2;
//             cin>>age2;
//             s2=s2+age2;
//         }
//     }
//     int mage=s1/c; //average age of male customers
//     int fage=s2/(n-c); //average age of female customers
    
//     cout<<"Average age of male customers: "<<mage<<endl;
//     cout<<"Average age of female customers: "<<fage<<endl;
//     return 0;
// }

//sum of subarray
// int main(){
    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++){
        // cin>>a[i];
    // }
    // int k=0;
    // for(int i=0;i<n;i++){
        // int c=0;
        // for(int j=i;j<n;j++){
            // c=c+a[j];
            //cout<<c<<endl;--//for each subarray. 
            // 
            // 
// 
        // }
        // k+=c;
    // 
    // }
    // cout<<"it is "<<k<<endl;// sum of all subarray.
// }

//maximum subarray having difference between each element is equal
// int main(){
//     int n;
//     n=7;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int pd=a[1]-a[0];
//     int j=2;
//     int c=2;
//     int ans=2;
//     while(j<n){
//         if(pd==a[j]-a[j-1]){
//             c++;
//         }else{
//             pd=a[j]-a[j-1];
//             c=2;
//         }
//         ans=max(ans,c);
//         j++;
//     }
//     cout<<ans<<endl;
// }

//record breaker
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    int f=0;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            for(int j=i;j<=0;j--){
                if(a[i]>a[j]){
                    f=1;
                }else{
                    f=0;
                }
            }
        }
        if(f==1){
            cout<<a[i]<<endl;
        }


    }

}