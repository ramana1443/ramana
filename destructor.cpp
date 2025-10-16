#include <iostream>
using namespace std;
class student{
      public:
             student(){
                       cout<<"constructor called."<<endl;
                       }
                       ~student(){
                        cout<<"destructor called."<<endl;
                       }
};
int main(){
    student s1;
    return 0;
}