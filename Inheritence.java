class A
{
    public void N()
    {
        System.out.println("Hi,I am Shikha Chandel"); 
    }
}
class B extends A
{
    public void N1() 
    { 
        System.out.println("This is single inheritence"); 
    } 
}
class Inheritence
{
    public static void main(String[] args) 
    { 
        B obj = new B(); 
        obj.N();
        obj.N1();
    } 
}
/* hermione@granger:~/Desktop/JAVA$ java Inheritence
Hi,I am Shikha Chandel
This is single inheritence*/