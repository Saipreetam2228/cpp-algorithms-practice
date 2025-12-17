#include <iostream>
using namespace std;

class Programmer
{
	int Graduation_marks, PostGraduation_marks, Interview_marks;
	int Total_Graduation_marks= 0, Total_PostGraduation_marks = 0, Total_Interview_marks = 0;
	public:
		
		
		void Marks()
		{
			cout << "Enter marks for Graduation (60-99): ";
            cin >> Graduation_marks;
            cout << "Enter marks for Post-graduation (60-99): ";
            cin >> PostGraduation_marks;
            cout << "Enter marks for Interview (0-9): ";
            cin >> Interview_marks;
            if(Graduation_marks < 60 || Graduation_marks > 99 ||
			   PostGraduation_marks  < 60 || PostGraduation_marks > 99 ||
			   Interview_marks < 60 || Interview_marks > 99)
			   cout << "The marks are invalid. " << endl;
		}
		
		void TotalMarks()
		{
			Total_Graduation_marks = Total_Graduation_marks + Graduation_marks;
			cout << "Total Graduation Score: " << Total_Graduation_marks << endl;
			
			Total_PostGraduation_marks = Total_PostGraduation_marks + PostGraduation_marks;
			cout << "Total Post-graduation Score: " << Total_PostGraduation_marks << endl;


			Total_Interview_marks = Total_Interview_marks + Interview_marks;
            cout << "Total Interview Score: " << Total_Interview_marks << endl;
			
		}
		
		void Team()
		{
		   if (Total_Graduation_marks > 150 && Total_PostGraduation_marks > 180 && Total_Interview_marks > 9) 
               cout << "The team is selected. " << endl;
		   else 
               cout << "The team is NOT selected. " << endl;
		}
		
		
	
};

int main()
{
	Programmer P1, P2;
	cout << "Enter the marks of the programmer - 1 :" << endl;
	P1.Marks();
	P1.TotalMarks();
	P1.Team();
	cout << "Enter the marks of the programmer - 2 :" << endl;
	P2.Marks();
	P2.TotalMarks();
	P2.Team();	

}
