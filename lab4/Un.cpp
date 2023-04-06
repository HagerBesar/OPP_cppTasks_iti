#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

class Stack
{ private:
int *ar;
int size;
int tos;
public:
int Push(int x);
int Pop();
Stack(int s)//Parametrized
{ size = s;
ar = new int[size];
this->tos = 0;
}
Stack() //Default
{ size = 5;
ar = new int[size];
tos = 0;
}
~Stack(){ delete ar;}
int GetSize(){ return size;}
int GetTOS(){ return tos;}
Stack(Stack &rst);
};

Stack FillStack();
void PrintStack(Stack stk);

int main()
{
Stack st;
st = FillStack();
PrintStack(st);
return 0;
}

int Stack::Push(int x)
{ int retval = 0;
if(tos < size)
{ ar[tos] = x;
tos++;
retval = 1;
}
return retval;
}


int Stack::Pop()
{ int retval = -1;
if(tos > 0)
{ tos--;
retval = ar[tos];
}
return retval;
}

Stack FillStack()
{ Stack stk;
int x;
for(int i = 0 ; i <stk.GetSize() ; i++)
{
cin>>x;
stk.Push(x);
}
return stk;
}

void PrintStack(Stack stk)
{
	int s=stk.GetTOS();
for(int i = 0 ; i < s;i++)
{ cout<<stk.Pop();
cout<<"\n top "<<stk.GetTOS()<<endl;
}
}


Stack::Stack(Stack& rst)
{ tos = rst.tos;
size = rst.size;
ar = new int[size];
for(int i = 0 ; i < size ; i++)
{ ar[i] = rst.ar[i]; }
}
