#include<iostream>
using namespace std;
class student
{
	public:
	int *sapid;
	int semester;
	string name;
	float gpa;
	bool ismale;
	student()
	{
		new sapid=1;
		semester=2;
		name="";
		gpa=0.0;
		ismale=true;		
	}
	student(int sapid,string name,int smester,float gpa,bool ismale)
	{
		this->sapid=sapid;
		this->name=name;
		this->semester=semester;
		this->gpa=gpa;
		this->ismale=ismale;
	}
	student(int sapid,string name)
	{
		this->sapid=sapid;
		this->name=name;
	}
	student(int sapid,string name,float gpa)
	{
		this->sapid=sapid;
		this->name=name;
		this->gpa=gpa;
	}
	student(int sapid,string name,bool ismale)
	{
		this->sapid=sapid;
		this->name=name;
		this->ismale=ismale;
	}
	student(student &std)
	{
		sapid=std.sapid;
		semester=std.semester;
		name=std.name;
		gpa=std.gpa;
		ismale=std.ismale;	
	}
	~student()
	{
		cout<<"DISTRUCTOR OF STUDENT IS RUNNING"<<endl;
	}
	delete sapid; 
};
int main()
{
	student s1(46287,"Talha",2,3.48,true);
	student s2(46288,"Ali",2,3.28,true);
	student s3(46289,"Ayehsa",2,2.48,false);
	student s4(46290,"Marium",2,2.98,false);
	student s5(s4);
	cout<<"Details of Student 1 : "<<endl<<s1.sapid<<endl<<s1.name<<endl<<s1.semester<<endl<<s1.gpa<<endl<<s1.ismale;
	return 0;	
}