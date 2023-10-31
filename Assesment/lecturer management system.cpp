#include<iostream>
using namespace std;
class Lecturer
{
	public:
	string lecturer_name ;
	string subject_name;
	string course_name;
	int lecturer_number;
	
	// Constructor
	Lecturer(string lecturer, string subject, string course, int numberlecturer){
		this->lecturer_name = lecturer;
		this->subject_name = subject;
		this->course_name = course;
		this->lecturer_number = numberlecturer;
	}
	

	void showAllDetails()
	{
		cout<<"Name of the Lecturer : "<<lecturer_name<<endl;
		cout<<"Name of the Subject : "<<subject_name<<endl;
		cout<<"Name of Course : "<<course_name<<endl;
		cout<<"Number of Lecturers : "<<lecturer_number<<endl<<endl;
	}
};

main()
{
	Lecturer l1 = Lecturer("Manav", "Fundamental programing", "SE_batch", 12);
	l1.showAllDetails();
	Lecturer l2 = Lecturer("Manav", "Fundamental C programing", "SE_batch", 10);
	l2.showAllDetails();
	Lecturer l3 = Lecturer("Manav", "Fundamental C++ programing", "SE_batch", 15);
	l3.showAllDetails();
	Lecturer l4 = Lecturer("Manav", "Fundamental Python programing", "SE_batch", 2);
	l4.showAllDetails();
	Lecturer l5 = Lecturer("Darshan", "Fundamental programing", "SE_batch", 7);
	l5.showAllDetails();
	
	
	


}

