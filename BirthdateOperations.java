import java.time.LocalDate;
import java.time.Period;
import java.time.temporal.ChronoUnit;
import java.util.Scanner;

public class BirthdateOperations {
    public static void main (String [] args) {
        Scanner scanner = new Scanner (System.in);

       
        System.out.print("Enter your birthdate (YYYY-MM-DD): ");
        String inputDate = scanner.nextLine();

        try {
            LocalDate birthDate = LocalDate.parse(inputDate);
            LocalDate today = LocalDate.now();

           
            if (birthDate.isAfter(today)) {
                System.out.println("Invalid Date! Birthdate cannot be in the future.");
                return;
            }

           
            Period age = Period.between(birthDate, today);
            System.out.println("Your age is: " + age.getYears() + " years, " + age.getMonths() + " months, " + age.getDays() + " days.");

           
            System.out.println("You were born on: " + birthDate.getDayOfWeek());
            System.out.println("Month: " + birthDate.getMonth());
            System.out.println("Year: " + birthDate.getYear());

           
            System.out.println("Yesterday's date: " + birthDate.minusDays(1));
            System.out.println("Tomorrow's date: " + birthDate.plusDays(1));

           
            boolean isLeap = birthDate.isLeapYear();
            System.out.println("Was your birth year a leap year? " + (isLeap ? "Yes" : "No"));

            
            int dayOfYear = birthDate.getDayOfYear();
            System.out.println("Your birthdate was the " + dayOfYear + "th day of the year.");

          
            if (birthDate.getMonth() == today.getMonth() && birthDate.getDayOfMonth() == today.getDayOfMonth()) {
                System.out.println("Happy Birthday! ");
            } else {
                System.out.println("Today is not your birthday.");
            }

           
            LocalDate reminderDate = birthDate.minusWeeks(1);
            System.out.println("Your birthday reminder date: " + reminderDate);

        } catch (Exception e) {
            System.out.println("Invalid date format! Please enter in YYYY-MM-DD format.");
        }
        scanner.close();
    }
}