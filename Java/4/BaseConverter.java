import java.util.Scanner;

public class BaseConverter {
    public static void main(String[] args) {
        int num, temp, i = 0;
        int binary[] = new int[50];
        int octal[] = new int[50];
        int hexaDeci[] = new int[50];
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter an Integer Number : ");
        num = sc.nextInt();
        temp = num;
        // binary
        while (temp > 0) {
            binary[i] = temp % 2;
            temp = temp / 2;
            i++;
        }
        int len = i - 1;
        System.out.print("Binary : ");
        for (i = len; i >= 0; i--) {
            System.out.print(binary[i]);
        }
        
        // octal
        temp = num;
        i = 0;
        while (temp > 0) {
            octal[i] = temp % 8;
            temp = temp / 8;
            i++;
        }
        len = i - 1;
        System.out.print("\nOctal : ");
        for (i = len; i >= 0; i--) {
            System.out.print(octal[i]);
        }

        // hexadecimal
        temp = num;
        i = 0;
        while (temp > 0) {
            hexaDeci[i] = temp % 16;
            temp = temp / 16;
            i++;
        }
        len = i - 1;
        System.out.print("\nHexadecimal : ");
        for (i = len; i >= 0; i--) {
            if (hexaDeci[i] < 10) {
                System.out.print(hexaDeci[i]);
            } else {
                // A=10, B=11, C=12, D=13, E=14, F=15
                char c = (char) (hexaDeci[i] + 55);
                System.out.print(c);
            }
        }
    }
}
