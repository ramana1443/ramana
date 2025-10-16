#include <iostream>
using namespace std;
class a{
	public:
		int x = 100;
};
class b : virtual public a{
};
class c : virtual public a{
};
class d : public b, public c{
};
int main() {
	d obj;
	cout << obj.x << endl;
	return 0;
}
