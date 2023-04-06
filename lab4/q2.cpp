#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

class Employee{
	private:
		int id;
		char* name;
		int salary;
		
	public :
		//Default Cons
		Employee(){
			id=1;
			name = new char[40];
			strcpy(name,"hager");
			salary=5000;
		}
		
		///Parametrized Cons
		Employee(int i,char n[40],int s){
			id=i;
			name = new char[40];
			strcpy(name,n);
			salary=s;	
		}		
		
		//	Emp + Emp 
		Employee operator +(Employee e){
			Employee temp;
			temp.id= id + e.id;
			strcpy(temp.name,name);
			strcat(temp.name," ");
			strcat(temp.name,e.name);
			temp.salary=salary + e.salary;
			return temp;
		}
		
		// Emp+1000
		Employee operator+(int n){
			Employee temp;
			temp.id= id ;
			strcpy(temp.name,name);
			temp.salary=salary + n;
			return temp;
		}
		
		// Emp+"Ahmed"
		Employee operator+(char n[40]){
			Employee temp;
			temp.id= id;
			strcpy(temp.name,name);
			strcat(temp.name," ");
			strcat(temp.name,n);
			temp.salary=salary;
			return temp;
		}
		
		// (int)Emp => returns Employee id
		operator int(){
			return id;
		}
		// (char *)Emp => returns Employee name
		operator char*(){
			return name;
		}
		
		friend Employee operator+(int m, Employee e); // 1000 +Emp
		friend Employee operator+(char n[40], Employee e); // "Ahmed"+Emp
		void PrintEmp();
		~Employee(){
//			cout<<"\ndelete name => "<<name<<endl;
			delete name;  
		}
};


Employee operator+(int m, Employee e); // 1000 +Emp
Employee operator+(char n[40], Employee e); 
int main(){
	

	Employee e1(1,"Hager",3000);
	Employee e2(2,"Mohamed",4000);
	cout<<"=>  Emp1 \n";
	e1.PrintEmp();
	cout<<"=>  Emp2 \n";
	e2.PrintEmp();
	cout<<"Press Enter to start .... \n";
	getch() ;
	//	Emp + Emp 
	Employee e3 = e1 + e2;
	cout<<"\n\n=> Emp3 = Emp1 + Emp2 \n";
	e3.PrintEmp();
	
	cout<<"\nPress Enter .... \n";
	getch() ;
	
	// 1000 + Emp
	e1= 1000 + e1;
	cout<<"\n\n=> 1000 +Emp1 \n";
	e1.PrintEmp();
	
	cout<<"\nPress Enter .... \n";
	getch() ;
	
	// Emp+1000
	e2= e2 + 1000;
	cout<<"\n\n=> Emp2 + 1000  \n";
	e2.PrintEmp();
	
	cout<<"\nPress Enter .... \n";
	getch() ;
	
	// "Ahmed" + Emp
	e2= "Ahmed" + e2 ;
	cout<<"\n\n=> Ahmed + Emp2 \n";
	e2.PrintEmp();
	
	cout<<"\nPress Enter .... \n";
	getch() ;
	
	// Emp+"Ahmed"
	e1= e1 + "Ahmed";
	cout<<"\n\n=> Emp1 + Ahmed  \n";
	e1.PrintEmp();
	
	cout<<"\nPress Enter .... \n";
	getch() ;
	
	// (int)Emp => returns Employee id
	cout<<"\n\n=> (int)Emp  \n";
	cout<<"Employee1 id = "<< (int)e1;
	
	cout<<"\nPress Enter .... \n";
	getch() ;
	
	// (char *)Emp => returns Employee name
	cout<<"\n\n=> (char *)Emp  \n";
	cout<<"Employee1 name = "<< (char *)e1;
	getch() ;

	return 0;
	
}
// 1000 +Emp
Employee operator+(int m, Employee e)
{
	Employee temp;
	temp.id= e.id;
	strcpy(temp.name,e.name);
	temp.salary = e.salary + m;
	return temp;
}


Employee operator+(char n[40], Employee e)
{
	Employee temp;
	temp.id= e.id;
	strcpy(temp.name,n);
	strcat(temp.name," ");
	strcat(temp.name,e.name);
	temp.salary=e.salary;
	return temp;
}


void Employee::PrintEmp(){
	cout<<"\tID = "<<id;
	cout<<"\n\tName = "<<name;
	cout<<"\n\tSalary = "<<salary<<endl;
}



