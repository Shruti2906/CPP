#include <iostream>

using namespace std;

class Product{
	
	private:
		int prodId;
		string prodName;
		double prodPrice;
		int prodQty;
	public:
		Product(){
			
		}
		Product(int prodId, string prodName, double prodPrice, int prodQty){
			this->prodId = prodId;
			this->prodName = prodName;
			this->prodPrice = prodPrice;
			this->prodQty = prodQty;
		}
		void display(Product pArr[], int n);
		void calculate(Product pArr[], int n);
		
};

void Product::display(Product pArr[], int n){
	
		cout<<"\nProdId\tName\tPrice\tQuantity";
		for(int i=0; i<n; i++){
			cout<<"\n"<<pArr[i].prodId<<"\t"<<pArr[i].prodName<<"\t"<<pArr[i].prodPrice<<"\t"<<pArr[i].prodQty;
		}
	
}

void Product::calculate(Product arr[], int n){
	
	double total = 0;
	for(int i=0; i<n; i++){
		total = total+arr[i].prodPrice*arr[i].prodQty;
	}
	double cgst = total*0.6;
	double sgst = total*0.4;
	double finalTotal = total+cgst+sgst;
	
	cout<<"\nTotal : "<<total;
	cout<<"\ncgst : "<<cgst;
	cout<<"\nsgst : "<<sgst;
	cout<<"\nFinalTotal : "<<finalTotal;
	
}

int main() {
	
	int n=3;
	Product pArr[n];

	//accept
	int id, qty;
	string nm;
	double price;
	for(int i=0; i<n; i++){
		cout<<"\nEnter Product id, name, price, quantity : ";
		cin>>id;
		cin>>nm;
		cin>>price;
		cin>>qty;
		Product p(id, nm, price, qty);
		pArr[i] = p;
	}
	
	//display
	Product p;
	p.display(pArr, n);
	
	p.calculate(pArr, n);
	
	return 0;
}
