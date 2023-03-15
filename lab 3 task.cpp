/* File Handling with C++ using ifstream & ofstream class object*/
/* To write the Content in File*/
/* Then to read the content of file*/
#include <iostream>
/* fstream header file for ifstream, ofstream,
fstream classes */
#include <fstream>
using namespace std;
class Student 
{	
private:
    int *sapID;
    string name;
    int semester;
    float cgpa;
    bool isFemale;
public: 
	Student()
	{
		this->sapID = new int();
		cout<<"Null constructor is called\n";
		*this->sapID = -1;
		this->name = "";
		this->cgpa = 0.0f;
		this->semester = 0;
		this->isFemale = false;
	}
	Student(int sapID, string name)
	{
		Student();
		*this->sapID = sapID;
		this->name = name;
	}
	Student(int sapID, string name, int semester)
	{
		Student();
		*this->sapID = sapID;
		this->name = name;
		this->semester = semester;
	}	
	Student(int sapID, float cgpa, string name, int semester, bool isFemale)
	{
		this->sapID = new int();
		cout<<"Parametric constructor is called\n";
		*this->sapID = sapID;
		this->name = name;
		this->cgpa = cgpa;
		this->semester = semester;
		this->isFemale = isFemale;
	}			
	Student(int sapID, string name, bool isFemale)
	{
		Student();
		*this->sapID = sapID;
		this->name = name;
		this->isFemale = isFemale;
	}
	Student(Student &std)
	{
		cout<<"Copy Constructor is called\n";
		this->sapID = std.sapID;
		this->name = std.name;
		this->cgpa = std.cgpa;
		this->semester = std.semester;
		this->isFemale = std.isFemale;
	}
	int getSapID()
	{
		return *sapID;
	}
	void setSapId(int sapID)
	{
		*this->sapID = sapID;
	}
	~Student()
	{
		cout<<"Destructor is called\n";
		delete this->sapID;
	}
	void display()
	{
		cout<<"Sap ID: \t" <<*sapID;
		cout<<"\nName: \t\t" <<name;
		cout<<"\nCGPA: \t\t" <<cgpa;
		cout<<"\nSemester: \t" <<semester;
		cout<<"\nGender: \t";
		(isFemale)?cout<<"Female":cout<<"Male";
		cout<<"\n";	
	}
};
void getStudentData()
{
	int sapID;
    string name;
    int semester;
    float cgpa;
    bool isFemale;    
	cout<<"Enter Sap ID: " ;
	cin>>sapID;
	cout<<"Enter Name: ";
	cin.ignore();
	getline(cin, name);
	cout<<"Enter semester: ";
	cin>>semester;
	cout<<"Enter CGPA: ";
	cin>>cgpa;
	char g;
	cout<<"Enter gender: ";
	cin>>g ;
	isFemale=(g=='f')?true:false;
	Student std(sapID,cgpa,name,semester,isFemale);
	ofstream fout;
	fout.open("student.txt",ios_base::app);
	fout<<sapID<<" " <<name<<" "<<semester<<" "<<cgpa<<" "<<g<<endl;
	cout<<endl;
	fout.close();
}
void showStudentData()
{
	int sapID, semester;
	string name;
	float cgpa;
	bool isFemale;
		//Write the code to read the line of data
		//split that and create an object of student
		//Display the data
		fstream Student_Data ;
		Student_Data.open("student.txt",ios::in);
	    string line;
	    cout<<endl;
	    while(getline(Student_Data,line))
		{
			cout<<"------------------------------------\n";
			cout<<line<<endl; 
		}
		Student_Data.close();
		cout<<"\n\n";
		Student_Data.close();
}
// Driver Code
int main()
{	
	string line;
	int choice; 
	do
	{
		system("CLS");
		cout<<"\n============Student Portal============\n";
		cout<<"1. Add Student\n"; 
		cout<<"2. Read All Students\n";
		cout<<"3. Exit\n";
		cout<<"Select an option: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				getStudentData();
				break;
			case 2:
				showStudentData();
				cin.ignore();
				getline(cin,line);
				break;
			case 3:
				cout<<"\nThank You\n";
				break;
			default:
				cout<<"Enter a valid option";
			}
		}
	while(choice<3);
	return 0;
}