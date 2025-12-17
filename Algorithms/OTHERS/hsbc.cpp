#include<iostream>
using namespace std;

//base class:account
class account{
protected:
	string accountid;
	string name;
	float balance;

public:
	account(string id,string n, float b):accountid(id), name(n), balance(b){}
	
	//method to deposit money
	void deposit(float amount){
		if(amount>0){
			balance+=amount;
			cout<<"++deposit successfull ! ++\n";
			cout<<"== New Balance: $"<<balance<<"==\n";
	  } else{
		  cout<<"-- invalid deposit amount!--\n";
		}
	}
	
	//method to check balance
	void displaybalance()const{
	  cout<<"\n== current Balance: $"<<balance <<"==\n";
	}	
};

//derived class: student account
class studentaccount: public account{
public:
	//constructor for student account
	studentaccount(string id, string n, float b): account(id,n,b){}

	//method to display student details
	void displayaccountinfo(){
	cout << "====================================\n";
        cout << "|| ACCOUNT DETAILS               ||\n";
        cout << "====================================\n";
        cout << ">> Account ID : " << accountid << "\n";
        cout << ">> Name       : " << name << "\n";
        cout << ">> Balance    : &¹" << balance << " \n";
        cout << "====================================\n";
  	}	
};

//main function with user input
int main (){
	string studentid,studentname;
	float initialbalance, depositammount;
	
	cout << "\n++ Create Student Account ++\n";
  cout << "Enter Student ID: ";
	cin>>studentid;
	cout<<"Enter student name:";
	cin.ignore();
	getline(cin,studentname);
	cin>>initialbalance;
	
	studentaccount student(studentid,studentname,initialbalance);
	student.displayaccountinfo();
	
	cout << "\n++ Deposit Money ++\n";
  cout << "Enter deposit amount: â‚¹";
  cin >> depositammount;
  student.deposit(depositammount);
  
  student.displaybalance();
  return 0;
}



























