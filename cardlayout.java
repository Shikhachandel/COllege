import java.awt.*;  
import java.awt.event.*;  
import javax.swing.*;  
public class cardlayout extends JFrame implements ActionListener
{  
CardLayout card;  
JButton b1,b2,b3;  
Container c;  
 cardlayout()
{  
          
 c=getContentPane();  
card=new CardLayout(40,30);  
c.setLayout(card);  
          
b1=new JButton("JAVA");  
b2=new JButton("C++");  	
b3=new JButton("PYTHON");  
b1.addActionListener(this);  
b2.addActionListener(this);  
b3.addActionListener(this);  
              
c.add("a",b1);
c.add("b",b2);
c.add("c",b3);  
                          
}  
public void actionPerformed(ActionEvent e) 
{  
  card.next(c);  
}  
  
public static void main(String[] args) 
{  
cardlayout cl=new cardlayout();  
cl.setSize(40,40);  
cl.setVisible(true);  
cl.setDefaultCloseOperation(EXIT_ON_CLOSE);  
}  
}  
