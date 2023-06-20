#include<iostream>
using namespace std;

class car
{

	int roll_num;

	public:

	string name;

	void display()
	{
		cout <<"\n Name :"<< name;
		cout <<"\n Roll no. :"<< roll_num;
	}

	void  set_roll_num(int n)
	{
		roll_num = n;
	}

	car()
	{
		roll_num = 00;
		name = "Shree Ram";
	}
	car(int r)
	{
		roll_num = r;
		name = "MATA JANKI";
	}
	car( string laxman)
	{
		name = laxman;
		roll_num = 99;
	}
	car(int r, string  Hanuman)
	{
		roll_num = r;
		name =  Hanuman;
	}

};
int main()
{
	car c1,c2;
	car c3(50);
	car c4(500,"laxman");
	car c5("Hanuman");

	c1.name = "shree Ram";
	c2.set_roll_num(100);

	c1.display();
	c2.display();
	c3.display();
	c4.display();
	c5.display();

	return 0;
}






		

