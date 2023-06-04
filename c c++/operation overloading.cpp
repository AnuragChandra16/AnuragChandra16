//addition of two nos
/*class num{
    int a,b;
    public:
    void setnum(){
        int x,y;
        cin>>x>>y;
        a=x;
        b=y;
        
    }
    num operator+(num n){
        num t;
        t.a=a+n.a;
        t.b=b+n.b;
        return t;
    }
    void print(){
        cout<<"sum is:"<<a<<endl;
        cout<<"sum is "<<b;
    }
};
int main(){
    num A,B,C;
    A.setnum();
    
    B.setnum();
    C=A+B;
    C.print();
}*/

//latitude and longitude 
/*#include<iostream>
using namespace std;
class latitude{
    public:

    float lat,longi;
    public:
    
    void setnum(float a,float b){
        
        lat=a;
        longi=b;
    }
    latitude operator =(latitude n){
        
        lat=n.lat;
        longi=n.longi;
        
        
    }
};
int main(){
    float a,b,c,d;
    cin>>a>>b>>c>>d;
    latitude k;
    k.setnum(a,b);
    latitude j;
    j.setnum(c,d);
    if(k.lat>j.lat){
        j.lat=k.lat;
        j.longi=k.longi;

    }
    else{
        k.lat=j.lat;
        k.longi=j.longi;

    }
    cout<<"L1:"<<" "<<"("<<k.lat<<","<<k.longi<<")"<<endl;
    cout<<"L2: ("<<j.lat<<","<<j.longi<<")"<<endl;
   
}*/

//add two names ,two one type of no and two another type of integer
/*#include <iostream>
using namespace std;
class base{
    string name;
    int n1,n2;
    public:
    void setname(){
        string a;
        name=a;
        cin>>name;
    }
    void num1(){
        int b;
        n1=b;
        
        cin>>n1;
       
    }
    void num2(){
        int c;
        n2=c;
        cin>>n2;
    }
    base operator+(base b2){
        base t;
        t.name=name+b2.name;
        t.n1=n1+b2.n1;
        t.n2=n2+b2.n2;
        return t;
    }
    void print(){
        cout<<"name is "<<name<<" nos are"<<n1<<"and"<<n2<<endl;
    }
};
int main() {
    // Write C++ code here
    base b3;
    b3.setname();
    b3.num1();
    b3.num2();
    base b4;
    b4.setname();
    b4.num1();
    b4.num2();
    base b5;
    b5=b3+b4;
    b5.print();
    
  

    return 0;
}*/



// class clg{
//     string slot;
//     str
// }
/*int main(){
    string n1,n2;
    cout<<"enter: ";
    cin>>n1;
    cin>>n2;
    if(n1!=n2){
        cout<<"jg";
    }else{
        cout<<"nope";
    }

}*/

/*class base{
    float lat;
    float longi;
    public:
    
    void setdata(float a,float b){
        lat=a;
        longi=b;

    }
    base operator-(const base& b){
        base t;
        t.lat=b.lat-lat;
        t.longi=b.longi-longi;
        return t;
    }
    void print(){
        cout<<lat<<"and "<<longi;
    }
};
int main(){
    float x,y,z,k;
    base b1;
    
    cin>>x>>y;
    b1.setdata(x,y);
    base b2;
    cin>>z>>k;
    b2.setdata(z,k);
    base b3;
    b3=b2-b1;
    b3.print();

    


}*/
//take names ,num,num and another string and if string == name 
/*#include<iostream>
#include<string.h>
using namespace std;
class duty{
    string name,name2;
    int n1,n2;
    public:
    void setname(string name1){
        name=name1;
    }
    
    void setnum1(int a1){
        n1=a1;
    }
    void setnum2(int b1){
        n2=b1;
    }
    duty operator+(const duty& d){
        duty dd;
        dd.n1=n1+d.n1;
        return dd;
        //dd.name=name+d.name;
        
    }
    void print(){
        cout<<"no of students are:"<<n1;
    }

};
int main(){
    string a,b,c;
    int x,y,z,k;
    duty du1;
    cin>>a;
    cin>>x>>y;
    du1.setname(a);
    du1.setnum1(x);
    du1.setnum2(y);
    duty du2;
    cin>>b;
    cin>>z>>k;
    du2.setname(b);
    du2.setnum1(z);
    du2.setnum2(k);
    cin>>c;
    duty d3;
    d3=du2+du1;
    if(c==a){
        cout<<b<<"and"<<z<<endl;
    }else{
        cout<<a<<"and"<<x<<endl;
    }
    d3.print();
}*/