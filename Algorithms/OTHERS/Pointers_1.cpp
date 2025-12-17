#include <iostream>
using namespace std;

int main() 
{

    // dynamically allocate memory
    int* point_int = new int{45}; // Memory leaks and dangling pointers
    // " int* point_int = new int{45}; " means " int *point_int = (int*) malloc(sizeof(int)); " 
    // here new means malloc
    
    /*
	int* point_int;
    point_int = new int;
    point_int = 45;
    //[Error] invalid conversion from 'int' to 'int*' [-fpermissive]
	*/
	
	float* point_float = new float{45.45f};
    cout << *point_int << endl;
    cout << *point_float << endl;

    // deallocate the memory
    // set pointers to nullptr
    
    delete point_int;
    delete point_float;
    
	point_int = nullptr;
    point_float = nullptr;

	/*
    without this two :
    1. point_int = nullptr;
    2. point_float = nullptr;
    it's coming the garbage values like 
    12212848, 12409456, 11491952, ......, so on.(if it runs everytime, it will change)
    45.45
	*/
	
    cout << *point_int << endl;
    cout << *point_float << endl;

    return 0;
}
