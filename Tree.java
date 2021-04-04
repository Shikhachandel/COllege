import javax.swing.*;  
import javax.swing.tree.DefaultMutableTreeNode;  
public class Tree {  
JFrame f;  
Tree(){  
    f=new JFrame();   
    DefaultMutableTreeNode sndt=new DefaultMutableTreeNode("SNDT");  
    DefaultMutableTreeNode pune=new DefaultMutableTreeNode("Pune");  
    DefaultMutableTreeNode churchgate=new DefaultMutableTreeNode("Churchgate"); 
    DefaultMutableTreeNode juhu=new DefaultMutableTreeNode("Juhu");   
    sndt.add(pune);  
    sndt.add(churchgate);  
    sndt.add(juhu);     
    JTree jt=new JTree(sndt);  
    f.add(jt);  
    f.setSize(200,200);  
    f.setVisible(true);  
}  
public static void main(String[] args) {  
    new Tree();  
}}  