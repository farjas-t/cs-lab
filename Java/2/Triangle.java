//2-Given sides of a triangle, check whether the triangle is equilateral, isosceles
import java.util.Scanner;

public class Triangle {
    public static void main(String[] args) {
        int a, b, c;
        double p, area;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter sides of triangle : ");
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();

        if((a < b + c) && (b < a + c) && (c < a + b)){
            if((a == b) && (b == c))
                System.out.println("Given Trangle is Equilateral");
            else if ((a == b) || (b == c) || (c == a))
                System.out.println("Given Triangle is Isoscleles");
            else
                System.out.println("Given Triangle is Scalane");
        p=(a+b+c)/2;
        area = Math.sqrt(p * (p - a) * (p - b) * (p - c));
        System.out.println("Area of triangle is = " + area);
        }else{
            System.out.println("Cannot form a triangle");
        }
    }
}
