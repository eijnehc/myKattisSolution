import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws FileNotFoundException {
        // File file = new File("cetvrta/2.in");
        // Scanner sc = new Scanner(file);
        Scanner sc = new Scanner(System.in);

        int[][] coord = new int[3][2];

        coord[0][0] = sc.nextInt();
        coord[0][1] = sc.nextInt();
        coord[1][0] = sc.nextInt();
        coord[1][1] = sc.nextInt();
        coord[2][0] = sc.nextInt();
        coord[2][1] = sc.nextInt();

        int x = 0, y = 0;
        for (int i = 0; i < 2; i++) {
            int first = coord[0][i];
            if (coord[1][i] == first) {
                System.out.print(coord[2][i] + " ");
            } else if (coord[2][i] == first) {
                System.out.print(coord[1][i] + " ");
            } else {
                System.out.print(first + " ");
            }
        }

    }


}


