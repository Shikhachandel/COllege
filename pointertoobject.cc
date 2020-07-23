//AIM:WAP to implement pointer to object.
#include<iostream>
using namespace std;
class student
{
    public:
        int roll;
        string n;
        student()
        {
            cout<<"Constructor invoked"<<endl;
            roll=1;
            n='s';            
        }
        ~student()
        {
            cout<<"Destructor called";
        }
        void show()
        {
            cout<<roll<<"  "<<n<<endl;
        }
};
int main()
{
    student *obj;
    obj=new student();
    obj->show();
    delete obj;
    return 0;
}
/*OUTPUT
Constructor invoked
1  s
Destructor called
*/
