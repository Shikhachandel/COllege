import java.awt.*;
import java.awt.event.*; 
import javax.swing.*; 
class AddSub extends Frame implements ActionListener
 {  
    static TextField t1;
    static TextField t2;
    static TextField t3;
    static Frame f; 
    static Button b1; 
    static Button b2; 

    public static void main(String[] args) 
    { 
        f = new Frame("ADD & SUB"); 
        b1 = new Button("ADD"); 
        b2 = new Button("SUB"); 
        AddSub te = new AddSub(); 
        b1.addActionListener(te);
        b2.addActionListener(te); 
        t1 = new TextField(10); 
        t2 = new TextField(10); 
        t3 = new TextField(10);  
        Panel p = new Panel(); 
        p.add(t1); 
        p.add(t2); 
        p.add(t3); 
        p.add(b1); 
        p.add(b2);  
        f.add(p); 
        f.setSize(200, 300); 
        f.setVisible(true); 
    } 
  
    public void actionPerformed(ActionEvent e) 
    { 
        String s = e.getActionCommand(); 
        if (s.equals("ADD")) { 
            String s1 = t1.getText();
            int a1 = Integer.parseInt(s1);
            String s2 = t2.getText();
            int a2 = Integer.parseInt(s2);
            int a3 = a1 + a2;
            t3.setText(String.valueOf(a3));
        } 
        if (s.equals("SUB")) { 
            String s1 = t1.getText();
            int a1 = Integer.parseInt(s1);
            String s2 = t2.getText();
            int a2 = Integer.parseInt(s2);
            int a3 = a1 - a2;
            t3.setText(String.valueOf(a3));
        } 
    } 
}
