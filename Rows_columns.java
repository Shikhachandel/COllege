import javax.swing.JFrame;
import javax.swing.JScrollPane;
import javax.swing.JTable;
import javax.swing.SwingUtilities;
import javax.swing.table.DefaultTableModel;
public class Rows_columns extends JFrame{
    public Rows_columns()
    {//headers for the table
        String[] columns = new String[] {"Id", "Name", "Hourly Rate"};
        //actual data for the table in a 2d array
        Object[][] data = new Object[][] {{23, "Jungkook", 500000 },{21, "Tae", 700000 },{30, "RM", 800000 },};
        final Class[] columnClass = new Class[] {Integer.class, String.class, Double.class, Boolean.class};
        //create table model with data
        DefaultTableModel model = new DefaultTableModel(data, columns) {
            @Override public boolean isCellEditable(int row, int column)
            {return false;}
            @Override public Class<?> getColumnClass(int columnIndex)
            {return columnClass[columnIndex];}
        };
        JTable table = new JTable(model);//add the table to the frame
        this.add(new JScrollPane(table));
        this.setTitle("Table Example");
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.pack();this.setVisible(true);
    }
    public static void main(String[] args){
        SwingUtilities.invokeLater(new Runnable() {
            @Override public void run() {
                new Rows_columns();}
            }
            );
        }
    }