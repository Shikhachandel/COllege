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
    complex operator + (complex c2)
    {
        complex temp;
        temp.real=real+c2.real;
        temp.imag=imag+c2.imag;
        return temp;
    }
    int outdata()
    {
        cout<<real<<"+"<<"i"<<imag;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c1+c2;
    c3.outdata();
    return 0;
}
/*OUTPUT
hermione@granger:~/Desktop$ g++ binaryoperator.cc
hermione@granger:~/Desktop$ ./a.out
Enter real part3
Enter imaginary part2
Enter real part3
Enter imaginary part4
6+i6
CONCLUSION:Successfully implemented program of binary operator.*/
