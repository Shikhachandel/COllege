//AIM:WAP to implement copy constructor.
#include<iostream>
using namespace std;
class vector
{
    int *v;
    int sz;
    public:
        vector (int size)
        {
            sz=size;
            v=new int[size];
        }
        vector (vector  &v2);
        ~vector()
        {
            delete (v);
        }
        int &elem(int i)
        {
            if(i>=sz)
            {
                cout<<"Error";
                return i ;
            }
            else
                return v[i];
        }
        void show();
};
vector :: vector(vector &v2)
{
    sz=v2.sz;
    v=new int[v2.sz];
    for(int i=0;i<v2.sz;i++)
    {
        v[i]=v2.v[i];
    }
    cout<<"COPY CONSTRUCTOR"<<endl;
}
void vector::show()
{
    for(int i=0;i<sz;i++)
        cout<<elem(i)<<" ,";
}
int main()
{
    vector v1(5),v2(5);
    for(int i=0;i<5;i++)
    {
        v2.elem(i)=i+1;
    }
    v1=v2;
    vector v3=v2;
    cout<<"VECTOR1"<<"   ";
    v1.show();
    cout<<endl<<"VECTOR2"<<"   ";
    v2.show();
    cout<<endl<<"VECTOR3"<<"    ";
    v3.show();
    return 0;
}
/*OUTPUT
COPY CONSTRUCTOR
VECTOR1  1 ,2 ,3 ,4 ,5 ,
VECTOR2  1 ,2 ,3 ,4 ,5 ,
VECTOR3  1 ,2 ,3 ,4 ,5 ,*/
