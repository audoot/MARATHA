#include<iostream>
using namespace std;

class Car
{
        public:
                string name;

                void display()
                {
                        cout <<"\n Your name is \n"<< name;
                }

};

int main()
{
        Car C1,C2;

        C1.name = "\n Shruti \n";
        C2.name = "\n Mrunali \n";

        C1.display();
        C2.display();

        return 0;
}	
