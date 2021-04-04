import java.awt.*;
import javax.swing.*;
import java.awt.event.*;
public class menu extends JFrame 
{     
JMenu m1,m2;
JMenuBar mb;
JMenuItem m1d,m1a,m1b,m1c,m2a,m2b,m2c,m2d,m2e;
public static void main(String[] args)
{
    JFrame f = new JFrame("MENUBAR");
    JMenu m1 = new JMenu ("File");
    JMenu m2 = new JMenu("Edit");
    JMenuBar mb = new JMenuBar();
    JMenuItem m1a = new JMenuItem("File");
    JMenuItem m1b = new JMenuItem("Rename");
    JMenuItem m1c = new JMenuItem("Save");
    JMenuItem m1d = new JMenuItem("Save As");
    JMenuItem m2a = new JMenuItem("Cut");
    JMenuItem m2b = new JMenuItem("Copy");
    JMenuItem m2c = new JMenuItem("Paste");
    JMenuItem m2d = new JMenuItem("Select");
    JMenuItem m2e = new JMenuItem("Replace");
    mb.setBounds(0,0, 100, 50);
    m1.setBounds(100,100, 50, 50);
    m1a.setBounds(100,100, 50, 50);
    m1b.setBounds(100,100, 50, 50);
    m1c.setBounds(100,100, 50, 50);
    m1d.setBounds(100,100, 50, 50);
    m2.setBounds(100,300, 50, 50);
    m2a.setBounds(100,300, 50, 50);
    m2b.setBounds(100,300, 50, 50);
    m2c.setBounds(100,300, 50, 50);
    m2d.setBounds(100,300, 50, 50);
    m2e.setBounds(100,300, 50, 50);
    m1.add(m1a);
    m1.add(m1b);
    m1.add(m1c);
    m1.add(m1d);
    m2.add(m2a);
    m2.add(m2b);
    m2.add(m2c);
    m2.add(m2d);
    m2.add(m2e);
    mb.add(m1);
    mb.add(m2);
    f.setJMenuBar(mb); 
    f.setSize(500, 500); 
    f.setVisible(true);
}  
}  

