#include <iostream>
using namespace std;
class a{
	public:
		int value;
};
class b : public a{
};
class c : public a{
};
class d : public b, public c{
	public:
		void setvalues(int v1, int v2){
			b::value = v1;
			c::value = v2;
		}
		void display(){
			cout<<"b's value:"<<b::value<<endl;
			cout<<"c's value:"<<c::value<<endl;
		}
};
int main(){
	d obj;
	obj.setvalues(10,20);
	obj.display();
	return 0;
	}
