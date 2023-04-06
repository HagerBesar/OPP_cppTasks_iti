#include<iostream>
using namespace std;
class Employee {
	private:
		int id;
		char *name;
		int salary;
	public:
		void setEmp(int d, char *n , int s);
		void getEmp();
};
int main(){

	Employee emp;
	emp.setEmp(1,"hager",4000);
	emp.getEmp();
	return 0;
}
void Employee::setEmp(int d, char *n , int s){
		id =d;
		name=n;
		salary=s;
}
void Employee::getEmp(){
	cout<<"id = "<<id;
	cout<<"\nName = "<<name;
	cout<<"\nSalary = "<<salary;
}
//Employee Employee::getEmp(){
//	Employee temp;
//	temp.id =id;
//	temp.name=name;
//	temp.salary=salaryl
//	return temp;
//}