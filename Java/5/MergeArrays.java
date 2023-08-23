//5-Merge two arrays
import java.util.Scanner;

public class MergeArrays {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int[] arr1 = new int[50];
        int[] arr2 = new int[50];
        int[] merge = new int[100];

        System.out.print("Enter Array 1 Size: ");
        int size1 = scanner.nextInt();
        System.out.printf("Enter %d elements of Array 1: ", size1);
        for (int i = 0; i < size1; i++)
            arr1[i] = scanner.nextInt();

        System.out.print("\nEnter Array 2 Size: ");
        int size2 = scanner.nextInt();
        System.out.printf("Enter %d elements of Array 2: ", size2);
        for (int i = 0; i < size2; i++)
            arr2[i] = scanner.nextInt();

        for (int i = 0; i < size1; i++)
        merge[i] = arr1[i];
        for (int i = 0; i < size2; i++)
            merge[size1 + i] = arr2[i];
        
        System.out.println("\nThe new array after appending is:");
        for (int i = 0; i < (size1 + size2); i++)
            System.out.print(merge[i] + " ");
    }
}
