import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws FileNotFoundException {
        File file = new File("bijele/2.in");
        Scanner sc = new Scanner(file);

        int[] chessPieces = new int[] {1,1,2,2,2,8};
        int i = 0;
        while(sc.hasNextInt()) {
            int n = sc.nextInt();
            int decision = chessPieces[i] - n;
            System.out.print(decision + " ");
            i++;
        }
    }

}
