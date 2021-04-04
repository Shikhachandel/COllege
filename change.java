import java.awt.event.*; 
import java.awt.color.*;
import javax.swing.*; 
import java.awt.*;
class change extends Frame implements ActionListener
 {  
    static TextField t;
    static Frame f; 
    static Button b1; 
    static Button b2; 
    static Button b3; 
  
    public static void main(String[] args) 
    { 
        f = new Frame("textfield"); 
        b1 = new Button("RED");
        b2 = new Button("BLUE");
        b3 = new Button("YELLOW");
        change te = new change(); 
        b1.addActionListener(te);
        b2.addActionListener(te);
        b3.addActionListener(te); 
        t = new TextField(16);  
        Panel p = new Panel(); 
        p.add(t); 
        p.add(b1);
        p.add(b2);
        p.add(b3);  
        f.add(p); 
        f.setSize(400, 500); 
        f.setVisible(true); 
    } 
  
    public void actionPerformed(ActionEvent e) 
    { 
        String s = e.getActionCommand(); 
        if (s.equals("RED")) { 
            t.setBackground(Color.RED); 
        } 
        if (s.equals("BLUE")) { 
            t.setBackground(Color.BLUE); 
        } 
        if (s.equals("YELLOW")) { 
            t.setBackground(Color.YELLOW); 
        } 
    } 
} 

