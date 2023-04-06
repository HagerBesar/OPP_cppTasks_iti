#include <iostream>
#include <string>
using namespace std;
int x =4;
int main(){
	int x;

	cout<<"local = ";
	cin>>x;
	cout<<"global =";	
	cin>>::x;
	cout<<"\nlocal = "<<x<<endl;
	cout<<"global ="<<::x;
	
	return 0;
}
