import java.util.*;
import java.lang.*;
class User 
{
	String FName;
	String LName;
	String MName;
	String Email;
	String Mobile;
	String birthdate;
	public Address permenent_address;
	
	User()
	{
		permenent_address= new Address();
	}
	public User(String FName,String LName,String MName,String Email,String Mobile,String birthdate){
		this.FName=FName;
		this.MName=MName;
		this.LName=LName;
		this.Email=Email;
		this.Mobile=Mobile;
		this.birthdate=birthdate;
	}
	
	//get User Details
	public String getFirstName(){
		return FName;
	}
	public String getLastName(){
		return LName;
	}
	public String getMiddleName(){
		return MName;
	}
	public String getEmail(){
		return Email;
	}
	public String getMobile(){
		return Mobile;
	}
	public String getBirthDate(){
		return birthdate;
	}
	public String getAddress() {
    return permenent_address.toString(); }

	
}
class Employee extends User
{
	String empid;
	int salary;
	String desg;
	
	public Employee(String FName,String LName,String MName,String Email,String Mobile,String birthdate,String empid,int salary,String desg){
		
		super(FName,LName,MName,Email,Mobile,birthdate);
		this.empid=empid;
		this.salary=salary;
		this.desg=desg;
	}
    public String getempid(){
		return empid;
	}
	public int getsalary(){
		return salary;
	}
	public String getdesg(){
		return desg;
	}
	
	
}
class Manager extends Employee
{
	public Manager(String FName,String LName,String MName,String Email,String Mobile,String birthdate,String empid,int salary,String desg)
	{
		super(FName,LName,MName,Email,Mobile,birthdate,empid,salary,desg);
	}
}