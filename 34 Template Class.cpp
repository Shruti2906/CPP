#include <iostream>

using namespace std;

template <class t, class t2 = int> class Demo{	//t2 = int is called default argument to template like otraml parameter	
	
	t x;
	t2 y;
	public:
			Demo(t x){
				this->x = x;
				this->y = y;
				cout<<"\nconstructor x, y : "<<x<<"\t"<<y;
			}
			t fun(t arr[]);
			t greater(t a, t2 b);
			int fun2();
			
};
template <class t, class t2>t Demo<t, t2>::fun(t* arr){
	
	return arr[1];
}

template<class t, class t2>t Demo<t, t2>::greater(t a, t2 b){
	
	return a>b?a:b;
}

template<class t, class t2> int Demo<t, t2>::fun2(){
	cout<<"\nfun2 called..returned : ";
	return 10;
}

int main() {
	
	Demo <int, int> t1(10);
	Demo <float, int> t2(10.10);
	Demo <char, float> t3('A');
	
	int arr1[] = {1, 2, 3, 4};
	float arr2[] = {1.1, 2.2, 3.3, 4.4};
	cout<<"\nt1.func() : "<<t1.fun(arr1);
	cout<<"\nt1.func() : "<<t2.fun(arr2);
	cout<<"\ngreater is : "<<t1.greater(10, 20);
	
	cout<<t1.fun2();
	return 0;
}
