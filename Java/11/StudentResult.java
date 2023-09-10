import java.util.Scanner;

class Student {
    String name;
    int rollNumber;

    public void readStudentDetails() {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter student name: ");
        name = input.nextLine();
        System.out.print("Enter student roll number: ");
        rollNumber = input.nextInt();
    }

    public void displayStudentDetails() {
        System.out.println("Student Name: " + name);
        System.out.println("Roll Number: " + rollNumber);
    }
}

class Mark extends Student {
    int[] marks = new int[5];
    int total;
    double average;

    public void readMarks() {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter marks for 5 subjects:");
        for (int i = 0; i < 5; i++) {
            System.out.print("Subject " + (i + 1) + ": ");
            marks[i] = input.nextInt();
        }
    }

    public void calculateTotalAndAverage() {
        total = 0;
        for (int mark : marks) {
            total += mark;
        }
        average = (double) total / 5;
    }

    public void displayResult() {
        System.out.println("\n------ STUDENT RESULT ------");
        System.out.println("------ Student Details ------");
        displayStudentDetails();
        System.out.println("------ Marks ------");
        for (int i = 0; i < 5; i++) {
            System.out.println("Subject " + (i + 1) + ": " + marks[i]);
        }
        System.out.println("Total Marks: " + total);
        System.out.println("Average Marks: " + average);
    }
}

public class StudentResult {
    public static void main(String[] args) {
        Mark student = new Mark();
        student.readStudentDetails();
        student.readMarks();
        student.calculateTotalAndAverage();
        student.displayResult();
    }
}