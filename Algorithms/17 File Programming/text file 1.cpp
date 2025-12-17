#include <iostream>
#include<fstream>

using namespace std;

int main(){
	//fout file wit the name one.txt
	ofstream fout("one.txt"); //whenever you create any file at that time only u must create the file name also 
	//its like creating the constructor like [it delets the existing files and create a new file].txt
	int val1,rel1;
	char val2[20],rel2[20];
	
	cout<<"\n Enter the integer value:";
	cin>> val1;
  cout<<"\n Enter the String value:";
	cin>> val2;
	//val1&2 are storing the values in the temporary memory 
	
	//now we should take the files into the secondary storage (files)
  fout<<val1;
	fout<<val2;
	//here we are storing the files
	fout.close(); 	
  //free the file
  
  
  // for reading the file we need to mention like ifstream like ofstream   
	ifstream fin("one.txt");
	
	fin>>rel1;
	fin>>rel2;
	
	cout<<"\n Integer value1:"<<rel1;
	cout<<"\n String value 2:"<<rel2;
	
	return 0;
}
