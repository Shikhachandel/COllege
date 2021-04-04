import java.awt.*;
import javax.swing.*; 
import java.awt.event.*; 
public class IRCTC extends JFrame 
{
public static void main(String[] args)
{

JLabel l1=new JLabel("Name of the passenger:");
JTextField t1 = new JTextField(20);
JLabel l2=new JLabel("Source Station:");
JTextField t2 = new JTextField(20);
JLabel l3=new JLabel("Destination Station:");
JTextField t3 = new JTextField(20);
JLabel l4=new JLabel("Date yyyy-mm-dd:");
JTextField t4 = new JTextField(20);
JLabel l5=new JLabel("Class:");
Choice c=new Choice();
c.add("First A.C.");
c.add("Second A.C.");
c.add("Third A.C.");
c.add("Second Class");
c.add("Slipper Class");
JLabel l8=new JLabel("Number of Ticket:");
JTextField t8 = new JTextField(20);
JLabel l7=new JLabel("Book Ticket:");
JRadioButton c1=new JRadioButton("Yes");
JRadioButton c2=new JRadioButton("No");
ButtonGroup g =new ButtonGroup();
g.add(c1);
g.add(c2); 
JLabel l6 = new JLabel ("Pay");
JTextField t6 = new JTextField(20);
JPanel p = new JPanel();
p.add(c);
JButton b = new JButton("Submit");

l1.setBounds(100,100,300,50);
t1.setBounds(400,100,300,50);
l2.setBounds(100,200, 300, 50);
t2.setBounds(400,200,300,50);
l3.setBounds(100,300, 300, 50);
t3.setBounds(400,300,300,50);
l4.setBounds(100,400, 300, 50);
t4.setBounds(400,400,300,50);
l5.setBounds(100,500, 300, 50);
p.setBounds(400,500,300,50);
l8.setBounds(100,600, 300, 50);
t8.setBounds(400,600,300,50);
l7.setBounds(100,700, 300, 50);
c1.setBounds(400,700, 300, 50);
c2.setBounds(800,700, 300, 50);
l6.setBounds(100,800, 300, 50);
t6.setBounds(400,800,300,50);
b.setBounds(800,800,300,50);

JFrame f= new JFrame("I.R.C.T.C.");
f.setLayout(new GridLayout(5,1));
f.add(l1);
f.add(t1);
f.add(l2);
f.add(t2);
f.add(l3);
f.add(t3);
f.add(l4);
f.add(t4);
f.add(l5);
f.add(p);
f.add(l8);
f.add(t8);
f.add(l7);
f.add(c1);
f.add(c2);
f.add(l6);
f.add(t6);
f.add(b);
f.setSize(400, 500);  
f.setLayout(null);  
f.setVisible(true);
}

}

