import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws FileNotFoundException {
        // File file = new File("mirror/mirror-01.in");
        // Scanner sc = new Scanner(file);
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            int r = sc.nextInt();
            sc.nextInt();
            String[] row = new String[r];

            for (int j = 0; j < r; j++) {
                StringBuilder str = new StringBuilder(sc.next());
                str.reverse();
                row[r-1-j] = str.toString();
            }

            System.out.println("Test " + (i+1));
            for (int k = 0; k < r; k++) {
                System.out.println(row[k]);
            }
        }

    }
}
