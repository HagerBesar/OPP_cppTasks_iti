#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

class Employee{
	private:
		int id;
		char* name;
		int salary;
		char* companyName;
		static int count;
		
	public :
		//Default Cons
		Employee(){
		id=1;
		name = new char[40];
		strcpy(name,"hager");
		salary=5000;
		companyName = new char[40];
		strcpy(companyName,"comp1");
		count++;
		}
		
		///Parametrized Cons
		Employee(int i,char n[40],int s){
			id=i;
			name = new char[40];
			strcpy(name,n);
			companyName = new char[40];
			strcpy(companyName,"cmp1");
			salary=s;	
			count++;
		}	
		
		///Parametrized Cons
		Employee(int i,char n[40],char c[40],int s){
			id=i;
			name = new char[40];
			strcpy(name,n);
			companyName = new char[40];
			strcpy(companyName,c);
			salary=s;
			count++;	
		}		
		
		void setComp(char n[40]){
			companyName=n;
		}
		char* getComp(){
			return companyName;
		}
		
		int getid(){return id;}
		
		static int getCount(){
			return count;
		}
		void PrintEmp();
		~Employee(){
			count--;
			delete name; 
			delete companyName; 
			 
		}
	
};
int Employee:: count=0;
int main(){
	
	Employee e1;
	Employee e2(2,"reem","comp2",5000);
	
	cout<<"=>  Emp1 \n";
	e1.PrintEmp();
	cout<<"=>  Emp2 \n";
	e2.PrintEmp();
	
	cout<<"\nCount of Employee = "<<Employee::getCount()<<endl;
	Employee e[3]={Employee(3,"Ahmed",4000),Employee(4,"emp4","comp3",8000)};
	
	cout<<"\nArray of 3 Employee : \n\n";
	for(int i=0 ; i<3 ;i++){
		cout<<"=>  Emp"<<i+1<<endl;
		e[i].PrintEmp();
	}
	cout<<"\nCount of Employee = "<<Employee::getCount()<<endl;
	return 0;
}

void Employee::PrintEmp(){
	cout<<"\tID = "<<id;
	cout<<"\n\tName = "<<name;
	cout<<"\n\tcompany Name = "<<companyName;
	cout<<"\n\tSalary = "<<salary<<endl;
}
