/*
============================
File I/O Part-1
============================

1. Explain the use of file I/O.
2.Header file for the file I/o operation in c++ <fstream>.
3.Inbuilt class for file I/O operation in c++:
		1.ofstream.
		2.ifstream.
		3.fstream.
4.Read and Write Integer ans String values into the file.
5.Example showing the use of reading &writing data into the file.
*/
//=================================

/*
THREE DIFFERENT CLASS(these are inbuilt lin classes)
1)ofstream 
which will be used for [writing] the data into the files

2)ifstream (special class)
[reading] the data from the files 

3)fstream 
used for [both reading and writing] from the file  

we need to create the objects of these classes
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	ofstream fout("one.txt"); //creating an object(fout) along eith the file name
  int val1,rel1;
  char val2[20],rel2[20];
  
  cout<<"\n Enter the integer value: ";
  cin>>val1;
  cout<<"\n Enter the string value: ";
  cin>>val2;
  
//taking the files into the one.txt with the help of an object
  fout<<val1;
	fout<<val2;  
  
  fout.close();//free the file 
  
//use if stream to read the val and store in the rel1 and rel2;	 
  ifstream fin("one.txt");
	
	fin>>rel1;
	fin>>rel2;
	 
	cout<<"\n Integer value1: "<<rel1;
	cout<<"\n String value2: "<<rel2;

  return(0);
} 


