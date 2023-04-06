#include <iostream>
using namespace std;

inline  void sum(int x, int y);
inline void sum(int x, int y,int z);
void sum(double x, double y,double z);

int main(){
	
	sum(4,6);
	sum(4,6,5);
	sum(4.2, 6.2 , 5.2);
	return 0;
}

inline void sum(int x, int y){
	
	cout<<"x+y = "<<x+y<<endl;
}


void sum(int x, int y,int z){
	cout<<"x+y+z = "<<x+y+z<<endl;
}

void sum(double x, double y,double z){
	cout<<"x+y+z = "<<x+y+z<<endl;
}



