#include<iostream>
using namespace std;
class Elevator
{
	public:
	string company,model,validity;
	int id,currentlocation;
	float maxload;
	bool isactive;
	Elevator()
	{
		this->company= "HYUNDAI";
		this->model= "A109D";
		this->validity= "Active";
		this->id= 123;
		this->currentlocation=1;
		this->maxload= 1000;
		this->isactive=1;
	}
	Elevator(int id, int currentfloor, bool isactive)
	{
		this->currentlocation=currentlocation;
		this->isactive=isactive;
		this->id=id;
	}
	Elevator(string company, string model, string validity)
	{
		this->company=company;
		this->model=model;
		this->validity=validity;
	}
};
int main()
{
	Elevator e1;
	char choice;
	cout<<"WELLCOME TO ELEVATOR : "<<endl;
	cout<<"PRESS THE FOLLOWING FOR GOING ON FLOORS : "<<endl;
	cout<<"(U) TO GO UP."<<endl;
	cout<<"(D) TO GO DOWN."<<endl;
	cout<<"(O) TO OPEN GATE."<<endl;
	cout<<"(C) TO CLOSE GATE."<<endl;
	cout<<"(A) TO DISPLAY CURRENT FLOOR";
	cin>>choice;
	system("cls");
	if(choice=='U'&& choice=='u')
	{
		cout<<"ELEVATOR IS GROING UP NOW YOU ARE ON "<<e1.currentlocation<<endl;
		int i;
		cout<<"ON WHICH FOR YOU WANT TO GO : ";
		cin>>i;
		switch(i)
		{
			case 1:
					cout<<"Invalid!";
					system("cls");
					//break:
			case 2:
					cout<<"GOING TO 2ND FLOOR";
					cout<<"YOU HAVE REACHED ON 2ND FLOOR PRESS U TO OPEN DOOR , C TO CLOSE DOOR : ";
					int a;
					cin>>a;
					if(a=='u' && a=='U')
					{
						cout<<"\nDOOR OPENED "<<endl;
					}
					else if(a=='c' && a=='C')
					{
						cout<<"\n DOOR CLOSED "<<endl;
					}
					system("cls");
					//break:
					e1.currentlocation++;
			case 3:	
					cout<<"GOING TO 3RD FLOOR";
					cout<<"YOU HAVE REACHED ON 3RD FLOOR PRESS U TO OPEN DOOR OR C TO CLOSE DOOR : ";
					int b;
					cin>>b;
					if(b=='u' && b=='U')
					{
						cout<<"\nDOOR OPENED "<<endl;
					}			
					else if(b=='c' && b=='C')
					{
						cout<<"\n DOOR CLOSED "<<endl;
					}
					system("cls");
					//break:
		}
	}
	else if(choice=='D'&& choice=='d')
	{
		cout<<"\nYOUR ARE ON 3RD FLOOR ";			
	}
	else if(choice=='O'&& choice=='o')
	{
		cout<<"\nDOOR CANNOT BE OPENED WHILE RUUNING : ";	
	}
	else if(choice=='C'&& choice=='c')
	{
		cout<<"\nDOOR CLOSED ";
	}
	else if(choice=='A'&& choice=='a')
	{
		cout<<"YOU ARE ON FLOOR : "<<e1.currentlocation;
	}
	cout<<"ID : "<<e1.id<<"\t"<<"Current Location : "<<e1.currentlocation<<"\t"<<"COMPANY : "<<e1.company<<"\tMODEL : "<<e1.model<<"\tValidity : "<<e1.validity<<"\t Maxload : "<<e1.maxload<<"\t Active :"<<e1.isactive;
	return 0;
}