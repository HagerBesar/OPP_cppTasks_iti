#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

class Complex
{
int real, imag;
public:
Complex()
{real = imag = 0;}
Complex(int m)
{real = imag = m;}
Complex(int r, int i)
{real = r;
imag = i; }
void SetR(int r){real = r;}
void SetI(int i){imag = i;}
int GetR(){return real;}
int GetI(){return imag;}
Complex operator+(Complex C);
Complex operator+(int m);
Complex operator++();
Complex operator++(int d);
int operator==(Complex C);
Complex& operator=(Complex C);
friend Complex operator+(int m, Complex C);
};


int main()
{
Complex cpl1, cpl2(2,2), cpl3(3, 1), cpl4(4,1);


cpl1 = cpl2 + cpl3 + cpl4;
cpl1 = cpl2 + 7;
cpl2 = ++cpl1; //Pre
cout <<cpl2.GetR()<<endl;
cout <<cpl1.GetR()<<endl;
cpl1 = cpl2++; //Post
cout <<cpl1.GetR()<<endl;
cout <<cpl2.GetR()<<endl;
int i= cpl1 == cpl2;
cout <<i<<endl;
//cpl2 + cpl3
//cpl1 = cpl2;
//cpl1 = 7 + cpl2;
}


Complex Complex::operator+(Complex C)
{ Complex temp;
temp. real = real + C.real;
temp.imag = imag + C.imag;
return temp;
}

Complex& Complex::operator=(Complex C)
{ real = C.real;
imag = C.imag;
return *this;
}
Complex Complex::operator+(int m)
{ Complex temp;
temp.real = real + m;
temp.imag = imag;

return temp;
}
Complex Complex::operator++()
{
real++;
imag++;
return *this;
}

Complex Complex::operator++(int d)
{
Complex old;
old = *this;
real++;
imag++;
return old;
}

int Complex::operator==(Complex C)
{
return(real==C.real && imag==C.imag);
}

