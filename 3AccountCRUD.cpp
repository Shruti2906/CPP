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
		void display(Account acc){
			cout<<"\nAccount Number : "<<acc.accNo;
			cout<<"\nAcount Holder's Name : "<<acc.name;
			cout<<"\nAccount Balance : "<<acc.accBal;
		}
		int getAccBal(){
			return accBal;
		}
		void swap(Account acc1, Account acc2);
		int search(Account Acc[], int n, int accNo);
		int deleteAcc(Account acc[], int n, int accNo);
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

int main() {
		
		int n = 3;
		Account acc[n];
		Account temp;
		
		//Accept
		for(int i=0; i<n; i++){
			cout<<"\n\n----------------- Account "<<(i+1)<<"----------------";
			acc[i].accept();
		}
		
		//Display
		for(int i=0; i<n; i++){
			cout<<"\n\n----------------- Account "<<(i+1)<<"----------------";
			acc[i].display();
		}
			
		//sort
		cout<<"\n\n*************************************************************";
		sort(acc, n);
		cout<<"\n\nAfter Sorting";
		for(int i=0; i<n; i++){
			cout<<"\n\n----------------- Account "<<(i+1)<<"----------------";
			acc[i].display();
		}
		
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
	
	return 0;
}
