#include <iostream>
#include <string.h>
#include <conio.h>
#include <math.h>
using namespace std;
class Point{
	int x, y;
	public :
		Point(){
			x=y=0;
		}
		Point(int n ,int m){
			x=n;
			y=m;
		}
		void setX(int m){
			x=m;
		}
		
		void setY(int n){
			y=n;
		}
		int getX(){return x;}
		int getY(){return y;}
		
};
class Rectangle{
	Point *pa , *pb;
	int length, width;
	public :
		Rectangle(){
			pa = pb = NULL;
			length = width =0;
		}
		
		Rectangle(Point *p1 ,Point *p2 ){
			pa= p1;
			pb=p2;
			if(pa != NULL && pb != NULL){
				length = abs(pa->getX()- pb->getX());
				width = abs(pa->getY() - pb->getY());
			}else{
				length = width =0;
			}
		}
		
		int area(){
			return length*width;
		}
	
	
};

int main(){
	Point pa(4,8);
	Point pb(12,20);
	Rectangle r1(&pa,&pb);
	
	cout<<" Rectangle Area = "<<r1.area();
	return 0;
}
