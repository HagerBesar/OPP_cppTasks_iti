#include <iostream>
#include <string.h>
using namespace std;
class Employee{
	int id;
	char*  name;
	int salary;
	public :
		//Default Cons
		Employee(){
		id=1;
		name = new char[20];
		strcpy(name,"hager");
		salary=5000;
		}
		///Parametrized Cons
		Employee(int i,char n[20],int s){
			id=i;
			name = new char[20];
			strcpy(name,n);
			salary=s;	
		}
		Employee(int i,char n[20]){
			id=i;
			name = new char[20];
			strcpy(name,n);
			salary=2000;	
		}
		//copy Cons
		Employee(Employee &e){
			id=e.id;
			name = new char[20];
			strcpy(name,e.name);
			salary=e.salary;
		}
		
		
		Employee FillEmp(int i,char* n,int sal){
			id=i;
			name = new char[20];
			strcpy(name,n);
			salary=sal;	
			Employee e;
			return e;
		}
		
//		Employee FillEmp(int i,char* n,int sal){
//			Employee e(i,n,sal);
//			return e;
//		}
		
		void PrintEmp();
		
		~Employee(){
			delete name;          
			cout<<"\ndelete name\n";
		}
	
};

int main(){
	Employee e1;
	
	Employee e2(2,"reem",5888);
	
	Employee e3(e1);//COPY
	
	Employee e4;
	
	e4.FillEmp(4,"emp4",3000);
	
	
	cout<<"Emp1\n";
	e1.PrintEmp();
	cout<<"\nEmp2\n";
	e2.PrintEmp();
	cout<<"\nCopy E1 TO Emp3\n";
	e3.PrintEmp();
	cout<<"\nEmp4\n";
	e4.PrintEmp();
	return 0;
}

void Employee::PrintEmp(){
	cout<<"id = "<<id;
	cout<<"\nName = "<<name;
	cout<<"\nSalary = "<<salary<<endl;
}
