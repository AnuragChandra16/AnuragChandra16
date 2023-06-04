#include<iostream>
using namespace std;
//multilevel 
/*class number{
    int roll;
    public:
    void setnum(){
        cin>>roll;
    }
    void print(){
        cout<<"roll is "<<roll<<endl;
    }

};
class exam: public number{
    protected:

    int maths;
    int physics;
    public:
    void setmaths(){
        cin>>maths;
    }
    void setphy(){
        cin>>physics;
    }
    void disp2(){
        cout<<"marks are"<<maths<<"and"<<" "<<physics<<endl;
    }
};
class result: public exam{
    float per;
    
    public:
    void setper(){
        cout<<"math "<<maths<<" phy "<<physics;
        per=(maths+physics)/2;


    }
    void disp(){
        cout<<"the percentage marks is :"<<per<<endl;
    }
    
};

int main(){
    
    result r;
    r.setnum();
    r.print();
    r.setmaths();
    r.setphy();
    r.disp2();
    //r.exam::disp();
    r.setper();
    r.disp();



}*/

//mutliple 
/*class base1{
    public :
    int n1;
    void setnum1(){
       
        cin>>n1;
    }

};
class base2{
    public:
    int n2;
    void setnum2(){
        
        cin>>n2;
    }
};
class der:public base1,public base2{
    public:
    int c;
    void add(){
        
        c=n1+n2;
    }
    void show(){
        cout<<n1<<"and"<<n2<<"and"<<c;
    }
};
int main(){
    der d;
    d.setnum1();
    d.setnum2();
    d.add();
    d.show();
    return 0;
}
*/


//hierarchical
/*class base{
    
    public:
    int x,y;
    void setnum(){
        cin>>x>>y;
    }
};
class A:public base{
    public:
    int c;
    void mul(){
        c=x*y;
    }
    void disp1(){
        cout<<"mul is: "<<c<<endl;
    }
};
class B:public base{
    public:
    int d;
    void add(){
        d=x+y;
    }
    void disp2(){
        cout<<"add is: "<<d<<endl;
    }
};
int main(){
    A a;
    a.setnum();
    a.mul();
    a.disp1();
    B b;
    b.setnum();
    b.add();
    b.disp2();

}*/

class Compare{
    string s1,s2;
    public:
    
    void setdata1(string a){
        s1=a;
        

    }
    void setdata2(string b){
        s2=b;
        

    }

    bool operator ==(const Compare& c){
        return(s1==c.s1 && s2==c.s2);
        
    }
};
int main(){
    string a1,b1;
    Compare c1;
    cin>>a1;
    c1.setdata1(a1);
    Compare c2;
    cin>>b1;
    c2.setdata2(b1);
    if(c1==c2){
        cout<<"ohh yeah"<<endl;
    }else{
        cout<<"nope";
    }
}

