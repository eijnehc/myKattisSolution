import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws FileNotFoundException {
        // File file = new File("herman/3.in");
        // Scanner sc = new Scanner(file);
        Scanner sc = new Scanner(System.in);

        double r = sc.nextDouble();
        double areaCircle = Math.PI * Math.pow(r,2);
        System.out.println(areaCircle);
        System.out.println(r*r*2.0);
    }
}
