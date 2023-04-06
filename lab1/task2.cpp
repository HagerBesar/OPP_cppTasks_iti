#include <iostream>
#include <string>
using namespace std;
float area(float w=2,float h=4);
int main(){

	cout<<area()<<endl;
	cout<<area(3)<<endl;
	cout<<area(3,6)<<endl;

}

float area(float w ,float h){
	return w*h;
}
