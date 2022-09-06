#include <iostream>
#include<fstream>
#include<string.h>

using namespace std;

class Account{
	
	private:
		int accNo;
		char accName[20];
		double accBal;
	public:
		Account(){
			
		}
		Account(int accNo, char accName[], double accBal){
			this->accNo;
			strcpy(this->accName, accName);
			this->accBal = accBal;
		}
		void accept(){

			cout<<"\n\tEnter Account No : ";
			cin>>accNo;
			cout<<"\n\tEnter Account Holder's Name : ";
			cin>>accName;
			cout<<"\n\tEnter Account Balance  : ";
			cin>>accBal;
				
		}
		void display(){
			
			//cout<<"\n============================ All Account Details ===========================";
			cout<<"\n\t\tAccount Number : "<<accNo;
			cout<<"\n\t\tAccount Number : "<<accName;
			cout<<"\n\t\tAccount Number : "<<accBal;
			cout<<"\n\t----------------------------------------------------------------------------";
		}
		bool search(int acNo){
			
			if(acNo == accNo){
				return true;
			}
			else 
				return false;
		}
};

int main() {
	
	int ch;
	string str, str1 = "y";
	Account a;
	
	do{
		
		cout<<"\n\n\t=================================================================";
		cout<<"\n\t========================== MAIN MENU ============================";
		cout<<"\n\t=================================================================";
		cout<<"\n\t\t\t1 : Create Account\n\t\t\t2 : Display Account\n\t\t\t3 : Search Account";
		cout<<"\n\t\t\tEnter Your choice  : ";
		cin>>ch;
		switch(ch){
			case 1:{
					ofstream fObj;
					fObj.open("D:\\July 22 C++\\FileHandlingCRUD.dat");
					while((str1 == "y") || (str1 == "yes")){
						a.accept();
						fObj.write((char*)&a, sizeof(a));
						cout<<"\n\tDo you want to add more Accounts : ";
						cin>>str1;
					}
					fObj.close();
					cout<<"\n\tAccounts Created Successfully..!!";
				break;
				}
			
			case 2:{
					ifstream iFile("D:\\July 22 C++\\FileHandlingCRUD.dat");
					iFile.read((char*)&a, sizeof(a));
					while(iFile){
					
						a.display();	
						iFile.read((char*)&a, sizeof(a));
					}
					
				break;
			}
			
			case 3:{
				int accNo;
				bool b = false;
				cout<<"\n\tEnter Account Number to Search : ";
				cin>>accNo;
				ifstream iFile("D:\\July 22 C++\FileHandlingCRUD.dat");
				iFile.read((char*)&a, sizeof(a));
				while(iFile){
					b = a.search(accNo);
					if(b == true){
						a.display();
						break;
					}
					iFile.read((char*)&a, sizeof(a));
				}
				if(!b){
					cout<<"\n\n\tAccount doesn't exist..!!";
				}
				break;
			}
				
			default:cout<<"\nInvalid choice..!!";
		}
		cout<<"\n\n\t\tDo you want to goto Main menu(Y/N) : ";
		cin>>str;
		
	}while((str == "y") || (str == "yes"));
	
	cout<<"\n\n\t\tThank You .!! Visit Again..!";
	
	return 0;
}
