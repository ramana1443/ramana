#include <iostream>
using namespace std;
class mammal{
	public:
		mammal(){
			cout<<"mammals can give direct birth."<<endl;
		}
};
class wingedanimal {
	public:
		wingedanimal(){
			cout<<"winged animal can flip."<<endl;
		}
};
class bat: public mammal, public wingedanimal {};
int main(){
	bat b1;
	return 0;
}
