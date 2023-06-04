#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
//pointer to derived class
/*class base{
    
    public:
    int v1;
    
    void disp(){
        cout<<"no of base class is v1:"<<v1<<endl;
    }
};
class derived:public base{
    
    public:
    int v2;
    void disp(){
        cout<<"no of base and derived class is:"<<v1<<"and "<<v2<<endl;
    }
};
int main(){
    base *basecl;
    base bb;
    derived der;
    basecl=&der;
    //basecl->v1=9;
    cin>>basecl->v1;//input from user
    basecl->disp();
    derived *dd;
    dd=&der;
    dd->v2=99;
    dd->disp();

}*/

//virtual function
/*class base{
    
    public:
    int v1;
    
    virtual void disp(){
        cout<<"no of base class is v1:"<<v1<<endl;
    }
};
class derived:public base{
    
    public:
    int v2;
    void disp(){
        cout<<"no of base and derived class is:"<<v1<<"and "<<v2<<endl;
    }
};
int main(){
    base *basecl;
    base bb;
    derived der;
    basecl=&der;
    //basecl->v1=9;
    cin>>basecl->v1;//input from user
    derived *dd;
    dd=&der;
    cin>>dd->v2;
    basecl->disp();

   
    

}
*/
//pure virtual class
/*class shape{
    public:
    virtual void setdata()=0;
    virtual float show()=0;

};
class square:public shape{

    public:
    float a;
    void setdata(){
        cin>>a;
    }
    float show(){
        float b=a*a;
        cout<<"area is :"<<b<<endl;
    }
};
class rec:public shape{
    float c,d;
    public:
    void setdata(){
        cin>>c>>d;

    }
    float show(){
        float e=c*d;
        cout<<"area of rec is:"<<e;
    }
};
int main(){
    shape *s;
    square sq;
    rec r;
    s=&sq;
    s->setdata();
    
    s->show();
    s=&r;
    s->setdata();
    s->show();
}*/

// IPS - for student 12% dis otherwise 4%
/*class shop{
    public:
    string name;
    int amt;
    virtual void setdata(){
        
    }
    
    virtual void disp(){
        
    }
    
};
class customer :public shop{
    public:
    void setdata(){
        cin>>name;
        cin>>amt;
    }
    
    
    void disp(){
        int d = 0.12 * amt;
        int e = 0.04 * amt;
        if(name=="Student"){
            cout<<d<<endl;
        }
        else{
            cout<<e;
        }
    }
};
int main(){
    shop *s;
    customer cum;
    s=&cum;
    s->setdata();
    s->disp();
}*/
//IPS - area of circle and triangle
/*#include<iomanip>
class shape{
    public:
    float a,b,c;
    virtual void setnum(){

    }
    virtual void calcarea(){

    }
    virtual void disp(){

    }

};
class circle:public shape{
    public:
    double a1;
    void setnum(){
        cin>>a;
    }
    void calcarea(){
        a1=3.14*a*a;
    }
    void disp(){
        cout<<"Area of Circle: "<<fixed<<setprecision(2)<<a1<<endl;
    }
    
};
class triangle:public shape{
    public:
    double a2;
    void setnum(){
        cin>>b;
        cin>>c;
    }
    void calcarea(){
        a2=0.5*b*c;
    }
    void disp(){
        cout<<"Area of Triangle: "<<fixed<<setprecision(2)<<a2<<endl;
    }
};
int main(){
    shape *s;
    circle c;
    triangle t;
    s=&c;
    s->setnum();
    s->calcarea();
    s->disp();
    s=&t;
    s->setnum();
    s->calcarea();
    s->disp();
}
*/
// IPS for 8 inputs (for each euc and man)
/*class distance{
    public:
    float a,b,c,d;
    virtual void distance_cal(){

    } 
    virtual void disp(){
        
    }
};
class euc:public distance{
    public:
    void distance_calc(){
        cin>>a>>b>>c>>d;

    }
    void disp(){
        float eucc=sqrt(pow((b-a),2)+pow((d-c),2));
        cout<<"Euclidean Distance: "<<eucc;
    }
};
class man:public distance{
    public:
    void distance_calc(){
        cin>>a>>b>>c>>d;

    }
    void disp(){
        float mann=abs(a-b)+abs(c-d);
        cout<<"Manhattan Distance: "<<mann;
    }
};
int main(){
    distance *dis;
    euc e;
    man m;
    dis=&e;
    dis->distance_calc();
    dis->disp();
    dis=&m;
    dis->distance_calc();
    dis->disp();


}*/

//IPS input taken one time only

/*#include <iostream>
#include <cmath>

using namespace std;

class distanceshape{
public:
    float a, b, c, d;
    virtual void distance_calc(float a,float b,float c,float d) {
        
    }
    virtual void disp() {

    }
};

class euc : public distanceshape{
public:
    void distance_calc(float a,float b,float c,float d) {
        
        this->a=a;
        this->b=b;
        this->c=c;
        this->d=d;
    }
    void disp() {
        
        float eucc = sqrt(pow((c - a), 2) + pow((d - b), 2));
        cout << "Euclidean Distance: " <<int(eucc) << endl;
    }
};

class man : public distanceshape{
public:
    void distance_calc(float a,float b,float c,float d) {
        
        this->a=a;
        this->b=b;
        this->c=c;
        this->d=d;
    }
    void disp() {
        
        float mann = abs(a - c) + abs(b - d);
        cout << "Manhattan Distance: " <<int(mann) << endl;
    }
};

int main() {
    distanceshape* dis;
    float x,y,z,k;
    cin>>x>>y>>z>>k;
    euc e;
    man m;
    dis = &e;
    
    dis->distance_calc(x,y,z,k);
    dis->disp();
    
    
    dis=&m;
    dis->distance_calc(x,y,z,k);
    dis->disp();

    return 0;
}*/

/*class shape{
    
    public:
    virtual void setnum()=0;
    virtual void cal()=0;
};
class square:public shape{
    public:
    float a;
    void setnum(){
        cin>>a;
    }
    void cal(){
        cout<<a*a<<endl;
    }
};
class rectangle:public shape{
    public:
    float c,d;
    void setnum(){
        cin>>c>>d;
    }
    void cal(){
        cout<<(c+d);
    }
};

int main(){
    shape *m;
    square s;
    rectangle r;
    m=&s;
    m->setnum();
    m->cal();
    m=&r;
    m->setnum();
    m->cal();
    return 0;

}*/

class mainly{
    public:
    int a,b,c,d;
    virtual void setnum(int a,int b,int c,int d)=0;
    virtual void cal()=0;
};
class add:public mainly{
    public:
    void setnum(int a,int b,int c,int d){
        this->a=a;
        this->b=b;
        this->c=c;
        this->d=d;


    }
    void cal(){
        cout<<a+b+c+d<<endl;
    }
};
class mul:public mainly{
    public:
    void setnum(int a,int b,int c,int d){
        this->a=a;
        this->b=b;
        this->c=c;
        this->d=d;


    }
    void cal(){
        cout<<a*b*c*d<<endl;
    }
};
int main(){
    
    mainly *m;
    int x,y,z,k;
    
    cin>>x>>y>>z>>k;
    add ad1;
    mul m1;
    m=&ad1;
    m->setnum(x,y,z,k);
    m->cal();
    m=&m1;
    m->setnum(x,y,z,k);
    m->cal();

}


