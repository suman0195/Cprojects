/*
 * NSISExampleApplication.java
 *
 * Created on June 2, 2003, 7:53 PM
 */
import javax.swing.*;
import javax.swing.tree.*;
import javax.swing.event.*;
import javax.swing.table.*;
import javax.swing.plaf.*; // for setting the pluggable look & feel
import java.awt.*;
import java.awt.event.*;
import java.util.*;
import java.io.*;
/**
 *
 * @author  Rizwan Sattar
 */
public class NSISExampleApplication1 extends JFrame implements ActionListener {
    
    
    /** Creates a new instance of OneVoiceClient */
    public NSISExampleApplication1() {
        String message = "Congratulations! You have successfully installed this "+
                         "Java program and ran it from the Start menu!";
        
        JOptionPane.showMessageDialog(null, message, "Installation Successful", JOptionPane.INFORMATION_MESSAGE);
        this.dispose();
        System.exit(0);
    }

    
    public void actionPerformed(java.awt.event.ActionEvent actionEvent) {
        String command = actionEvent.getActionCommand();
        command = command.trim();
        if(command.indexOf("Quit")>=0) {
            dispose();
            System.exit(0);
            
        }
    
    }
    
    
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        try {
            UIManager.setLookAndFeel(UIManager.getSystemLookAndFeelClassName());
        } catch (Exception e) {
            System.out.println("Could not set Look & Feel");
        }      
  
        NSISExampleApplication1 NSISExApp1 = new NSISExampleApplication1();

    }

    
}
