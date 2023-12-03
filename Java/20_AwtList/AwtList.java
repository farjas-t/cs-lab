import java.awt.Button;
import java.awt.Frame;
import java.awt.List;
import java.awt.TextField;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class AwtList extends Frame implements ActionListener {

    private List itemList;
    private TextField addItemTextField;
    private Button addButton;
    private Button removeButton;

    public AwtList() {
        setTitle("List Box Example");
        setSize(300, 200);
        setLayout(null);

        itemList = new List();
        itemList.setBounds(20, 30, 120, 120);

        addItemTextField = new TextField();
        addItemTextField.setBounds(160, 30, 80, 20);

        addButton = new Button("Add");
        addButton.setBounds(160, 60, 80, 30);
        addButton.addActionListener(this);

        removeButton = new Button("Remove");
        removeButton.setBounds(160, 100, 80, 30);
        removeButton.addActionListener(this);

        add(itemList);
        add(addItemTextField);
        add(addButton);
        add(removeButton);

        setVisible(true);
    }

    public static void main(String[] args) {
        new AwtList();
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == addButton) {
            addItemToList();
        } else if (e.getSource() == removeButton) {
            removeItemFromList();
        }
    }

    private void addItemToList() {
        String newItem = addItemTextField.getText();
        if (!newItem.isEmpty()) {
            itemList.add(newItem);
            addItemTextField.setText("");
        }
    }

    private void removeItemFromList() {
        int selectedIndex = itemList.getSelectedIndex();
        if (selectedIndex != -1) {
            itemList.remove(selectedIndex);
        }
    }
}