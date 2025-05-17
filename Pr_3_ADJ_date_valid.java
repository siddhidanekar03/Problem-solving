import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

class Pr_3_ADJ_date_valid
{
	public static boolean isValidDate(String date)
	{
		try{
			SimpleDateFormat s = new SimpleDateFormat("yyyy-MM-dd");
			s.setLenient(false);
			s.parse(date);
			return true;
		}
		catch(ParseException e){
			return false;
		}
	}
	
	public static boolean isValidEmail(String email)
	{
		String emailRegex = "^[\\w-\\.]+@([\\w-]+\\.)+[\\w-]{2,4}$";
		Pattern pattern = Pattern.compile(emailRegex);
		Matcher matcher = pattern.matcher(email);
		return matcher.matches();
	}
	
	public static boolean isValidPinCode(String pinCode) 
	{
		String pincodeRegex = "^[0-9]{4}$|^[0-9]{6}$";
		Pattern pattern = Pattern.compile(pincodeRegex);
		Matcher matcher = pattern.matcher(pinCode);
		return matcher.matches();
	}
	
	public static boolean isValidPRN(String prn) 
	{
		try{
			String PRNregex = "^[0-9]{2}[A-Za-z]{3}[0-9]{3}$";
			Pattern pattern = Pattern.compile(PRNregex);
			Matcher matcher = pattern.matcher(prn);
			return true;
		}catch(Exception e){
			return false;
		}
	}
	
	public static void main(S tring args[]){
		Scanner sc=new Scanner(System.in);
		
		System.out.println("Enter BirthDate : ");
		String d=sc.nextLine();
		if(isValidDate(d)){
			System.out.println("Birthdate is Valid");
		}else{
				System.out.println("BirthDate is InValid");
		}
		
		System.out.println("Enter Email : ");
		String e=sc.nextLine();
		if(isValidEmail(e)){
			System.out.println("Email is Valid");
		}else{
				System.out.println("Email is InValid");
		}
		
		System.out.println("Enter PinCode : ");
		String p=sc.nextLine();
		if(isValidPinCode(p)){
			System.out.println("PinCode is Valid");
		}else{
				System.out.println("PinCode is InValid");
		}
		
		System.out.println("Enter PRN No : ");
		String prn=sc.nextLine();
		if(isValidPRN(prn)){
			System.out.println("PRN is Valid");
		}else{
				System.out.println("PRN is InValid");
		}
	}
}