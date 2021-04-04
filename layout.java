import java.awt.*;
import javax.swing.*; 
public class layout extends JFrame
{
public static void main(String[] args)
{

JLabel m=new JLabel("UMIT");
JLabel l=new JLabel("Name:");
JTextField ta = new JTextField(10);
JLabel l1=new JLabel("Branch:");
Choice c=new Choice();
c.add("CST");
c.add("IT");
c.add("ENC");
c.add("EE");
JCheckBox c1=new JCheckBox("Check Box");
JRadioButton c2=new JRadioButton("Radio Button");
JPanel p = new JPanel();
p.add(c);
JPanel p1 = new JPanel();
p1.add(c1); 
JPanel p2 = new JPanel();
p2.add(c2);

m.setBounds(200, 10, 100, 100);
l.setBounds(100,100,100,100);
ta.setBounds(200,100,100,100);
l1.setBounds(100,200, 100, 100);
p.setBounds(200,200,100,100);
p1.setBounds(100,300 ,100, 100);
p2.setBounds(200,300, 100, 100);

JFrame f= new JFrame();
f.setLayout(new GridLayout(5,1));
f.add(m);
f.add(l);
f.add(ta);
f.add(l1);
f.add(p);
f.add(p1);
f.add(p2);
f.setSize(400, 500);  
f.setLayout(null);  
f.setVisible(true);
}
}
