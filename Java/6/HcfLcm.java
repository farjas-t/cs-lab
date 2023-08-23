//6- HCF LCM of Two Numbers
import java.util.Scanner;

public class HcfLcm {
    public static void main(String[] args) {
        int a,b,temp, t1,t2,hcf, lcm;
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Enter two numbers : ");
            a = sc.nextInt();
            b = sc.nextInt();
        }
        t1=a;
        t2=b;
        while(t2!=0){
            temp=t2;
            t2=t1%t2;
            t1=temp;
        }
        hcf=t1;
        System.out.println("HCF of entered number is : "+hcf);
        lcm=(a*b)/hcf;
        System.out.println("LCM of entered number is : "+lcm);
    }
}
