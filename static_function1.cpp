#include <iostream>

using namespace std;

class calculus
{
	public:

		int add(int a,int b, int c)
		{
			return a + b + c;
		}

		float add(int a, int b, float c)
		{
			return a + b + c;
		}
		
	        int add(float a, int b)
		{
			return a + b;
		}

};

int main(void)
{
	calculus C;

	cout << C.add(125,3250,55.8) << endl;
	cout << C.add(132,22222,0) << endl;
	cout << C.add(23,99.99) << endl;

	return 0;
}
	       



