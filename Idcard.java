import java.awt.*;
import javax.swing.*; 
import java.awt.event.*; 
public class Idcard extends JFrame
{
public static void main(String[] args)
{

JLabel l= new JLabel("S.N.D.T. WOMEN'S UNIVERSITY");
JLabel l1=new JLabel("Name of the student:");
JTextField t1 = new JTextField(40);
JLabel l2=new JLabel("Rollno:");
JTextField t2 = new JTextField(10);
JLabel l3=new JLabel("Degree:");
JTextField t3 = new JTextField(100);
JLabel l4=new JLabel("Date of birth:");
JTextField t4 = new JTextField("dd-mm-yyyy");
JLabel l5=new JLabel("Blood Group:");
JTextField t5 = new JTextField(2);
JLabel l6=new JLabel("Mobile No:");
JTextField t6 = new JTextField(10);
JLabel l7=new JLabel("Branch:");
JTextField t7 = new JTextField(20);

l.setBounds(100,10,400,60);
l1.setBounds(10,90,200,30);
t1.setBounds(180,90,200,30);
l2.setBounds(10,140,50,30);
t2.setBounds(60,140,80,30);
l4.setBounds(160,140,100, 30);
t4.setBounds(260,140,80,30);
l3.setBounds(10,190,80, 30);
t3.setBounds(80,190,80,30);
l5.setBounds(170,190,100, 30);
t5.setBounds(280,190,50,30);
l7.setBounds(10,240, 80, 30);
t7.setBounds(80,240,300,30);
l6.setBounds(180,290,100, 30);
t6.setBounds(280,290,100,30);


JFrame f= new JFrame("USHA MITTAL INSTITUTE OF TECHNOLOGY");
f.setLayout(new GridLayout(5,1));
f.add(l);
f.add(l1);
f.add(t1);
f.add(l2);
f.add(t2);
f.add(l3);
f.add(t3);
f.add(l4);
f.add(t4);
f.add(l5);
f.add(t5);
f.add(l6);
f.add(t6);
f.add(l7);
f.add(t7);
f.setSize(400,400);  
f.setLayout(null);  
f.setVisible(true);   
}
}


