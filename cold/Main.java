import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws FileNotFoundException {
        // File file = new File("cold/cold-002.in");
        // Scanner sc = new Scanner(file);
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int count = 0;
        for (int i = 0; i < n; i++) {
            if (sc.nextInt() < 0) {
                count++;
            }
        }
        System.out.println(count);
    }
}
