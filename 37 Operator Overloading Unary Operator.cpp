#include <iostream>

using namespace std;
template <class T1, class T2>
class MakeNegative{
	
	public:
		
		T1 x;
		T2 y;
	
		MakeNegative(){
			
		}
		MakeNegative(T1 x, T2 y){
			this->x = x;
			this->y = y;
		}
		void operator-(){
			
			x = -x;
			y = -y;
			
		}
			
};

int main() {
	
	MakeNegative<int, int> obj1(10, 20);
	MakeNegative<float, int> obj2(10.1, -10);
	
	-obj1;
	-obj2;
	
	cout<<"\nlets instance variables object of MakeNegative after using - operator : \n";
	cout<<"\nObject 1 : x : "<<obj1.x<<"\ty : "<<obj1.y;
	cout<<"\nObject 2 : x : "<<obj2.x<<"\ty : "<<obj2.y;
	
	return 0;
}
