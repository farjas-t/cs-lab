public class CountObjects {
    static int count = 0;
    public CountObjects(){
        count+=1;
    }
    public static void main(String[] args) {
        CountObjects obj1 = new CountObjects();
        CountObjects obj2 = new CountObjects();
        CountObjects obj3 = new CountObjects();
        System.out.println("Number of objects created : " + CountObjects.count);
    }
}