import javax.swing.*; 
public class MyApplet 
{ 
    public static void main(String[] args) 
    { 
        JFrame fr = new JFrame(); 
  
        JButton b1 = new JButton("click"); 
        JTextField t = new JTextField("10");
        JTextArea ta = new JTextArea(1,2); 

        t.setBounds(100, 100, 100, 100);
        ta.setBounds(200,200,200,200);
        b1.setBounds(10, 10 ,80, 80);
   
        fr.add(b1); 
        fr.add(t); 
        fr.add(ta);

        fr.setSize(400, 500) ;  
        fr.setLayout(null);  
        fr.setVisible(true); 
    } 
} 