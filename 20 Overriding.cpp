#include <iostream>

using namespace std;

 class Shape{
	
	public:
		 virtual void area(){
		 	cout<<"\nshape area";
		 };
};

class Circle : public Shape{

	public:
		void area(){
			cout<<"\n circle area..";
		}
	
};

class Triangle : public Shape{
	
	public:
		void area(){
			cout<<"\n triangle area..";
		}
};

int main() {
	
	Circle c;	
	Triangle t;
	
	c.area();
	t.area();

	//pointer of base class
	Shape *s = &c;
	s->area();
	
	//reference of base class
	Shape &s1 = c;
	s1.area();
	
	return 0;
}


/*

without virtual keyword..
class Shape{
	
	public:
		void area(){
			cout<<"\n shape area";
		}
};

class Circle : public Shape{

	public:
		void area(){
			cout<<"\n circle area..";
		}
	
};

class Triangle : public Shape{
	
	public:
		void area(){
			cout<<"\n triangle area..";
		}
};

int main() {
	
	Shape s;
	Circle c;	
	Triangle t;
	
	s.area();
	c.area();
	t.area();
	
	s = c;
	s.area();
	
	return 0;
}*/
