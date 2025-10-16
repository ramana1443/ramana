#include <iostream>
using namespace std;
class student{
	public:
		int id;
		float marks;
		void display(){
			cout << "id:" <<id<<",marks:"<<marks<<endl;
					}
};
int main(){
	student s1;
	s1.id = 101;
	s1.marks = 95.5;
	student* ptr = &s1;
	ptr->id = 102;
	ptr->marks = 98.5;
	ptr->display();
	return 0;
}
