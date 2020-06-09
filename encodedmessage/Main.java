import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws FileNotFoundException {
        // File file = new File ("encodedmessage/E.in");
        // Scanner sc = new Scanner(file);
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            String s = sc.next();
            int size = (int) Math.sqrt(s.length());
            char[][] arr = new char[size][size];
            int j = 0;
            for (int x = 0; x < size; x++) {
                for (int y = 0; y < size; y++) {
                    arr[x][y] = s.charAt(j);
                    j++;
                }
            }

            char[][] rotate = rotateArr(arr,size);

            for (int x = 0; x < size; x++) {
                for (int y = 0; y < size; y++) {
                    System.out.print(rotate[x][y]);
                }
            }

            System.out.println();
        }
    }

    public static char[][] rotateArr(char[][] arr, int n) {
        char[][] rotate = new char[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                rotate[i][j] = arr[j][n-i-1];
            }
        }

        return rotate;
    }
}
