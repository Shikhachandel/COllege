//AIM: WAP to implement multiple inheritance to find the area of rectangle and total cost to paint the complete area.
#include<iostream>
using namespace std;
class sides
{
    protected:
        int a,b,ar;
        sides()
        {
            cout<<"Enter sides of rectangle";
            cin>>a>>b;
            ar=a*b;
        }
};
class paint
{
    protected:
        int cost;
        paint()
        {
            cout<<"Enter the cost for 1sqmt to paint";
            cin>>cost;
        }
};
class costs:public sides,public paint
{
    public: 
        int r;
        costs()
        {
            r=ar*cost;
            cout<<"Cost is "<<r;   
        }
};
int main()
{
    costs s;
    return 0;
}
/*OUTPUT
Enter sides of rectangle4 5
Enter the cost for 1sqmt to paint32
Cost is 640
*/
