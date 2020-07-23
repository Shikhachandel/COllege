//AIM:WAP to implement object composition and delegation.
//PROGRAM:
#include<iostream>
using namespace std;
class name
{
    private:
        char name[12];
    public:
        void show()
        {
            cout<<"Enter name";
            cin>>name;
        }
        void display()
        {
             cout<<name<<"  ";
        }
};
class age
{
    private:
        int age;
    public:
        void show()
        {
            cout<<"Enter age";
            cin>>age;
        }
        void display()
        {
             cout<<age<<" ";
        }
};
class gender
{
    public: 
        char gender;
        name s2;
        age p;
        void show()
        {
            s2.show();
            p.show();
            cout<<"Enter gender";
            cin>>gender;   
        }
        void display()
        {
            s2.display();
            p.display();
            cout<<gender<<"  ";
        }
};
int main()
{
    gender s1;
    s1.show();
    s1.display();
    return 0;
}
/*OUTPUT
Enter nameshikha
Enter age20
Enter genderF
shikha  20 F 
*/
