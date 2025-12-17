/*
========================
File_IO_P_3
========================

1.Explain the use of file I/O.
2.read and write Object & Array using:
			1.read()
			2.write()
3.Explain the use of following method:
			1. seekg(0,ios::beg) - Move Read Pointer
			2. tellg() - Current Read Pointer Position
			3. seekp(-sizeof(obj),ios::end) - Move Write Pointer
			4. tellp() - current Write Pointer Position
4.Example Showing the use of reading &writing data into the file.

=========================

A obj;

fstream fout("one.dat",ios:in|ios::out|ios::ate);

fout.read((char*)&obj,sizeof(obj));

*/

#include <iostream>
#include <fstream>

using namespace std;

class employee{
	int id;
	int salary;
	
	public:
		employee(){  }
		~employee(){  }
		
		void setdata(){
			cout<<"\n Enter ID:";
			cin>>id;
			cout<<"\n Salary: ";
			cin>>salary;
		}
		
		void display(){
			cout<<"\n ID: "<<id;
			cout<<"\n Salary: "<<salary;
		}
};

int main(){
	int arr[]={10,20,30,40,50};
	
//writing array values,
	fstream fobj("one.dat",ios::out);
	fobj.write((char*)&arr,sizeof(arr));
	fobj.close();
	
//reading Array Values.
	fobj.open("one.dat",ios::in);
	int arr2[5];
	fobj.read((char*)&arr2,sizeof(arr2));
	
	for (int i=0;i<5;i++)
	{
		cout<<arr2[i]<<"\n";
	}
	fobj.close();
	
//writing object value.
	fobj.open("one.dat",ios::out);	
	employee e1;
	e1.setdata();
	fobj.write((char*)&e1,sizeof(e1));
	fobj.close();
	
//reading object value.
  fobj.open("one.dat",ios::in);
  employee e2;
  fobj.read((char*)&e2,sizeof(e2));
  e2.display();
  fobj.close();
  
  return(0);
	 
}
