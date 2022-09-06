#include <iostream>

using namespace std;

class Shape{

	public:
		void findArea()	{
			
		}
};

class Circle: public Shape{
	
	float r;
	public:
		void findArea(float r)	{
			this->r = r;
			float area = 3.14*r*r;
			cout<<"\nArea of circle is : "<<area;
		}
};

class Triangle: public Shape{
	
	float b;
	float h;
	public:
		void findArea(float b, float h)	{
			this->b = b;
			this->h = h;
			float area = 0.5*b*h;
			cout<<"\nArea of circle is : "<<area;
		}
};

int main() {
	
	Circle c;
	c.findArea(1.1);
	
	Triangle t;
	t.findArea(1.2, 1.2);
	return 0;
}
