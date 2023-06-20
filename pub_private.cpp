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
			cout << "\n Roll no. :"<<roll_num;
		}

		void set_roll_num(int n)
		{
			roll_num = n;
		}

		car()
		{
			roll_num = -1;
			name = "Temp";
		}

		car(int r)
		{
			roll_num = r;
			name = "Temp name";
		}

		car(string c)
		{
			name = c;
			roll_num = -99;
		}

		car(int r, string n)
		{
			roll_num = r;
			name = n;
		}


};

int main()
{
	car c1,c2;
	car c3(50);
	car c4(500,"Red");
	car c5("Yellow");

	c1.name ="ashutosh";
	c1.set_roll_num(100);
	
	c1.display();
	c2.display();
	c3.display();
	c4.display();
	c5.display();

	return 0;

}



	
