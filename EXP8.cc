//AIM:Write a program to implement the manipulation of live objects.
#include<iostream>
#include<cstring>
using namespace std;
class student
{
    int rollno;
    char *name;
    public:
        student()
        {
            char flag,str[50];
            cout<<"Do you want to initialize?";
            cin>>flag;
            if(flag=='y'||flag=='Y')
            {
                cout<<"Enter rollno";
                cin>>rollno;
                cout<<"Enter name";
                cin>>str;
                name=new char[strlen(str)+1];
                strcpy(name,str);
            }
            else
            {
                rollno=0;
                name=NULL;
            }
        }
        student (int rollnoin)
        {
            rollno=rollnoin;
            name=NULL;
        }
        student(int rollnoin,char *namein)
        {
            rollno=rollnoin;
            name=new char[strlen(namein)+1];
            strcpy(name,namein);
        }
        ~student()
        {
            if(name)
                delete name;
        }
        void set(int rollnoin,char *namein)
        {
            student (rollnoin,namein);
        }
        void show()
        {
            if(rollno)
                cout<<rollno<<endl;
            else
                cout<<"not initialized"<<endl;
            if(name)
                cout<<name<<endl;
            else
                cout<<"not initialized"<<endl;
            
        }
};
int main()
{
    student *s1,*s2,*s3;
    s1=new student();
    s2=new student(1);
    s3=new student(2,"shikha");
    cout<<"Live object contains"<<endl;
    s1->show();
    s2->show();
    s3->show();
    delete s1;
    delete s2;
    delete s3;
    return 0;
}
/*OUTPUT
Do you want to initialize?y
Enter rollno05    
Enter namelee
Live object contains
5
lee
1
not initialized
2
shikha
*/
