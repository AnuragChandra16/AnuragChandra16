#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
using namespace std;
/*class hero{
    public:
    int health;
    char level;

};
int main(){
    hero aman;
    cin>>aman.health;
    cout<<"this little boy is healthy as fuck "<<aman.health<<endl;
    return 0;
}*/

// getter setter
/*class hero{
    private:

    int health;
    public:
    char level;
    int gethealth(){
        return health;
    }
    void sethealth(int h){
        health=h;

    }

};
int main(){
    hero aman;
    cout<<"healrth:"<<endl;

    aman.sethealth(69);

    //cin>>aman.health;
    cout<<"this little boy is healthy as fuck "<<aman.gethealth()<<endl;
    return 0;
}*/

// default constructor
/*class hero{
    private:

    int health;
    public:
    char level;
    hero(){
        cout<<"jey"<<endl;
    }
    int gethealth(){
        return health;
    }
    void sethealth(int h){
        health=h;

    }

};
int main(){
    hero aman;
    hero *b=new hero;

    return 0;
}*/

// copy construction
/*class hero{
    private:

    int health;
    public:
    char level;
    //default
    hero(){
        cout<<"default"<<endl;
    }
    //parametric
    hero(int health ,char level){
        this->level = level;   //parametric constructor
        this->health = health;
    }
    //copy
    hero(hero &temp){
        cout<<"copy "<<endl;
        this ->health=temp.health;
        this ->level=temp.level;
    }
    void print(){
        cout<<"health"<<this->health<<endl;
        cout<<"level"<<this->level<<endl;
    }

    int gethealth(){
        return health;
    }
    void sethealth(int h){
        health=h;

    }

};
int main(){
    hero aaah(70,'d');
    aaah.print();
    hero r(aaah);
    r.print();

    return 0;
}*/

// #include<string>
//  class hero{
//      private:

//     int health;
//     public:
//     char level;
//     char *name;
//     //default
//     hero(){
//         cout<<"default"<<endl;
//     }
//     //parametric
//     hero(int health ,char level){
//         this->level = level;   //parametric constructor
//         this->health = health;
//     }
//     //copy
//     hero(hero &temp){
//         cout<<"copy "<<endl;
//         this ->health=temp.health;
//         this ->level=temp.level;

//     }
//     void print(){
//         cout<<"health"<<this->health<<endl;
//         cout<<"level"<<this->level<<endl;
//         cout<<"name"<<this ->name<<endl;
//     }

//     int gethealth(){
//         return health;
//     }
//     void sethealth(int h){
//         health=h;

//     }

//     void setname(char name[]){
//         strcpy(this ->name,name);
//     }

// };
// int main(){
//     hero aaah(70,'d');
//     char name[100]="anurag";
//     aaah.setname(name);
//     aaah.print();
//     hero r(aaah);
//     r.print();

//     return 0;
// }

// class bin{
//     public:
//     string s;

//     void read(){
//         cout<<"take a no: "<<endl;
//         cin>>s;
//     }
//     void chkbin(){
//         cout<<"yes - "<<s<<endl;

//     }
// };

// int main(){
//     bin b;
//     b.read();
//     b.chkbin();
// }

// array
/*class array{
    public:
    int item[100];
    int price[100];
    int c=0;
    int d;
    void read(){
        cin>>d;
        {
            while(c<d){
                cout<<"the item no is"<<endl;
                cin>>item[c];
                cout<<"the price is"<<endl;
                cin>>price[c];
                c++;


            }
        }

    }
    void disp(){
        for(int i=0;i<d;i++){
            cout<<"item "<<item[i]<<"price"<<price[i]<<endl;
        }
    }

};
int main(){
    array a;
    a.read();
    a.disp();
}*/
// complex number

#include <cstdlib>
/*using namespace std;
class complex{
    public:
    int a;
    int b;
    void read(){
        cout<<"the nos are"<<endl;
        cin>>a>>b;
    }
    void disp(complex a1,complex a2){
        a=a1.a+a2.a;
        b=a1.b+a2.b;
    }
    void printnum(){
        if(b>0){
            cout<<"the sum is"<<a<<"+"<<"i"<<b<<endl;

        }else{
            cout<<"the sum is"<<a<<"-"<<"i"<<abs(b)<<endl;
        }

    }

};

int main(){
    complex c1,c2,c3;
    c1.read();
    c2.read();
    c3.disp(c1,c2);
    c3.printnum();
}*/

/*class complex{
    public:
    int a;
    int b;
    void read(){
        cout<<"the nos are"<<endl;
        cin>>a>>b;
    }
    //void disp(complex a1,complex a2){
    //    a=a1.a+a2.a;
    //    b=a1.b+a2.b;
    //}
    friend complex s(complex o1,complex o2);
    void printnum(){
        if(b>0){
            cout<<"the sum is"<<a<<"+"<<"i"<<b<<endl;

        }else{
            cout<<"the sum is"<<a<<"-"<<"i"<<abs(b)<<endl;
        }

    }
};

complex s(complex o1,complex o2){
    complex o3;
    o3.disp((o1.a+o2.a),(o1.b+o2.b));
    return o3;

}
int main(){
    complex c1,c2,s;
    c1.read();
    c2.read();
    s.disp();
    s.printnum();
    return 0;
}*/

/*class complex;
class cal{
    public:
    // int add(int a,int b){

    //     return a+b;
    // }
    int sumreal(complex,complex);

};
class complex{
    public:
    int a,b;
    void read(){
        cout<<"nos are"<<endl;
        cin>>a>>b;

    }
    friend int cal :: sumreal(complex,complex);

};
int cal :: sumreal(complex o1,complex o2){
    return (o1.a+o2.a);
}
int main(){
    complex o1,o2;
    o1.read();
    o2.read();
    cal c;
    int res=c.sumreal(o1,o2);
    cout<<"the sum is"<<res<<endl;

}*/

/*class toolbooth{
    public:
    float c=0.00;
    int d=0;
    float payingcar(){
        c=c+1;
        return c;

    }
    int nopaycar(){
        d++;
        return d;


    }
    void display(){
        cout<<"amt paid is:"<<endl;
        cout<<setprecision(3)<<c;
        cout<<"cars crossed is:"<<endl;
        cout<<d;

    }
};
int main(){
    toolbooth t;
    int n;
    while(n!=3){
        cout<<"in:"<<endl;
        cin>>n;
        if(n==-1){
            cout<<"end"<<endl;
            break;
        }

        else if(n==1){
            t.payingcar();
        }
        else if(n==2){
            t.nopaycar();

        }else{
            t.display();
        }

    }




}*/
// static member
/*class emp{
    int id;
    static int count;
    public:
    void setdata(){
        cout<<"give id"<<endl;
        cin>>id;
        count++;
    }
    void getdata(){
        cout<<"the id of"<<" "<<count<<" "<<"is"<<id<<endl;

    }
    static void getcount(){
        cout<<"count is "<<" "<<count<<endl;
    }

};
int emp::count;
int main(){
    emp a,s;
    a.setdata();
    a.getdata();
    emp::getcount();
    s.setdata();
    s.getdata();
    emp::getcount();
    return 0;
}*/

// friend class function
/*class complex;
//friend class
class calculator{
    public:
    int add(int a,int b){
        return a+b;
    }
    int sumreal(complex o1,complex o2);
    int sumcom(complex o1,complex o2);
};
class complex{
    public:
    int a;
    int b;
    //individually calling a particular part of class calculator
    //friend int calculator :: sumreal(complex o1,complex o2);
    friend class calculator;
    int setdata(){
        cin>>a>>b;
    }
};
int calculator :: sumreal(complex o1,complex o2){
    return (o1.a+o2.a);
}
int calculator :: sumcom(complex o1,complex o2){
    return (o1.b+o2.b);
}
int main(){
    complex o1,o2;
    o1.setdata();
    o2.setdata();
    calculator cal;
    cal.sumreal(o1,o2);
    cal.sumcom(o1,o2);
    cout<<"real part is: "<<cal.sumreal(o1,o2)<<endl;
    cout<<"com part is: "<<cal.sumcom(o1,o2)<<endl;
}*/

// class function
/*class x;
class y;
class x{
    int a;
    public:
    int setdata1(){
        cin>>a;
    }
    int getdata1(){
        cout<<a;
    }
    friend int swap(x& x1,y& y1);
};
class y{
    int b;
    public:
    int setdata2(){
        cin>>b;
    }
    int getdata2(){
        cout<<b;
    }
    friend int swap(x& x1,y& y1);
};


int swap(x& x1,y& y1){
    int t=x1.a;
    x1.a=y1.b;
    y1.b=t;

}
int main(){
    x a1;
    y b1;
    a1.setdata1();
    b1.setdata2();
    a1.getdata1();
    b1.getdata2();
    swap(a1,b1);
    a1.getdata1();
    b1.getdata2();
}*/

/*class x;
class y;
class swap{
    public:
    static int swap2(x& x1,y& y1);
};
class x{
    int a;
    public:
    int setdata1(){
        cin>>a;
    }
    int getdata1(){
        cout<<a;
    }
    friend class swap;
};
class y{
    int b;
    public:
    int setdata2(){
        cin>>b;
    }
    int getdata2(){
        cout<<b;
    }
    friend class swap;
};


int swap :: swap2(x& x1,y& y1){
    int t=x1.a;
    x1.a=y1.b;
    y1.b=t;

}
int main(){
    x a1;
    y b1;
    a1.setdata1();
    b1.setdata2();
    a1.getdata1();
    b1.getdata2();
    swap :: swap2(a1,b1);
    a1.getdata1();
    b1.getdata2();
}*/

// construction  (input is fixed)
/*class com{
    int a,b;
    public:
    com(int x,int y){

        a=x;
        b=y;
    }

    void printsum(){
        cout<<"sum is"<<a<<","<<b<<endl;
    }
};

int main(){
    com a1(5,7);
    a1.printsum();
    com b1(52,70);
    b1.printsum();

}*/
// taking input form user
/*class com{
    int a,b;
    public:
    com(){

        cin>>a>>b;
    }

    void printsum(){
        cout<<"point is"<<a<<","<<b<<endl;
    }
};

int main(){
    com a1;
    a1.printsum();
    com b1;
    b1.printsum();

}*/
// initialization of objects using cons
/*class bank{
    int principal;
    int years;
    float roi;
    float returnval;
    public:
    bank(int p,int y,int r);
    bank(int p,int y,float r);
    void show(){
        cout<<"amout is"<<returnval<<endl;
    }


};
bank :: bank(int p,int y,int r){
    principal =p;
    years=y;
    roi=r;
    returnval=principal;
    for(int i=0;i<y;i++){
        returnval=returnval*(1+roi);
    }
}
bank :: bank(int p,int y,float r){
    principal =p;
    years=y;
    roi=r/100;
    returnval=principal;
    for(int i=0;i<y;i++){
        returnval=returnval*(1+roi);
    }
}
int main(){
    int p,y;
    int r;
    float R;
    cin>>p>>y>>r;
    bank b1(p,y,r);
    b1.show();

}*/

// copy
/*class no{
    int a;
    public:
    no(int n){
        a=n;
    }
    no(no &pj){
        a=pj.a;
    }
    void print(){
        cout<<"no is  "<<a<<endl;
    }
};
int main(){
    no x(5);
    no z(x);
    z.print();

}*/
/*#include<string>
class check;
class binary{

    public:
    string n;
    void setnum(){

        cin>>n;
    }
    friend class check;


};
class check{
    public:

    int c=0;
    void check1(){


        for (int i=0;i<n.length;i++){
            if(n[i]!='1'|| n[i]!='0'){
                c=1;
            }
            else{
                continue;
            }
        }
    }
    void print(){


        if(c==0){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"nope";
        }
    }
};
int main(){
    binary b;
    b.setnum();
    check ch;
    ch.print();

}*/

/*#include <iostream>
using namespace std;

class binary;
class check{
    void check_num(binary  b);
};

class binary {
public:
    string n;

    void setnum() {
        cin >> n;
    }

    friend class check;
};

void check :: check_num(binary b){
    for(int i=0;i<b.n.length();i++){
        if (b.n[i] != '0' || b.n[i] != '1') {
            cout << "Not a binary number." << endl;
        }
        else{
            cout<<"vn"<<endl;
        }
    }

};

int main() {
    binary b1;
    b1.setnum();

    //ch.n = b.n;
    check ch;
    ch.check_num(b1);

    return 0;
}
*/

//IPS -friend function

/*class duplicate;
class original{
    int n;
    int arr[50];
    string name[50];
    public:
    void setnum(){
        cin>>n;
        
        
    }
    friend class duplicate;

};
class duplicate{
    public:
    void setdata(original& o){
        
        for(int i=0;i<o.n;i++){
            cin>>o.arr[i];
        }
        for(int i=0;i<o.n;i++){
            cin>>o.name[i];
        }

    }
    void arrange(original& o){
        string name1;
        for(int j=0;j<o.n;j++){
            for(int k=j+1;k<o.n;k++){
                if(o.name[j]>o.name[k]){
                    name1=o.name[j];
                    o.name[j]=o.name[k];
                    o.name[k]=name1;
                }
        
        
            }
        }
        cout<<"theay are::"<<endl;
        for(int i=0;i<o.n;i++){
            cout<<o.name[i]<<endl;
        }
        int max=0;
        int min=1000;
        float sum=0.0;
        for(int i=0;i<o.n;i++){
            if(max<o.arr[i]){
                max=o.arr[i];
            }
            if(min>o.arr[i]){
                min=o.arr[i];
            }
            sum=sum+o.arr[i];
        }
        
        cout<<"max is: "<<max<<endl;
        cout<<"min is: "<<min<<endl;
        cout<<"avg is:"<<float(sum/o.n)<<endl;
    }

};
int main(){
    original o;
    o.setnum();
    duplicate d;
    d.setdata(o);
    d.arrange(o);
}*/

//friend function 
/*class original{
    float a;
    float carea;
    float sarea;
    public:
    void setdata(){
        cin>>a;
        // carea=3.14*a*a;
        // sarea=a*a;
    }
    friend void show(original);


};
void show(original o){
    o.carea=3.14*o.a*o.a;
    o.sarea=o.a*o.a;
    cout<<"area is:"<<o.carea<<endl;
    cout<<"square area :"<<o.sarea;
};
int main(){
    original o;
    o.setdata();
    show(o);
    
}*/
//operation overloading
/*class base{
    float lat;
    float longi;
    public:
    
    void setdata(float a,float b){
        lat=a;
        longi=b;

    }
    base operator-(base b){
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
    b3=b1-b2;
    b3.print();
}*/

//comparing two strings
// class Compare{
//     string s1;
//     public:
    
//     void setdata1(string a){
//         s1=a;
        

//     }
   

//     Compare operator==(const Compare& c){
//         if(s1.length()==c.s1.length()){
//             cout<<"yeah";
//         }else{
//             cout<<"nope";
//         }
        
//     }
// };
// int main(){
//     string a1,b1;
//     Compare c1;
//     cin>>a1;
//     c1.setdata1(a1);

//     Compare c2;
//     cin>>b1;
//     c2.setdata1(b1);
//     c1==c2;
// }


//IPS
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
    
    if(c==a){
        cout<<b<<" and "<<z<<endl;
    }else{
        cout<<a<<" and "<<x<<endl;
    }
    duty d3;
    d3=du2+du1;
    d3.print();
}*/

/*class area1{
    int a,b,c;
    public:
    void sqarea(int a){
        cout<<a*a;
    }
    void sqrec(int a,int b){
        cout<<a*b;
    }
    void sqarea(int a,int b){
        cout<<(a+b);
    }
};
int main(){
    area1 al;
    int x,y;
    string n;
    cin>>x>>y;
    cin>>n;
    if(n=="anurag"){
        al.sqarea(x);
    }
    else if(n=="sourav"){
        al.sqarea(x,y);
    }else{
        al.sqrec(x,y);
    }

}*/


void sqarea(int a){
    cout<<a*a;
}
void sqrec(int a,int b){
    cout<<a*b;
}
void sqarea(int a,int b){
    cout<<(a+b);
}

int main(){
    
    int x,y;
    string n;
    cin>>x>>y;
    cin>>n;
    if(n=="anurag"){
        sqarea(x);
    }
    else if(n=="sourav"){
        sqarea(x,y);
    }else{
        sqrec(x,y);
    }

}