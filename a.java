import java.awt.*;
import javax.swing.*; 
public class a extends JFrame
{
public static void main(String[] args)
{

JLabel m=new JLabel("UMIT");
JLabel m1=new JLabel("SNDT WOMEN'S UNIVERSITY");

JLabel l=new JLabel("Name:");
JTextField t = new JTextField(10);

JLabel l1=new JLabel("Roll no:");
JTextField t1 = new JTextField(10);

JLabel l2=new JLabel("Email ID:");
JTextField t2 = new JTextField(20);

JLabel l3=new JLabel("Address:");
JTextArea t3 = new JTextArea(4,5);

JButton b = new JButton ("CLEAR");
JButton b1 = new JButton ("SUBMIT");

m.setBounds(200, 0, 100, 50);
m1.setBounds(10, 50, 100, 50);
l.setBounds(100,100,100,50);
t.setBounds(200,100,100,50);
l1.setBounds(100,200,100,50);
t1.setBounds(200,200,100,50);
l2.setBounds(100,300, 100, 50);
t2.setBounds(200,300,100,50);
l3.setBounds(100,400, 100, 50);
t3.setBounds(200,400,100,50);
b.setBounds(100,500, 100, 50);
b1.setBounds(200,500,100,50);

JFrame f= new JFrame();
f.setLayout(new GridLayout(5,5));
f.add(m);
f.add(m1);
f.add(l);
f.add(t);
f.add(l1);
f.add(t1);
f.add(l2);
f.add(t2);
f.add(l3);
f.add(t3);
f.add(b);
f.add(b1);
f.setSize(500, 500);  
f.setLayout(null);  
f.setVisible(true);
}
}

