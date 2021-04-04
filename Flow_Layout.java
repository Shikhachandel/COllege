import java.awt.*;  
import javax.swing.*;  
  
public class Flow_Layout{  
JFrame f;  
Flow_Layout(){  
    f=new JFrame();  
      
    JButton b1=new JButton("A");  
    JButton b2=new JButton("B");  
    JButton b3=new JButton("C");  
    JButton b4=new JButton("D");  
    JButton b5=new JButton("E");  
              
    f.add(b1);f.add(b2);f.add(b3);f.add(b4);f.add(b5);  
      
    f.setLayout(new FlowLayout(FlowLayout.RIGHT));  
    //setting flow layout of right alignment  
  
    f.setSize(300,300);  
    f.setVisible(true);  
}  
public static void main(String[] args) {  
    new Flow_Layout();  
}  
}







