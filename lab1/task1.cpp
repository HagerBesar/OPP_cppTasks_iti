#include <iostream>
#include <string>
using namespace std;

struct Employee {
	int ID;
	string Name;
	int Salary;
};

int main(){
	Employee *emp;
	int count;
	cin>>count;
	emp= new Employee[count];
	for (int i=0;i<count;i++){
		cout<<"Employee "<<i+1<<endl;
		cout<<"enter id : ";
		cin>>emp[i].ID;
		cout<<"enter name : ";
		cin>>emp[i].Name;
		cout<<"enter salary: ";
		cin>>emp[i].Salary;
	}
	
	for(int i=0;i<count;i++){
		cout<<"\nEmployee "<<i+1<<endl;
		cout<<"ID : "<<emp[i].ID<<endl;
		cout<<"Name : "<<emp[i].Name<<endl;
		cout<<"Salary: "<<emp[i].Salary<<endl;
	}
	
}
