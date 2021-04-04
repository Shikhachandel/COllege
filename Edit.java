import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;
public class Edit extends Frame implements ActionListener
{    
Button b1,b2,b3,b4,b5;
TextField t1;
Label l;
String word;
public static void main(String[] args)
{
Edit obj = new Edit();
}
Edit()
{
Frame fr = new Frame("Edit Page");
fr.setLayout(null);
t1=new TextField();
l=new Label("");
b1=new Button("Cut");
b2=new Button("Copy");
b3=new Button("Paste");
b4=new Button("Select");
b5=new Button("Replace");
b1.addActionListener(this);
b2.addActionListener(this);
b3.addActionListener(this);
b4.addActionListener(this);
b5.addActionListener(this);
t1.setBounds(150,50,200,30);
b1.setBounds(100,80,80,20);
b2.setBounds(200,80,80,20);
b3.setBounds(300,80,80,20);
b4.setBounds(175,120,80,20);
b5.setBounds(275,120,80,20);
l.setBounds(130,150,150,20);
fr.add(t1);
fr.add(b1); 
fr.add(b2);  
fr.add(b3);
fr.add(b4);  
fr.add(b5);
fr.add(l);
fr.setSize(400,300);
fr.setVisible(true);
}
public void actionPerformed(ActionEvent e)
{
String s=t1.getText();
if(e.getSource()==b1)
{
s=t1.getText();
word=s;
l.setText("Text is Cut");
t1.setText("");
}
else if(e.getSource()==b2)
{
s=t1.getText();
word=s;
l.setText("Text Copied");
}
else if(e.getSource()==b3)
{
l.setText(word);
}
else if(e.getSource()==b4)
{
t1.selectAll();
t1.requestFocus();
l.setText("Text Selected");
}
else if(e.getSource()==b5)
{
t1.setText("Hello");
l.setText("Text is Replaced");
}
 }
}