//AIM:WAP to implement operator overloading for matrices and stream operators.
#include<iostream>
using namespace std;
class matrix
{
	public:
	int a[3][3];
	friend ostream&operator<<(ostream&out,matrix&m);
	friend istream&operator>>(istream&in,matrix&m);
    matrix operator+(matrix m);
};
ostream&operator<<(ostream&out,matrix&m)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            out<<""<<m.a[i][j];
        }
    }
return out;
}
istream&operator>>(istream&in,matrix&m)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            in>>m.a[i][j];
        }
	}
return in;
}
matrix matrix::operator+(matrix m)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            m.a[i][j]=m.a[i][j]+a[i][j];
        }
    }
return m;
}
int main()
{
    matrix m1,m2,m;
    cout<<"\nEnter matrix 1\n\n";
    cin>>m1;
    cout<<"\nEnter matrix 2\n\n";
    cin>>m2;
    m=m1+m2;
    cout<<"Addition of Matrices : \n\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<m.a[i][j]<<"\t";
        }
        cout<<"\n";
    }
return 0;
}
/*output

Enter matrix 1                                                                  
                                                                                
4 6 8                                                                           
2 3 1                                                                           
9 5 6                                                                           
                                                                                
Enter matrix 2                                                                  
                                                                                
6 7 8                                                                           
1 2 3                                                                           
8 9 9                                                                           
Addition of Matrices :                                                          
                                                                                
10      13      16                                                              
3       5       4                                                               
17      14      15      */



