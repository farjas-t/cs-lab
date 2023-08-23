import java.util.Scanner;

class RemVowel {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string : ");
        String str = sc.nextLine();
        str = str.toLowerCase();
        System.out.println("String after removing vowels : ");
        for (int i = 0; i < str.length(); i++) {
            if(str.charAt(i)=='a'||str.charAt(i)=='e'||str.charAt(i)=='i'||str.charAt(i)=='o'||str.charAt(i)=='u')
                continue;
            System.out.print(str.charAt(i));
        }
    }
    
}
