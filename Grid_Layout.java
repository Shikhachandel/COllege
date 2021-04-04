import java.awt.GridLayout;
import javax.swing.*;
public class Grid_Layout
{
JFrame f;
Grid_Layout()
{
f=new JFrame();
JButton b1= new JButton("A"); 
JButton b2= new JButton("B"); 
JButton b3= new JButton("C"); 
JButton b4= new JButton("D"); 
JButton b5= new JButton("E"); 
JButton b6= new JButton("F");
JButton b7= new JButton("G"); 
JButton b8= new JButton("H"); 
JButton b9= new JButton("I");
JButton b10= new JButton("J"); 
JButton b11= new JButton("K");
JButton b12= new JButton("L"); 
f.add(b1);
f.add(b2);
f.add(b3);
f.add(b4);
f.add(b5);
f.add(b6);
f.add(b7);
f.add(b8);
f.add(b9);
f.add(b10);
f.add(b11);
f.add(b12);
f.setLayout(new GridLayout(3,4));
f.setSize(300,300);
f.setVisible(true);
}
public static void main (String[]args) {
new Grid_Layout();
}
}







