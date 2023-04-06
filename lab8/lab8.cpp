#include <iostream>
#include <string.h>
using namespace std;


class Person{
	protected:
		string name;
		int age;
	
	public:
		Person(){
			name ="Hager";
			age=22;
		}
		Person(string n , int a){
			name =n;
			age=a;
		}
		
		void setName(string n){ name=n;}
		void setAge(int a){ age=a;}
		
		string getName(){return name;}
		int getAge(){return age;}
		
		virtual int getSalary()=0;
		
};


class Employee : public Person {
	protected:
		int id;
		char dept;
		int salary;
	
	public:
		Employee(){}
		Employee(int i ,char d, string n , int a) : Person(n,a){
			id=i;
			dept = d;
			getSalary();
		}
		
		void setId(int d){id =d;}
		int getId(){
			return id;
		}
		
		void setDept(char d){dept =d;}
		char getDept(){
			return dept;
		}
		
		int getSalary(){
			switch(dept){
				case 'A' :
					salary=4000;
					return salary;
					break;
				case 'B' :
					salary=6000;
					return salary;
					break;
				case 'C' :
					salary=8000;
					return salary;
					break;	
	
			}
		}


};

class Manager : public Employee{
	
	public:
		Manager(){}
		Manager(int i ,char d, string n , int a) : Employee(i,d,n,a){
		}
		int getSalary(){
			return salary *2;
		}
	
};

void allSalary(Person *p1,Person *p2,Person *p3, Person *p4){
	int total =0;
	
	cout<<"\n\t"<<p1->getName()<<" :\t"<<p1->getSalary();
	cout<<"\n\t"<<p2->getName()<<" :\t"<<p2->getSalary();
	cout<<"\n\t"<<p3->getName()<<" : "<<p3->getSalary();
	cout<<"\n\t"<<p4->getName()<<" :\t"<<p4->getSalary();
	
	total = p1->getSalary() + p2->getSalary() + p3->getSalary() + p4->getSalary(); 
	
	cout<<"\n\n\tTotal : "<<total;
}

int main(){

	Employee e1(1,'B',"Hager",22);
	Employee e2(2,'A',"Ali",20);
	
	Manager m1(3,'C',"Mohamed",40);
	Manager m2(4,'A',"Ahmed",50);
	
	cout<<"==>ALL Salary :\n";
	allSalary(&e1,&e2,&m1,&m2);
	
	Person *p1;
	p1=&m1;
	cout<<"=======";
	cout<<p1->getSalary()<<endl;
	cout<<p1->Employee::getSalary();


}
