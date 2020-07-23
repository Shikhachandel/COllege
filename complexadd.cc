//PROGRAM:
#include<iostream>
using namespace std;
class complex
{
    public:
    float real;
    float imag;
    complex()
    {
        real=0;
        imag=0;
    }
    int getdata()
    {
        cout<<"Enter real part";
        cin>>real;
        cout<<"Enter imaginary part";
        cin>>imag;
    }
    complex add(complex c2);
    int outdata()
    {
        cout<<real<<"+"<<"i"<<imag;
    }
};
complex complex ::add(complex c2)
{
    complex temp;
    temp.real=real+c2.real;
    temp.imag=imag+c2.imag;
    return temp;
}
int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c1.add(c2);
    c3.outdata();
    return 0;
}
/*OUTPUT
 hermione@granger:~/Documents$ g++ complexadd.cc
hermione@granger:~/Documents$ ./a.out
Enter real part23
Enter imaginary part1
Enter real part32
Enter imaginary part-4
55+i-3
CONCLUSION:Successfully implemented program to add two complex number.*/
