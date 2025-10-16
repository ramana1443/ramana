# include <iostream>
using namespace std;
class vehicle{
	public:
		void startengine(){
			cout<<"engine started."<<endl;
		}
};

class car: public vehicle{
	public:
		void drive(){
			cout<<"car is driving."<<endl;
		}
};

int main(){
	car mycar;
	mycar.startengine();
	mycar.drive();
	return 0;
}
