import java.awt.*; 
import javax.swing.*; 
  
class choice { 
  
    // choice 
    static Choice c; 
  
    // frame 
    static JFrame f; 
  
    // default constructor 
    choice() 
    { 
    } 
  
    // Main Method 
    public static void main(String args[]) 
    { 
  
        // create a frame 
        f = new JFrame("choice"); 
  
        // create e panel 
        JPanel p = new JPanel(); 
  
        // create a choice 
        c = new Choice(); 
  
        // add element to the list 
        c.add("Andrew"); 
        c.add("Arnab"); 
        c.add("Ankit"); 
  
        // add choice to panel 
        p.add(c); 
  
        // add panel to the frame 
        f.add(p); 
  
        // show the frame 
        f.show(); 
        f.setSize(300, 300); 
    } 
}
