#include <iostream>
using namespace std;
class a{
	public:
		int value;
		a(){
			value = 0;
			cout<<"a's constructor called"<<endl;
		}
};
class b : virtual public a{
	public:
		b(){
			cout<<"b's constructor called"<<endl;
		}
};
class c : virtual public a{
	public:
		c() {
			cout<<"c's constructor called"<<endl;
		}
};
class d : public b, public c {
	public:
		d(){
			cout<<"d's constructor called"<<endl;
		}
		void setvalue(int v){
			value = v;
		}
		void show(){
			cout<<"value:"<<value<<endl;
		}
};
int main(){
	d obj;
	obj.setvalue(50);
	obj.show();
	return 0;
}
