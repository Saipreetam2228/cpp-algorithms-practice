#include<iostream>
using namespace std;

class patient{
	public:
		string name;
		string disease;
		
		patient(string n,string d){
			name=n;
			disease =d;
			
			cout<<"name="<<name<<" disease="<<disease<<endl;
		}
};

class in_patient: public patient{
	float roomrent;
	public:
		in_patient(string n, string d,float r): patient(n,d){
		roomrent=r;
		cout<<"room rent="<<roomrent<<endl;
	}
};

class out_patient:public patient{
	float opd_charge;
	public:
		out_patient(string n,string d,float c):patient(n,d){
		opd_charge=c;
		cout<<"opd charges="<<opd_charge<<endl;
	}
};

int main(){
	
		cout<<"==========================================="<<endl;
		cout<<"         ENTER THE PATIENT DETAILS         "<<endl;
		cout<<"==========================================="<<endl;
	patient p1("Unknown","Default");
	  cout<<endl;
		cout<<"THATS THE DEFAULT PATIENT DETAILS    "<<endl;
	cout<<endl;
	patient p2("sai","caugh");
	
	in_patient p3("ram","fever",1000);
	out_patient p4("sathya","cold",2032);
		cout<<endl;
		cout<<"==========================================="<<endl;
		cout<<"         THANK YOU FOR ENTERING            "<<endl;
		cout<<"==========================================="<<endl;
	
	return(0);
}
