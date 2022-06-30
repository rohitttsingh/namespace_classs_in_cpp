
#include <iostream>
using namespace std;

namespace ns
{
	class geek;
}

class ns::geek
{
public:
	void display()
	{
	cout << "ns::geek::display()\n";
	}
};

int main()
{
	ns::geek obj;
	obj.display();
	return 0;
}
