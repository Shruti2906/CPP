#include <iostream>

using namespace std;

class Account{

private:
	static int CNBRNo;
	int accNo;
	string name;
	string ty;
	double accBal;
	
public:
	Account(){
	}
	Account(int accNo, string name, string accType, double accBal){
		
		this->accNo = accNo;
		this->name = name;
		this->ty = accType;
		this->accBal = accBal;
	}
	void display(){
		cout<<"\naccount No : "<<accNo;
		cout<<"\nAccount Holder Name : "<<name;
		cout<<"\nAccount Type : "<<ty;
		cout<<"\nAccount Balance : "<<accBal;
	}
};
int Account::CNBRNo = 13232;

class Saving: public Account{

	private:
		double interestRate;	
		
	public:
		Saving(){
			interestRate = 2;
		}
		Saving(int accNo, string name, string accType, double accBal):Account(accNo, name, accType, accBal){
			interestRate = 2;
			//this->interestRate = interestRate;
		}
		void display(){
			Account::display();
			cout<<"\nInterest Rate : "<<interestRate;
		}
};

class Current:public Account{
	
	private:
	double transactionLimit;	
		
	public:
		Current(){
			transactionLimit = 10;
		}
		Current(int accNo, string name, string accType, double accBal):Account(accNo, name, accType, accBal){
			//this(); //Constructor chaining is Invalid in cpp
			transactionLimit = 10;
		
		}
		void display(){
			Account::display();
			cout<<"\nTransaction Limit : "<<transactionLimit;
		}
};

int accept(Account acc[], int n){

	int no;
	string nm;
	int ty;
	double bal;
	for(int i=0; i<n; i++){
		cout<<"\n------------- Account "<<(i+1)<<" ---------------";
		cout<<"\nEnter Account No : ";
		cin>>no;
		cout<<"\nEnter Account Holder Name : ";
		cin>>nm;
		
		int chh = 0;
		do{
			chh = 0;
			cout<<"\nEnter Account type : ";
			cout<<"\n1) : Saving\t2) : Current : ";
			cin>>ty;
			
			if(ty == 1){
				int ch = 0;
				do{
					ch = 0;
					cout<<"\nEnter Account Balance : ";
					cin>>bal;
					if(bal>200){
						Saving sac(no, nm, "Saving", bal);
						acc[i] = sac;
					}
					else{
						cout<<"\ninsufficient balance..";
						cout<<"\nMinimum balance required : INR 500 ";
						cout<<"\n\n1]Try Again 2]skip Account : ";
						cin>>ch;
								
					}
				}while(ch == 1);
				if(ch == 2){
					i--;
					n--;
				}
			}
			else if(ty = 2){
				int ch = 0;
				do{
					ch = 0;
					cout<<"\nEnter Account Balance";
					cin>>bal;
					if(bal>=0){
						Current cac(no, nm, "Current", bal);
						acc[i] = cac;
					}
					else{
						cout<<"\ninsufficient balance..";
						cout<<"\nMinimum balance required : INR 500 ";
						cout<<"\n\n1] Try Again 2]Skip Account : ";
						cin>>ch;
					}
				}while(ch == 1);
				if(ch == 2){
					i--;
					n--;
				}
			}
			else{
				cout<<"\nInvalid Option.!";
				cout<<"\n1] Try Again 2]Skip Account : ";
				cin>>chh;
			}
			
		}while(chh == 1);
		if(chh == 2){
			i--;
			n--;
		}
	}
	cout<<"\n\n Accounts Added Successfully..!!";
	return n;
}

void display(Account acc[], int n){
	
	for(int i=0; i<n; i++){
		cout<<"\n\n------------------- Account "<<(i+1)<<" --------------------";
		acc[i].display();
	}
}

int main() {
	
	int ch, n=2;

	Account acc[n];
	
	string str;
	do{

		cout<<"\n1 : Create \n2 : display\n3 : Withraw\n4 : Deposit";
		cout<<"\nEnter Your Choice : ";
		cin>>ch;
		switch(ch){
			case 1:
				n = accept(acc, n);
			break;
			
			case 2:
			display(acc, n);
			
			break;
			case 3:
				cout<<"\nWork in pregress..";
			break;
			
			default:cout<<"\nInvalid Choice : ";
		}
		cout<<"\nDo you want to continue(Y/N) : ";
		cin>>str;
	}while((str == "y") || (str == "yes") || (str == "Y") || (str == "Yes") || (str == "YES"));
	
	cout<<"\n\n\nThank You .!!";
	return 0;
}
