//AIM:Desgn classes USING cLASS tEMPLATE such that they supports the following statements :Rupees r1,r2; Dollar d1,d2;  d1=r1;//converts rupees into dollars r2=d2;// converts dollar into rupees.
 //WAP which does such conversions accordeing to world market value.
#include<iostream>
using namespace std;
template <class T>
class Rupees
{
    T rup;
    public:
        Rupees()
        {
            rup=0.0;
        }
        float GetRupees()
        {
            return (rup);
        }
        Rupees (float initRup)
        {
            rup=initRup;
        }
        void input()
        {
            cout<<"Enter Rupees";
            cin>>rup;
        }
        void output()
        {
            cout<<"Rupees:"<<GetRupees();
        }
};
template <class D>
class Dollar
{
    D dollar;
    public:
        Dollar()
        {
            dollar=0.0;
        }
        float GetDollar()
        {
            return dollar;
        }
        Dollar (Rupees <D> rup)
        {
            dollar=rup.GetRupees()*0.013;
        }
        void input()
        {
            cout<<"Enter Dollar";
            cin>>dollar;
        }
        void output()
        {
            cout<<"Dollar:"<<dollar<<endl;
        }
	operator Rupees<D>() const      
	{
            return (Rupees <D>(dollar *75.82));
        }
};
int main()
{
    Dollar <float> d1,d2;
    Rupees <float> r1,r2;
    d1.input();
    r1=d1;
    r1.output();
    r2.input();
    d2=r2;
    d2.output();
    return 0;
}
/*OUTPUT
Enter Dollar32
Rupees:2426.24
Enter Rupees432
Dollar:5.616*/

