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


class Circle{
	Point *p1 , *p2;
	int radius;
	public :
		Circle(){
			p1 = p2 = NULL;
			radius=0;
		}
		
		Circle(Point *pa ,Point *pb ){
			p1= pa;
			p2=pb;
			if(pa != NULL && pb != NULL){
				radius = sqrt( pow( p1->getX() - p2->getX(),2) + pow( p1->getY()- p2->getY(),2) );
			}else{
				radius=0;
			}
		}
		
		
		
		void setP1(int x,int y){
			p1->setX(x);
			p1->setY(y);
			radius = sqrt( pow( p1->getX() - p2->getX(),2) + pow( p1->getY()- p2->getY(),2) );
		}
		
		void setP2(int x,int y){
			p2->setX(x);
			p2->setY(y);
			radius = sqrt( pow( p1->getX() - p2->getX(),2) + pow( p1->getY()- p2->getY(),2) );
		}
		
		int getRadius(){
			return radius;
		}
		
		void setPa(Point *pa  ){
			p1= pa;
			if(pa != NULL){
				radius = sqrt( pow( p1->getX() - p2->getX(),2) + pow( p1->getY()- p2->getY(),2) );
			}else{
				radius=0;
			}
		}
		void setPb(Point *pb  ){
			p1= pb;
			if(pb != NULL){
				radius = sqrt( pow( p1->getX() - p2->getX(),2) + pow( p1->getY()- p2->getY(),2) );
			}else{
				radius=0;
			}
		}
		
		
	
	
};


int main(){
	Point pa(4,8);
	Point pb(12,20);
	Circle c1(&pa,&pb);
	
	cout<<" Circle radius1 = "<<c1.getRadius()<<endl;
	c1.setP1(40,30);
	cout<<" Circle radius2 = "<<c1.getRadius()<<endl;
	return 0;
}
