#include <iostream>

using namespace std;

class Base{
    protected:
        int x, y;
    public:
        Base(){x=y=0;}
        Base(int m){x=y=m;}
        Base(int m, int n){x = m; y = n;}

        void SetX(int m){x = m;}
        void SetY(int n){y = n;}
        int GetX(){return x;}
        int GetY(){return y;}

        virtual int Product(){
            return (x * y);
        }

};


class Derived1 : public Base{
    protected:
        int a;
    public:
        Derived1() {a = 0;}
        Derived1(int l, int m, int n):Base(l, m)
        {a = n;}
        void SetA(int m){a = m;}
        int GetA(){return a;}
        int Product(){
            return (x * y * a);
        }
};

class Derived2 : public Derived1{
    protected:
        int b;
    public:
        Derived2(){b = 0;}
        Derived2(int l, int m, int n, int p):Derived1(l,m,n)
        {b = p;}

        void SetB(int m){b = m;}
        int GetB(){return b;}

        int Product(){
            return (x * y * a * b);
        }
};
void Print(Base* p){
    cout<<p->Product()<<endl;
}

int main()
{
    Derived2 obj(3, 4, 5, 6);

    Base* pb;
    pb = &obj;
    cout<<pb->Product(); //x*y*a*b

    Print(&obj);  //x*y*a*b

    Derived1 drv(10, 20, 30);
    Print(&drv);  //x*y*a

    Base b(7, 6);
    Print(&b); //x*y*

    return 0;
}
