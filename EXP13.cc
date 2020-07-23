//AIM:WAP class template based program to implement stack.
#include<iostream>
using namespace std;
template<class Type>
class Stack
{
    Type s[10];
    int top,n;
    public:
    Stack()
    {
        top=-1;
        cout<<"\nEnter the Stack Size : ";
        cin>>n;
    }
    void push(Type element)
    {
        if(top<n-1)
            s[++top]=element;
        else
            cout<<"\n\tstack is full.Can't insert "<<element<<endl;
    }
    void pop()
    {
        if(top<0)
            cout<<"\n\tstack is empty.\n";
        else
            cout<<"\n\tPoped element : "<<s[top--];
    }
    void stk_operation();
};
template<class Type>
void Stack<Type> :: stk_operation()
{
    int choice=1,i;
    Type element;
    while(choice>0 && choice<3)
    {
        cout<<"\n\n\t1.PUSH\t2.POP\tAny int Key To Exit\n\tChoice : ";
        cin>>choice;
        switch(choice)
        {
            case 1 : //push
                cout<<"\n\tEnter the element to push : ";
                cin>>element;
                push(element);
                cout<<"\n\t\tstack content :\n\n\t";
                for(i=0;i<=top;i++)
                cout<<s[i]<<"\t";
                break;
            case 2 : //pop
                pop();
                cout<<"\n\t\tstack content :\n\n\t";
                for(i=0;i<=top;i++)
                cout<<s[i]<<"\t";
                break;
        }
    }
}
int main()
{
    cout<<"STACK OPERATION USING TEMPLATE\n";
    cout<<"\t INT\n";
    Stack<int> stk1; //object of type int, and calls constructor Stack()
    cout<<"\t FLOAT\n";
    Stack<float> stk2; //object of type float, and calls constructor Stack()
    int ch;
    while(1)
    {
        cout<<"\nSTACK OPERATION \n";
        cout<<"\t1.INT STACK\t2.FLOAT STK\tAny int Key To Exit\nChoice : ";
        cin>>ch;
        switch(ch)
        {
            case 1 : 
                    stk1.stk_operation(); //calls skt_operation()
                    break;
            case 2 : 
                    stk2.stk_operation();
                    break;
            default : exit(0);
        }
    }
return 0;
}
/*OUTPUT
STACK OPERATION USING TEMPLATE
	 INT
Enter the Stack Size : 2
	 FLOAT
Enter the Stack Size : 2
STACK OPERATION 
	1.INT STACK	2.FLOAT STK	Any int Key To Exit
Choice : 1
       1.PUSH	2.POP	Any int Key To Exit
	Choice : 1
       Enter the element to push : 2
              stack content :2
1.PUSH	2.POP	Any int Key To Exit
	Choice : 1
Enter the element to push : 2
stack content :
2	2	
1.PUSH	2.POP	Any int Key To Exit
	Choice : 1
Enter the element to push : 2
stack is full.Can't insert 2
stack content :
2	2	
1.PUSH	2.POP	Any int Key To Exit
Choice : 2
Poped element : 2
stack content :2	
1.PUSH	2.POP	Any int Key To Exit
Choice : 2
Poped element : 2
stack content :
1.PUSH	2.POP	Any int Key To Exit
	Choice : 2
    stack is empty.
stack content :
1.PUSH	2.POP	Any int Key To Exit
Choice : 3
STACK OPERATION 
	1.INT STACK	2.FLOAT STK	Any int Key To Exit
Choice : 2
1.PUSH	2.POP	Any int Key To Exit
Choice : 1
Enter the element to push : 3.4
stack content :3.4	
1.PUSH	2.POP	Any int Key To Exit
	Choice : 2
Poped element : 3.4
stack content :
1.PUSH	2.POP	Any int Key To Exit
	Choice : 2
stack is empty.
stack content :
1.PUSH	2.POP	Any int Key To Exit
	Choice : 3
STACK OPERATION 
	1.INT STACK	2.FLOAT STK	Any int Key To Exit
Choice : 3  */

