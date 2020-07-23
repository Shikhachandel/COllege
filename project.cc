#include<iostream>
#include<cstdlib> 
int seats[10][10]={1};             //array initialization
using namespace std;
class book;//
class search;//
int outdata(search s[99],book b,int n); //initialization as it is not a  class member
int details(book b);
class search
{
  private:
  char name[40];                        //data members
  int age,t,row,line,k;
  char gender;
  public:
  int setdata();
  int movietype();                     //member functions outside class
  int selectseat(int n);
  int display();
  search( int r)                      //one argument constructor 
  {
    cout<<"WELCOME TO PVR CINEMA"<<endl;
  }
  search()                           //default constructor with no argument
  {
      cout<<" ";
  }
  ~search()                        //destructor
  {
     cout<<" ";
  }
  friend class book;              //class book can access private data
  friend int outdata(search s[99],book b,int n);     //friend function
};
int search::setdata()               //member functions outside class with scope resolution
{
  cout<<endl<<"enter the name:";
  cin>>name;
  cout<<"enter gender:";
  cin>>gender;
  cout<<"enter age:";
  cin>>age;
  return 0;
}
int search::movietype()
{
  int t;//
  cout<<"Enter 1 for TANHAJI movie,Enter 2 for JUMANJI ,Enter 3  for FROZEN 2 "<<endl;
  cin>>t;
  switch(t)          //switch case
  {
    case 1:
    cout<<"TANHAJI";
    break;

    case 2:
    cout<<"JUMANJI";
    break;

    case 3:
    cout<<"FROZEN 2";
    break;

    default:
    cout<<"ENTER AGAIN!!";
    movietype();//
  }
  return t;
}
inline int search::selectseat(int n)                //inline function
{
  int i;
    cout<<"which row you want to seat:";
    cin>>row;
    cout<<"which line";
    cin>>line;
    if(row>10||line>10)
    {
      cout<<"try again";
      selectseat(n);
    }
    else if (seats[row][line]==0)
    {
      cout<<"seats available\n";
      t=row-1;
      k=line-1;
      seats[row][line]=1;
    }
    else if(seats[row][line]==1)
    {
      cout<<"seats are already reserved\n";
      n=n-i+1;
      selectseat(n); 
    }
}
int search::display()
{
  int seats[10][10],i,j;
  cout << "Seats are : \n ";
  for (i = 0; i <=9; i++)
    {
      for (j = 0; j <=9; j++)
        cout <<i<<j << "  ";
      cout << "\n ";
    }
}
class book
{
  private:
  int amount=0;
  public:
  int bill(search s[99],int n)//
  { 
    int i;
    for(i=0;i<n;i++)
    {
      if(s[i].row<=2)
        amount=amount+150;
      else if(s[i].row<5 && s[i].row>2)//
        amount=amount+200;
      else
        amount=amount+250;
    }
    return amount;
   }
 int pay()
 {
  char y;
  cout<<"To pay type 'Y' or to get back type 'N'"<<endl;
  cin>>y;
  if(y=='Y')
      return 1;//
  else if(y=='N')
      return 0;
  else
      cout<<"INVALID";//
 }
  friend int outdata(search s[99],book b,int n);     //friend function
  friend int details(book b);
};
int details(book b)
{
  int i,m,y,number,d[4],c[4],count=0;
  srand(1);
  cout<<"Enter card number";
  cin>>number;
  cout<<"Enter valid till(m/y)";
  cin>>m>>y;
  if(y>=20)
  {
     if(y==20 && m<03)
     {
        cout<<"Invalid"<<endl<<"Enter another card's details";
        details(b);
     }
     for(i=0;i<5;i++)     
     {
        c[i]=rand() % 10;   //random number will get generated using header file <cstlib>
         cout<<c[i]<<" ";
     }
     cout<<"Enter otp provided";
     for(i=0;i<5;i++)
         cin>>d[i];
     for(i=0;i<5;i++)
     {
         if(c[i]==d[i])
         {
            count++;  
            continue;       //rather than terminating the program ,continue will process the next iteration
         }         
         else
         {
              cout<<"INVALID OTP!! TRY AGAIN";
              details(b);
         }
     }
     if(count==5)
     {
       cout<<"Payment is succesful\n";
              return 0;
     }
  }
}
int outdata(search s[99],book b,int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    cout<<"name:"<<s[i].name<<"  age:"<<s[i].age<<"   gender:"<<s[i].gender<<"   Seat is:"<<s[i].t<<s[i].k<<endl;
  }
  cout<<"Total amount:"<<b.bill(s,n);//
  return 0;
}
int main()
{
  int i,n,t;
  search (3);                //nameless object
  search s[99];                //array of objects
  book b;
  t=s[0].movietype();
  cout<<endl<<"Enter number of seats";
  cin>>n;
  for(i=0;i<n;i++)
  {
    s[i].setdata();        //array of objects is called using this
  }
    s[i].display();
  for(i=0;i<n;i++)
  {
    s[i].selectseat(n);
  }
  b.bill(s,n);//
  b.pay(); 
  if(1)
   {
     details(b);
     if(t==1)
        cout<<"TANHAJI\n";
     else if(t==2)
        cout<<"JUMANJI\n";
     else
        cout<<"FROZEN 2\n";
     outdata(s,b,n);
   }
  return 0;
}

