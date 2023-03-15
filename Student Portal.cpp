#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;
// structure made for variable
struct student
{
	string name;
	int sapid,semester;
	string gender;
	float cgpa;
};
	student S1;
// add details function	
void Adddetails()
{	
    system("cls");
	cout<<"ENTER THE NAME : ";
	cin>>S1.name;
	cout<<"ENTER THE SAPID : ";
	cin>>S1.sapid;
	cout<<"ENTER THE CGPA : "; 
	cin>>S1.cgpa;     
	cout<<"ENTER THE GENDER : ";  
	cin>>S1.gender; 
	// file creating
	fstream studentdetails;
	studentdetails.open("studentportal.txt",ios :: app);
	if (!studentdetails) 
	{                            
      cout<<" Error while creating the file ";          
    }
    else
	{  
		//file writing process
	    studentdetails<<S1.name;
        studentdetails<<"\t "<<S1.sapid;
		studentdetails<<"\t "<<S1.cgpa;
	    studentdetails<<"\t "<<S1.gender;
	    studentdetails<<"\n-------------------\n";
        studentdetails.close(); 
	}
}
// data display function
void displayingdata()
{
	cout<<"DETAILS OF THE STUDENTS ARE:"<<endl;
	// data reading from file
	fstream studentdetails;
	studentdetails.open("studentportal.txt", ios::in );
    string line;
    stringstream ss(line); 
    cout<<"============================\n";
    while (getline(studentdetails, line, ' ')) 
	{
    cout <<line<<endl; 
	}
    studentdetails.close(); 
}

int main()
{
	int choice;
	do
	{
		cout<<"\n============ STUDENT PORTAL ============\n";	
		cout<<"1. ADD DETAILS OF STUDENT \n"; 
		cout<<"2. READ ALL STUDENTS DATA \n";
		cout<<"3. EXIT FROM THE SYSTEM \n";
		cout<<"Select an option: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
			{
				system("CLS");
			    Adddetails();	
				break;
			}
			case 2 : 
			{
			   system("CLS");
			   displayingdata();
				break;
			}
			case 3:
			{
				system("cls");
				cout<<"\nThank You ! \n";
				break;
			}
			default:
			{
				cout<<"Enter a valid option";
			}
		}
	}
	while(choice < 3);
	return 0;
}
