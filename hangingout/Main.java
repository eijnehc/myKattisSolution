import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws FileNotFoundException {
        // File file = new File("hangingout/1.in");
        // Scanner sc = new Scanner(file);
        Scanner sc = new Scanner(System.in);

        int limit = sc.nextInt();
        int n = sc.nextInt();

        int count = 0, curr = 0;
        for (int i = 0; i < n; i++) {
            String c = sc.next();
            int ppl = sc.nextInt();

            if (c.equals("enter")) {
                curr += ppl;
                if (curr > limit) {
                    count++;
                    curr -= ppl;
                }
            } else {
                curr -= ppl;
            }
        }
        System.out.println(count);
    }
}
