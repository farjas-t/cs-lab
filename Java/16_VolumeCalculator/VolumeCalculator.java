interface Volume {
    double pi = 3.14159265359; 
    void readData();
    void dispVolume(); 
}
class Sphere implements Volume {
    double radius;
    double volume;
  
    public void readData() {
        radius = 5.0;
    }

    public void dispVolume() {
        volume = (4.0 / 3.0) * pi * Math.pow(radius, 3);
        System.out.println("Volume of the Sphere: " + volume);
    }
}
class Cylinder implements Volume {
    double radius;
    double height;
    double volume;

    public void readData() {
        radius = 3.0; 
        height = 7.0;  
    }

    public void dispVolume() {
        volume = pi * Math.pow(radius, 2) * height;
        System.out.println("Volume of the Cylinder: " + volume);
    }
}

public class VolumeCalculator {
    public static void main(String[] args) {
        Sphere sphere = new Sphere();
        Cylinder cylinder = new Cylinder();
        sphere.readData();
        sphere.dispVolume();
        cylinder.readData();
        cylinder.dispVolume();
    }
}