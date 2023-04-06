#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

class person{
	protected:
		int id ;
		char* name;
	
	public :
		person(){
			id=1;
			name= new char[20];
			strcpy(name,"hager");
		}
		
		person(int i, char*n){
			id=i;
			name= new char[20];
			strcpy(name,n);
		}
		
		void setId(int i){ id=i;}
		void setName(char* n){name=n;}
		
		int getId(){ return id;}
		char* getName(){return name;}
		
		void Print(){
			cout<<"\tID = "<<id;
			cout<<"\n\tName = "<<name;
		}
		~person(){
			delete name;
		}
};


class Employee : public person{
	private:
		int salary;
	
	public:
		
		Employee (int i,char* n,int s):person(i , n){
			salary =s;
		}
		
		void setSalary(int i){ salary=i;}
		int getSalary(){ return salary;}
		void Print(){
			person::Print();
			cout<<"\n\tSalary = "<<salary<<endl;
		}
		
		
		~Employee(){
		}
		
		
	
};

int main(){
	
	
	Employee e(1,"hager",4000);
	
	cout<<"Print Employee :"<<endl;
	e.Print();
	
	cout<<"\nPrint person :"<<endl;
	e.person::Print();
	
	
}




//void person::Printp(){
//	cout<<"\tID = "<<id;
//	cout<<"\n\tName = "<<name;
//	
//}
//
//void Employee::PrintEmp(){
//	cout<<"\tID = "<<id;
//	cout<<"\n\tName = "<<name;
//	cout<<"\n\tSalary = "<<salary<<endl;
//}
