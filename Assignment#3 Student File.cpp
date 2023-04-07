/*Your Task will be get data from the user and store the data in the file...
Then read the data using Getline and create user objects and display the data*/
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
			this->sapID=new int();
			cout<<"Null constructor starts running\n";
			*this->sapID=-1;
			this->name="";
			this->cgpa=0.0;
			this->semester=0;
			this->isFemale=false;
		}
		Student(int sapID,string name) 
		{
			Student();
			*this->sapID=sapID;
			this->name=name;
		}
		Student(int sapID,string name,int semester) 
		{
			Student();
			*this->sapID=sapID;
			this->name=name;
			this->semester=semester;
		}
		Student(int sapID,float cgpa,string name,int semester,bool isFemale) 
		{
			this->sapID=new int();
			cout<<"Parametric constructor starts running \n";
			*this->sapID=sapID;
			this->name=name;
			this->cgpa=cgpa;
			this->semester=semester;
			this->isFemale=isFemale;
		}
		Student(int sapID,string name,bool isFemale) 
		{
			Student();
			*this->sapID=sapID;
			this->name=name;
			this->isFemale=isFemale;
		}
		Student(Student &std) 
		{
			cout<<"Copy Constructor starts running \n";
			this->sapID=std.sapID;
			this->name=std.name;
			this->cgpa=std.cgpa;
			this->semester=std.semester;
			this->isFemale=std.isFemale;
		}
		int getSapID() 
		{
			return *sapID;
		}
		void setSapId(int sapID) 
		{
			*this->sapID=sapID;
		}
		~Student() 
		{
			cout<<"Destructor starts running \n";
			delete this->sapID;
		}
		void display() 
		{
			cout<<"Sap ID: \t"<<*sapID;
			cout<<"\nName: \t\t"<<name;
			cout<<"\nCGPA: \t\t"<<cgpa;
			cout<<"\nSemester: \t"<<semester;
			cout<<"\nGender: \t";
			if(isFemale) 
			{
				cout<<"Female";
			}
			else 
			{
				cout<<"Male";
				cout<<"\n";
			}
		}
};
// Main Code
int main() 
{
	string line;
/*
	cout<<"ENTER DATA TO STORE IN FILE : ";
	// Creation of ofstream class object
	ofstream fout;
	fout.open("sample.txt");
	// Execute a loop If file successfully opened
	while(fout) 
	{
		// Read a Line from standard input
		getline(cin,line);
		// Press -1 to exit
		if(line=="-1") 
		{
			break;
		}
		// Write line in file
		fout<<line<<endl;
	}
	// Close the File
	fout.close();
*/
	// Creation of ifstream class object to read the file
	ifstream fin;
	// by default open mode = ios::in mode
	fin.open("sample.txt");
	int sapID,semester;
	string name;
	float cgpa;
	bool isFemale;
	// Execute a loop until EOF (End of File)
	while(fin>>sapID) 
	{
		fin>>name;
		fin>>semester;
		fin>>cgpa;
		char c;
		fin>>c;
		if(c=='m')
		{ 
			isFemale=false;
		} 
		else 
		{
			isFemale=true;
		}
		Student std(sapID,cgpa,name,semester,isFemale);
		// Print line (read from file) in Console
		std.display();
		cout<<"\n\n";
	}
	// Close the file
	fin.close();

	return 0;
}