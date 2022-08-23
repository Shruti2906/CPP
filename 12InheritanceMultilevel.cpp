#include <iostream>

using namespace std;

class GrandFather{
	
	private:
		int gage;
	public:
		//allocate memory for base class
		//derived class may use these variables
		GrandFather(int gage){
			this->gage = gage;
		}
		void showAge(){
			cout<<"\nGrand Father age : "<<gage;
		}
		
};
class Father:public GrandFather{
	
	private:
		int fage;
	public:
		Father(int fage):GrandFather(fage+30){
			this->fage = fage;
		}
		void showAge(){
			GrandFather::showAge();
			cout<<"\nFather age : "<<fage;
		}
		
};

class Son:public Father{
	
	private:
		int sage;
	public:
		Son(int sage):Father(sage+30){
			this->sage = sage;
		}
		void showAge(){
			Father::showAge();
			cout<<"\nSon age : "<<sage;
		}
		
};

int main() {
	
	Son s(20);
	s.showAge();
	return 0;
}
