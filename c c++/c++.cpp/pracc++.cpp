#include<iostream>
#include<cmath>
using namespace std;
// bool check(int a,int b,int c); // to check pythagoras theorem
// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;
//     check(a,b,c);
//     if(check(a,b,c)){
//         cout<<"yes";
//     }else{
//         cout<<"no";
//     }
// }
// bool check(int a,int b,int c){
//     if(a*a==b*b+c*c){
//         return true;
//     }
//     else if(b*b==a*a+c*c){
//         return true;
//     }
//     else if(c*c==a*a+b*b){
//         return true;
//     }
//     else{
//         return false;
//     }
    
// }

//binary to decimal 
// int main(){
//     int n;
//     cin>>n;
//     int sum=0;
//     int k=0;
//     int rem=0;
//     while(n>0){
//         rem=n%10;
//         sum=sum+rem*pow(2,k);
//         n=n/10;
//         k++;

//     }
//     cout<<sum;
//     return 0;
// }

//decimal to binary
// int main(){
//     int n;
//     cin>>n;
//     int arr[50];
//     int k=0;
//     int rem=0;
//     while(n>0){
//         rem=n%2;
//         arr[k]=rem;
//         n=n/2;
//         k++;

//     }
   
//     for(int i=k-1;i>=0;i--){
//         cout<<arr[i];
//     }
// }

int main(){
    int n;
    cin>>n;
    int arr[50];
    int f[50];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        f[i]=-1;
    }
    /*for(int j=0;j<n;j++){
        for(int k=j+1;k<n;k++){
            if(arr[j]>arr[k]){
                int t=arr[j];
                arr[j]=arr[k];
                arr[k]=t;
            }
        }
    }*/
    // for(int i=0;i<n;i++){
    //     cout<<"sorted is:\t"<<arr[i];
    // }
    /*int max=0;
    string s1;
    int min=1000;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            s1=s[i];
        }
    }
    cout<<"max and name is:"<<max<<s1<<endl;*/

    for(int i=0;i<n;i++){
        int c=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                c++;
                f[j]=0;
            }
        }
        if(f[i]!=0){
            f[i]=c;
        }

    }
    for(int l=0;l<n;l++){
        if(f[l]!=0){
            cout<<"frequency of:"<<arr[l]<<"is::"<<f[l]<<endl;
        }
    }
}


