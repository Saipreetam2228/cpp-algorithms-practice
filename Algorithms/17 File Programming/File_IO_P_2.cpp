/*
===============================
File I/O Part-2
===============================

1.Explain the use of file I/o.
2.Open file using constructor and method.
3.Finding the end of file 
4. Fstream clas &Different modes:
		1.ios::in  (reading)
		2.ios::out (writing)
		3.ios::app (append)
		4.ios::ate (append &update)
5.Example showing the use of reading& writing data into the file.
*/

//===========================================

/*
ofstream fout("one.txt");
==(u create an object and u pass the file name) 
---using the concept of constructors 
---by creating an object ,nd work with one.txt;


ofstream fout;
fout.open("one.txt");
--- both are same but the concept is different
 (OPEN method concept);


-> for getting the end od the file 
M_1
ifstream fin("one.txt");  //ios::in (default mode)
while(fin)
{

}
//it will reach till end of the file	

M_2
--will return != 0 value till it reaches to the end
fin.eof()!=0

*/


#include <iostream>
#include<fstream> //used for both reading and writing 
using namespace std;

int main(){
	
	char rel[20];
	
	ofstream fout; //object fout by ofstream
	fout.open("one.txt");//open method , default out mode
	
	fout<<"First line\n";
	fout<<"Second line\n";
	fout<<"Third line\n";
	
  fout.close();

//1//reading all values using while(fin)

  ifstream fin("one.txt");//specifing the file name,using the concept of constructors
  
  while(fin)
	{
  	fin.getline(rel,20);//getline is the method to read the complete line
  	cout<<"\n"<<rel;     //but for that we need to store the file (rel) we gave
	}
	
	fin.close();
	
//2//reading all values using eof()method
	
	fin.open("one.txt");
	
	while(1)
	{
		if(fin.eof()!=0)
		{
			break;
		}
		fin.getline(rel,20);
		cout<<"\n"<<rel;	
	}

//3// fstream class object+mode

	fstream file("one.txt",ios::in);

	while(1)
	{
		if (file.eof()!=0)
		{
			break;
		}
		file.getline(rel,20);
		cout<<"\n"<<rel;
	}
}

