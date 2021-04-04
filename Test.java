interface GrandParent 
{ 
    default void fun() 
    { 
        System.out.println("Grandparent"); 
    } 
} 
 
interface Parent1 extends GrandParent 
{ 
    static void fun1() 
    { 
        System.out.println("Parent1"); 
    } 
} 
  
// Second Parent Class 
interface Parent2 extends GrandParent
{
    static void fun1() 
    { 
        System.out.println("Parent2"); 
    } 
} 

// classes 
class Test implements Parent1, Parent2 
{ 
   public static void main(String args[]) 
   { 
       Test t = new Test(); 
       t.fun(); 
   } 
} 
/*OUTPUT
(base) hermione@granger:~/Desktop/JAVA$ javac Test.java
(base) hermione@granger:~/Desktop/JAVA$ java Test
Grandparent*/