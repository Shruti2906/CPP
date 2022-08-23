#include <iostream>

using namespace std;

class Account{
	private:
		int accNo;
		string name;
		double accBal;
	public:
		void accept(){
			cout<<"\nEnter Account No : ";
			cin>>accNo;
			cout<<"\nEnter Account Holder's name : ";
			cin>>name;
			cout<<"\nEnter Account Balance : ";
			cin>>accBal;
		}
		void display(){
			cout<<"\nAccount Number : "<<accNo;
			cout<<"\nAcount Holder's Name : "<<name;
			cout<<"\nAccount Balance : "<<accBal;
		}
		int getAccBal(){
			return accBal;
		}
};

int main() {
	
	Account acc[3];
	for(int i=0; i<3; i++){
		cout<<"\n\n-------------- Account "<<(i+1)<<" ---------------";
		acc[i].accept();
	}
	cout<<"\n\n";
	for(int i=0; i<3; i++){
		cout<<"\n\n-------------- Account "<<(i+1)<<" ---------------";
		acc[i].display(); 	
	}

	cout<<"\n\nAccouts which have above 200 Account Balance : ";
	int cnt = 0;
	for(int i=0; i<3; i++){
		if(acc[i].getAccBal()>200){
			cout<<"\n\n-------------- Account "<<(cnt++)<<" ---------------";
			acc[i].display(); 	
		}
		
	}
	if(cnt == 0){
		cout<<"\nNo Account Found.!";
	}
	
	cout<<"\n\n\n";
	return 0;
}
