#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
class Complex
{
int Real, Imag;
static int Count;
public:
Complex()
{Real = Imag = 2;
Count++;}
Complex(int m)
{Real = Imag = m;
Count++;}
Complex(int m, int n)
{Real = m; Imag = n;
Count++;}
~Complex()
{Count--;}
void SetR(int m)
{Real = m;}
void SetI(int n)
{Imag = n;}
int GetR(){return Real;}
int GetI(){return Imag;}
static int GetCount()
{return Count;}
};

int Complex:: Count =0;

int main(){
	
//	Complex cpl1[4];
//	Complex cpl2[4] = {3, 5, 2, 7};
//	Complex cpl3[3] = {Complex(3, 4), Complex(7)};
	Complex *pC;
//	pC = new (Complex); //Default Constructor
//	pC = new Complex(4, 8); //Parametrized constructor
	pC = new Complex[4]; //Allocate 4 object
	cout<< pC[1].GetR();
	cout<< pC[3].GetR();
	delete []pC;
}
