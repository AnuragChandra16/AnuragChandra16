#include<iostream>;
using namespace std;
// int main(){
//     int n=5;
//     for(int i=0;i<5;i++){
//         for(int j=i;j<n;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int n=5;
//     int k=1;
//     for(int i=0;i<5;i++){
//         for(int j=i;j<5;j++){
//             cout<<k;
//             cout<<" ";
//             k=k+1;
//         }

//         cout<<endl;
        
//     }
// }
  // butterfly
// int main (){
//     int n=4;
//     for(int i=1;i<n+1;i++){
//         for(int j=1;j<i+1;j++){
//             cout<<"*";
//         }
//         int space=2*n-2*i;
//         for(int j=0;j<space;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<i+1;j++){
//             cout<<"*";
//         }                         
//         cout<<endl;
//     } 
//     for(int i=n;i>0;i--){
//         for(int j=1;j<i+1;j++){
//             cout<<"*";
//         }
//         int space=2*n-2*i;
//         for(int j=0;j<space;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<i+1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }     
// }
//rhombus
// int main(){
//     int n=5;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n-1;j++){
//             cout<<" ";
//         }
//         for(int k=0;k<n;k++){
//             cout<<"*";
//         }
//         cout<<endl;

//     }
// }


// int main(){
//     int n=5;
//     int l=1;
//     for(int i=0;i<n;i++){
        
//     }
// }


//pascal triangle //ti.j=iCj  1
                              //1 1
                              //1 2 1
                              //1 3 3 1
int fac(int n){
  int factorial=1;
  for(int i=2;i<=n;i++){
    factorial*=i;
  }
  return factorial;
}

int main(){
  int n;
  cin>>n;
  for (int i = 0; i < n; i++)
  {
    for(int j=0;j<=i;j++){
      cout<<fac(i)/(fac(j)*fac(i-j))<<" ";

    }
    cout<<endl;
  }
  
}