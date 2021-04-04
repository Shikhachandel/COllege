import java.awt.*;
import javax.swing.*; 
public class Bank extends JFrame
{
public static void main(String[] args)
{

JLabel l=new JLabel("Customer:");
JTextField ta = new JTextField(20);
JLabel l2=new JLabel("Account No:");
JTextField t = new JTextField(20);
JLabel l1=new JLabel("Type of account:");
Choice c=new Choice();
c.add("Savings");
c.add("Current");
JCheckBox c1=new JCheckBox("Male");
JCheckBox c2=new JCheckBox("Female");
JPanel p = new JPanel();
p.add(c);
JPanel p1 = new JPanel();
p1.add(c1); 
JPanel p2 = new JPanel();
p2.add(c2);
JButton b = new JButton("Submit");

l.setBounds(100,300,100,100);
ta.setBounds(300,300,100,100);
l2.setBounds(100,400, 100, 100);
t.setBounds(300,400,100,100);
l1.setBounds(100,500, 100, 100);
p.setBounds(300,500,100,100);
p1.setBounds(100,600 ,100, 100);
p2.setBounds(300,600, 100, 100);
b.setBounds(300,700,100,100);

JFrame f= new JFrame("Bank");
f.setLayout(new GridLayout(5,1));
f.add(l);
f.add(ta);
f.add(l2);
f.add(t);
f.add(l1);
f.add(p);
f.add(p1);
f.add(p2);
f.add(b);
f.setSize(400, 500);  
f.setLayout(null);  
f.setVisible(true);
}
}

