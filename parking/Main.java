import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws FileNotFoundException {
        // File file = new File("parking/parking1.in");
        // Scanner sc = new Scanner(file);
        Scanner sc = new Scanner(System.in);

        int A = sc.nextInt();
        int B = sc.nextInt();
        int C = sc.nextInt();

        int[] timeIndex = new int[100];

        for (int i = 0; i < 3; i++) {
            int start = sc.nextInt();
            int end = sc.nextInt();
            for (int j = start; j < end; j++) {
                timeIndex[j]++;
            }
        }

        int cost = 0;
        for (int i = 0; i < 100; i++) {
            if (timeIndex[i] == 1) {
                cost += A * timeIndex[i];
            } else if (timeIndex[i] == 2) {
                cost += B * timeIndex[i];
            } else {
                cost += C * timeIndex[i];
            }
        }
        System.out.println(cost);

    }
}
