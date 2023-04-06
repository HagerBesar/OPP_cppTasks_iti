#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

class Base{ 
	protected:
		int z;
	public:
		Base(){z = 1;}
		Base(int m){z = m;}     //z=5  //z=6
//		int Getz(){return z;}

};
class Base1 : virtual public Base{ 
	protected:
	int x;
	public:
	Base1(){x = 0;}
	Base1(int m, int n) : Base(m) {x = n;} // B= 6  x=7
	void SetX(int m){x = m;}
	int GetX(){return x;}
};
class Base2 :  public Base{
	protected:
		int y;
	public:
		Base2(){y = 0;}
		Base2(int m, int n) : Base(m) {y = n;} //  B=>5   y=6
		void SetY(int m){y = m;}
		int GetY(){return y;}
};
class Derived: public Base1, public Base2{
	public:
		Derived(int l, int m, int n):Base1(l,m), Base2(m,n){} // 1=> 5,6   2=> 6,7
		int Sum(){return (x + y + Base2::z);}
		int Product(){return (x * y * Base1::z);}
};


int main()
{
	Derived obj(5, 6, 7);
	cout<<"Sum = "<<obj.Sum()<<endl;
	cout<<obj.Product();
}
