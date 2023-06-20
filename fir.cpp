#include<iostream>

using namespace std;

class Car
{
	public:

		string name;

		 void display()
		 {
			 cout <<"\n your name\n"<< name;
		
		 }

};

int main()

{

	Car C1,C2;

	C1.name = "\n Ram \n";
	C2.name = "\n janki\n";

	C1.display();

	C2.display();
	return 0;
};






