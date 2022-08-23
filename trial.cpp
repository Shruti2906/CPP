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
		void display(Account ac){
			cout<<"\nAccount Number : "<<ac.accNo;
			cout<<"\nAcount Holder's Name : "<<ac.name;
			cout<<"\nAccount Balance : "<<ac.accBal;
		}
		int getAccBal(){
			return accBal;
		}
		void setAccBal(double acBal){
			accBal = acBal;
		}
		void swap(Account acc1, Account acc2);
		int search(Account Acc[], int n, int accNo);
		int deleteAcc(Account acc[], int n, int accNo);
		void transaction(Account acc[], int n);
};

void sort(Account acc[], int n){
	
	for(int i=1; i<n; i++){
		for(int j=0; j<n-i; j++){
			if(acc[j].getAccBal() > acc[j+1].getAccBal()){
				cout<<"\n calling swap";	//Note: even we have written swap here we are calling built in swap method is getting called
				swap(acc[j], acc[j+1]);
			}
		}
	}
	
}
void Account::swap(Account acc1, Account acc2){

	Account temp;
	temp.accNo = acc1.accNo;
	temp.name = acc1.name;
	temp.accBal = acc1.accBal;
	
	acc1.accNo = acc2.accNo;
	acc1.name = acc2.name;
	acc1.accBal = acc2.accBal;
	
	acc2.accNo = temp.accNo;
	acc2.name = temp.name;
	acc2.accBal = temp.accBal;
	
	cout<<"\n in swap";
}

int Account::search(Account acc[], int n, int accNo){
	
	for(int i=0; i<n; i++){
		if(acc[i].accNo == accNo){
			
			return i;
		}
	}
	return -1;
		
}
int Account::deleteAcc(Account acc[], int n, int accNo){
	int pos = search(acc, n, accNo);
	if(pos >= 0){
		for(int i=pos; i<n-1; i++){
			acc[i].accNo = acc[i+1].accNo;
			acc[i].name = acc[i+1].name;
			acc[i].accBal = acc[i+1].accBal;
		}
		n--;
	}
	else{
		cout<<"\nAccount Not Found.!";
	}
	return n;
}
void Account::transaction(Account acc[], int n){
	Account temp;
	int accNo, ch, amt;
	cout<<"\n\nEnter Account Number : ";
	cin>>accNo;
	int index = search(acc, n, accNo);
	if(index >= 0){
		
		cout<<"\n\n1 : Widraw\n2 : Deposit";
		cout<<"\nEnter Choice : ";
		cin>>ch;
		if(ch == 1){
			if(acc[index].getAccBal() > 200){
				cout<<"\nEnter Withraw amount : ";
				cin>>amt;
				if((amt < acc[index].getAccBal()) && ((acc[index].getAccBal())-amt) >200){
					acc[index].setAccBal((acc[index].getAccBal())-amt);
				}
				else{
					cout<<"\n\nInusufficient Fund.!";
				}
			}
			else{
					cout<<"\n\nInusufficient Fund.!";
				}
				
		}
		else if(ch == 2){
			cout<<"\nEnter Deposit Amount : ";
			cin>>amt;
			acc[index].setAccBal((acc[index].getAccBal())+amt);
			
		}
		else{
			cout<<"\nINvalid choice.!";
		}
	}
	else{
		cout<<"\nAccount Not Found.!";
	}
}

int main() {
		
		int n = 3;
		Account acc[n];
		Account temp;
		
		int ch;
		string chh;
		
		do{
			cout<<"\n\n\n1 : Create\n2 : Display\n3 : Sort\n4 : Search\n5 : Delete\n6 : Transaction ";
			cout<<"\nEnter your choice : ";
			cin>>ch;
			switch(ch){
		
				case 1:
					//Accept
						for(int i=0; i<n; i++){
							cout<<"\n\n----------------- Account "<<(i+1)<<"----------------";
							acc[i].accept();
						}
				break;
				
				case 2:
					//Display
						for(int i=0; i<n; i++){
							cout<<"\n\n----------------- Account "<<(i+1)<<"----------------";
							acc[i].display();
						}
				break;
				
				case 3:
					cout<<"in 3";
					//sort
					cout<<"\n\n*************************************************************";
					sort(acc, n);
					cout<<"\n\nAfter Sorting";
					for(int i=0; i<n; i++){
						cout<<"\n\n----------------- Account "<<(i+1)<<"----------------";
						acc[i].display();
					}
				break;
				
				case 4:
					
					int index, aNo;
					cout<<"\n\nEnter Account number to Delete Account : ";
					cin>>aNo;
					index = temp.search(acc, n, aNo);
					if(index >= 0){
						temp.display(acc[index]);
					}
					else{
						cout<<"\nAccount Not Found.!";
					}
				break;		
				
				case 5:
					cout<<"in 5";
								
					//Delete
					int accNo;
					cout<<"\n\nEnter Account No to Delete Account : ";
					cin>>accNo;
					n = temp.deleteAcc(acc, n, accNo);
					cout<<"\n\nAfter Deleting..";
					for(int i=0; i<n; i++){
						cout<<"\n\n----------------- Account "<<(i+1)<<"----------------";
						acc[i].display();
					}
				break;
				
				case 6:
					temp.transaction(acc, n) ;
				break;
				
				default:cout<<"\nInvalid Choice.!"	;
					
			}
			cout<<"\n\nDo You want to continue?(Y/N) : ";
			cin>>chh;
	}while((chh == "y") || (chh == "Y") || (chh == "yes") || (chh == "YES") || (chh == "Yes"));
	cout<<"\nThank You .!";
	return 0;
}

/*

		do{
				
			cout<<"\n\n\n1 : Create\n2 : Display\n3 : Sort\n4 : Search\n5 : Delete\n6 : Transaction ";
			cout<<"\nEnter your choice : ";
			cin>>ch;
			switch(ch){
			
			case 1:
					//Accept
					for(int i=0; i<n; i++){
						cout<<"\n\n----------------- Account "<<(i+1)<<"----------------";
						acc[i].accept();
					}
			break;
			case 2:
					//Display
					for(int i=0; i<n; i++){
						cout<<"\n\n----------------- Account "<<(i+1)<<"----------------";
						acc[i].display();
					}
			break;
			case 3:	
					//sort
					cout<<"\n\n*************************************************************";
					sort(acc, n);
					cout<<"\n\nAfter Sorting";
					for(int i=0; i<n; i++){
						cout<<"\n\n----------------- Account "<<(i+1)<<"----------------";
						acc[i].display();
					}
			break;
			case 4:
					//searching
					int no;
					cout<<"\n\nEnter Account No to Search Account : ";
					cin>>no;
					int index = temp.search(acc, n, no);
					if(index >= 0){
						temp.display(acc[index]);
					}
					else{
						cout<<"\nAccount Not Found.!";
					}
			break; 
	     	case 5:
							
					//Delete
					int accNo;
					cout<<"\n\nEnter Account No to Delete Account : ";
					cin>>accNo;
					n = temp.deleteAcc(acc, n, accNo);
					cout<<"\n\nAfter Deleting..";
					for(int i=0; i<n; i++){
						cout<<"\n\n----------------- Account "<<(i+1)<<"----------------";
						acc[i].display();
					}
				cout<<"\nAccount Deleted.!";
			break;
			/*case 6:
			//Transaction on account
			break;
		//	default:cout<<"\nInvalid choice.!";
			}
			cout<<"\n\nDo You want to continue?(Y/N) : ";
			cin>>chh;
	}while((chh == "y") || (chh == "Y") || (chh == "yes") || (chh == "YES") || (chh == "Yes"));*/
	
