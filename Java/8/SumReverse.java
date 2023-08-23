import java.util.Scanner;

public class SumReverse {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a multi digit number :");
        int num = sc.nextInt();
        Process proc = new Process();
        System.out.println("Sum of digits :"+proc.sum(num));
        System.out.println("Reverse of digits : "+proc.rev(num));
    }
}
class Process {
    int sum(int n){
        int sum=0;
        while (n>0) {
            sum += n%10;
            n/=10;
        }
        return sum;
    }
    int rev(int n){
        int rev=0;
        while(n>0){
            rev*=10;
            rev+= n%10;
            n/=10;
        }
        return rev;
    }
}