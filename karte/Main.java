import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws FileNotFoundException {
        // File file = new File("karte/karte.3.in");
        // Scanner sc = new Scanner(file);
        Scanner sc = new Scanner(System.in);

        String s = sc.nextLine();

        HashSet<String> p = new HashSet<String>();
        HashSet<String> k = new HashSet<String>();
        HashSet<String> h = new HashSet<String>();
        HashSet<String> t = new HashSet<String>();

        boolean error = false;
        for (int i = 0; i < s.length()-2; i++) {
            String sub = s.substring(i,i+3);
            Character x = sub.charAt(0);
            i += 2;
            if (x.equals('P')) {
                if (!p.contains(sub)) {
                    p.add(sub);
                } else {
                    error = true;
                    break;
                }
            } else if (x.equals('K')) {
                if (!k.contains(sub)) {
                    k.add(sub);
                } else {
                    error = true;
                    break;
                }
            } else if (x.equals('H')) {
                if (!h.contains(sub)) {
                    h.add(sub);
                } else {
                    error = true;
                    break;
                }
            } else {
                if (!t.contains(sub)) {
                    t.add(sub);
                } else {
                    error = true;
                    break;
                }
            }
        }

        if (!error) {
            System.out.printf("%d %d %d %d", 13 - p.size(), 13 - k.size(), 13 - h.size(), 13 - t.size());
        } else {
            System.out.println("GRESKA");
        }

    }
}
