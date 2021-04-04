import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
public class kesari extends JFrame implements ItemListener 
{
JCheckbox c1,c2,c3,c4;
JPanel top,p1;
JPanel south,north,east,west;
JPanel bottom;
JFrame fr;
kesari()
{ fr=new Frame("TOURS & TRAVEL");
fr.setLayout(new BorderLayout());
CheckboxGroup cg=new CheckboxGroup();
c1=new JCheckbox("SOUTH",cg,true);
c2=new JCheckbox("NORTH",cg,true);
c3=new JCheckbox("EAST",cg,true);
c4=new JCheckbox("WEST",cg,true);
top=new JPanel();
top.setLayout(new FlowLayout(FlowLayout.LEFT));
JLabel l1=new JLabel("Kesari Tours & Travels");
top.add(l1);
fr.add(top,BorderLayout.NORTH);
p1=new JPanel();
p1.setLayout(new GridLayout(4,1));
p1.add(c1);
p1.add(c2);
p1.add(c3);
p1.add(c4);
fr.add(p1,BorderLayout.WEST);
south=new JPanel();
south.setLayout(new GridLayout(3,1));
JLabel loc1=new JLabel("COONOOR");
JLabel loc2=new JLabel("HAMPI");
JLabel loc3=new JLabel("GOKARNA");
south.add(loc1);
south.add(loc2);
south.add(loc3);
south.setVisible(false);

north=new JPanel();
north.setLayout(new GridLayout(3,1));
JLabel n1=new JLabel("MUSSOORIE");
JLabel n2=new JLabel("HARIDWAR");
JLabel n3=new JLabel("KULLU & MANALI");
north.add(n1);
north.add(n2);
north.add(n3);
north.setVisible(false);
east=new JPanel();
east.setLayout(new GridLayout(3,1));
JLabel e1=new JLabel("SUNDARBANS");
JLabel e2=new JLabel("DARJEELING");
JLabel e3=new JLabel("SEVEN SISTERS");
east.add(e1);
east.add(e2);
east.add(e3);
east.setVisible(false);
west=new JPanel();
west.setLayout(new GridLayout(3,1));
JLabel w1=new JLabel("SURAT");
JLabel w2=new JLabel("MUMBAI");
JLabel w3=new JLabel("NAGPUR");
west.add(w1);
west.add(w2);
west.add(w3);
west.setVisible(false);
bottom=new JPanel();
bottom.setLayout(new FlowLayout(FlowLayout.LEFT));
JLabel l2=new JLabel("Total: ");
JTextField tf=new JTextField(10);
bottom.add(l2);
bottom.add(tf);
fr.add(bottom, BorderLayout.SOUTH);
c1.addItemListener(this);
c2.addItemListener(this);
c3.addItemListener(this);
c4.addItemListener(this);
fr.setSize(300,400);
fr.setVisible(true);

}
public void itemStateChanged(ItemEvent eve)
{
if(eve.equals(c1))
{ north.setVisible(false);
south.setVisible(true);
east.setVisible(false);
west.setVisible(false);
fr.add(south,BorderLayout.EAST);
}
else if(eve.equals(c2))
{ north.setVisible(true);
south.setVisible(false);
east.setVisible(false);
west.setVisible(false);
fr.add(north,BorderLayout.EAST);
}
else if(eve.equals(c3))
{ north.setVisible(false);
south.setVisible(false);
east.setVisible(true);
west.setVisible(false);
fr.add(east,BorderLayout.EAST);
}
else if(eve.equals(c4))
{ north.setVisible(false);
south.setVisible(false);
east.setVisible(false);
west.setVisible(true);
fr.add(west,BorderLayout.EAST);
}
}
public static void main (String args[])
{ 
    new kesari();
}
}

