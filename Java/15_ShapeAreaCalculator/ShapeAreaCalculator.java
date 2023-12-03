abstract class Shape {
    abstract double area();
}
class TwoDim extends Shape {
    double side1;
    double side2;

    TwoDim(double s1, double s2) {
        side1 = s1;
        side2 = s2;
    }

    double area() {
        return 0.0;
    }
}
class Square extends TwoDim {
    Square(double side) {
        super(side, side);
    }

    double area() {
        return side1 * side1;
    }
}

class Triangle extends TwoDim {
    Triangle(double base, double height) {
        super(base, height);
    }

    double area() {
        return 0.5 * side1 * side2;
    }
}

class ThreeDim extends Shape {
    double side;

    ThreeDim(double s) {
        side = s;
    }

    double area() {
        return 0.0;
    }
}

class Sphere extends ThreeDim {
    Sphere(double radius) {
        super(radius);
    }

    double area() {
        return 4 * Math.PI * side * side;
    }
}

class Cube extends ThreeDim {
    Cube(double side) {
        super(side);
    }

    double area() {
        return 6 * side * side;
    }
}

public class ShapeAreaCalculator {
    public static void main(String[] args) {
        Square square = new Square(5.0);
        Triangle triangle = new Triangle(4.0, 3.0);
        Sphere sphere = new Sphere(2.0);
        Cube cube = new Cube(3.0);

        System.out.println("Area of Square: " + square.area());
        System.out.println("Area of Triangle: " + triangle.area());
        System.out.println("Surface Area of Sphere: " + sphere.area());
        System.out.println("Surface Area of Cube: " + cube.area());
    }
}