// C++learn.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


class Cars
{
private:
	float mileage;
	int plateno;
	int *wheels;
protected:
	int year;
public:
	
	int speed;
	
	Cars()
	{

	}
	

	Cars(float l,int p)     // Parametrized constructor
	{
		mileage = l;
		plateno = p;
		//wheels = new int;
		//*wheels = z;
		
		cout << " Object creation using parametrized constructor\t" << mileage << "\t" << plateno;// << "\t";// << *wheels << endl;

	}

	//Cars(const Cars &obj);
	~Cars(); //Destructor


	void showspeed()        //inline functions by defalut which are preprocessed you can also use inline reduces the overhead of fn
	{						//Calling				
		cout<< "Speed of the car\t" << speed<<endl;
	}
	void display()
	{
		cout << "all the objects" << endl << mileage << plateno;//<< *wheels;

	}
	void showmileage();

	
	
};

class derivedCars:Cars          // Drived Class
{
public:
	void setyear(int);
	int getyear()
	{
		return year;
	}
};

class frndclass
{
	friend class Cars;
	private
	int pvt;
public:
	
	void showpvt()
	{
		cout << "Private Elements-mileage" << mileage;
	}
	void setpvt(float v)
	{
		mileage = v;	
		cout << "Mileage Set";
	}
};

void derivedCars::setyear(int a)
{
	year = a;
}

void Cars::showmileage()  //scope resolution operator for defining outside
{
	cout << "Mileagae of the car\t" << mileage<<endl;
}

Cars::~Cars()
{
	cout << "The object is succesfuly deleted";
	//delete wheels;
}

//Cars::Cars(float x, int y) :mileage(x), plateno(y)
//{
//	cout << "Alternative syntax";
//}

//Cars::Cars(const Cars &obj)
//{
//	cout << "Copy constructor called\t\t" << endl;
//	//wheels = new int;
//	//*wheels = *obj.wheels;
//}


int main()
{
	Cars model;
	model.speed = 25;
	model.showspeed();

	//Derived Class access
	derivedCars mdl;
	mdl.setyear(55);
	cout << "The year is\t" << mdl.getyear() << endl;

	//parametrized constructor
	Cars newmodel(24.75,234); 

	//Copy constructor
	//Cars modelcopy = newmodel;
	//modelcopy.display();

	//Friend Class
	frndclass cls;
	cls.showpvt();
	cls.setpvt(10.5);

	int g, f, d;
	g=
	cout << g;

	system("pause");
    return 0;
}

