
import java.awt.*;
import java.awt.event.*;
import javax.swing.*; 
public class Admission extends JFrame implements ActionListener
{
     JButton b,b1;
     TextField t,t1,t2;
     TextArea t3;
public static void main(String[] args)
{

Admission a=new Admission();
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

JButton b = new JButton ("RETRIEVE");
JButton b1 = new JButton ("SUBMIT");

b.addActionListener(a);
b1.addActionListener(a);

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
public void actionPerformed(ActionEvent e){  
     if(e.getSource()==b)
     {
        
     }
     else if(e.getSource()==b1)
     {
          t.setText(" ");
          t1.setText(" ");
          t2.setText(" ");
          t3.setText(" ");
     }
}  
}
