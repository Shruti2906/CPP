#include <iostream>
#include<string.h>
using namespace std;

class String{
	
	public : 
		char str[20];
		String(){
			
		}
		String(char str[]){
			strcpy(this->str,str);
		}
		//below function returns pointer of first String object(first oprand of +) on which + operation is performed
		String* operator+(String strObj){	//function cannot have more than 1 parameter
			String s;
			int i;
			for(i=0; this->str[i]!='\0'; i++);
			for(int j=0; strObj.str[j]!='\0'; j++){
				this->str[i++] = strObj.str[j];
			}
			return this;	
		}
		//below function returns object of type String
		/*String operator+(String strObj){
			String s;
			int i;
			for(i=0; this->str[i]!='\0'; i++){
				s.str[i] = this->str[i];
			}
	
			for(int j=0; strObj.str[j]!='\0'; j++){
	
				s.str[i++] = strObj.str[j];
			}
			
			return s;	
		}*/
};
int main() {
	
	String s1("Shruti"), s2("patil");
	String *s3 = s1+s2;
	cout<<"\ns3->str : "<<s3->str;
	//used for 2nd function
	//String s3 = s1+s2;
	//cout<<"\ns3.str : "<<s3.str;
	
	return 0;
}
