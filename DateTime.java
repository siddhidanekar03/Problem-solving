import java.time.*;
import java.util.*;
import java.time.format.*;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
public class DateTime
{
	public static void main(String [] args)
	{
		LocalDate currentDate=LocalDate.now();
		System.out.println("Current Date:"+currentDate);
			
		Scanner sc=new Scanner(System.in);
		LocalDate a=LocalDate.now();
		System.out.println("Yesterday's Date:" +currentDate.minusDays(1));
		String dateFormat="dd/MM/yyyy";
		DateTimeFormatter format=DateTimeFormatter.ofPattern(dateFormat);
		System.out.println("Enter BirthDay:");
		String bDay=sc.nextLine();
		try
		{
			LocalDate parsedDate=LocalDate.parse(bDay,format);
			Period age=Period.between(parsedDate,currentDate);
			
			
			System.out.println("Valid Date:" +bDay);
			System.out.println("Age:" +age);
			System.out.println("Birth Day:" +parsedDate.getDayOfMonth());
			System.out.println("Birth Month:" +parsedDate.getMonthValue());
			System.out.println("Birth Year:" +parsedDate.getYear());
			
		}
		catch(Exception e)
		{
			System.out.println("Invalid Format :" +bDay);
		}
		System.out.println("Yesterday's Date:" +currentDate.minusDays(1));
		
	}
}