import java.io.*;
import java.util.*;
import java.time.*;

public class Main {
    public static void main(String[] args) throws FileNotFoundException {
        // File file = new File("datum/datum.1.in");
        // Scanner sc = new Scanner(file);
        Scanner sc = new Scanner(System.in);

        int day = sc.nextInt();
        int month = sc.nextInt();

        LocalDate localdate = LocalDate.of(2009, month, day);

        DayOfWeek dayofweek = DayOfWeek.from(localdate);

        System.out.println(dayofweek.name());
    }
}
