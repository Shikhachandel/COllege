//AIM:Desgn classes such that they supports the following statements :Rupeesr1,r2; Dollar d1,d2;  d1=r1;//converts rupees into dollars r2=d2;// converts dollar into rupees.
 //WAP which does such conversions accordeing to world market value.
#include<iostream>
using namespace std;
class Rupees
{
    float rup;
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
class Dollar
{
    float dollar;
    public:
        Dollar()
        {
            dollar=0.0;
        }
        float GetDollar()
        {
            return dollar;
        }
        Dollar (Rupees  rup)
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
          operator  Rupees ()
        {
            return (Rupees (dollar *75.82));
        }
      
};
int main()
{
    Dollar  d1,d2;
    Rupees  r1,r2;
    d1.input();
    r1=d1;
    r1.output();
    r2.input();
    d2=r2;
    d2.output();
    return 0;
}
/*OUTPUT
 hermione@granger:~/Desktop$ g++ rupeedollar.cc
hermione@granger:~/Desktop$ ./a.out
Enter Dollar75
Rupees:5686.5Enter Rupees75
Dollar:0.975*/

