// Base class User
class User {
    protected String fName, lName, mName, email, mobile;
    protected String birthdate;

    // Constructor
    public User(String fName, String lName, String mName, String email, String mobile, String birthdate) {
        this.fName = fName;
        this.lName = lName;
        this.mName = mName;
        this.email = email;
        this.mobile = mobile;
        this.birthdate = birthdate;
    }

    // Display user details
    public void displayUserDetails() {
        System.out.println("Name: " + fName + " " + mName + " " + lName);
        System.out.println("Email: " + email);
        System.out.println("Mobile: " + mobile);
        System.out.println("Birthdate: " + birthdate);
    }
}

// Derived class Employee extends User
class Employee extends User {
    protected String employeeID, designation;
    protected int salary;
    protected boolean isManager;

    // Constructor
    public Employee(String fName, String lName, String mName, String email, String mobile, String birthdate,
                    String employeeID, int salary, String designation, boolean isManager) {
        super(fName, lName, mName, email, mobile, birthdate);
        this.employeeID = employeeID;
        this.salary = salary;
        this.designation = designation;
        this.isManager = isManager;
    }

    // Display employee details
    public void displayEmployeeDetails() {
        displayUserDetails();
        System.out.println("Employee ID: " + employeeID);
        System.out.println("Salary: " + salary);
        System.out.println("Designation: " + designation);
        System.out.println("Manager: " + (isManager ? "Yes" : "No"));
    }
}

// Derived class Manager extends Employee
class Manager extends Employee {

    // Constructor
    public Manager(String fName, String lName, String mName, String email, String mobile, String birthdate,
                   String employeeID, int salary, String designation) {
        super(fName, lName, mName, email, mobile, birthdate, employeeID, salary, designation, true);
    }

    // Display manager details
    public void displayManagerDetails() {
        displayEmployeeDetails();
        System.out.println("Role: Manager");
    }
}

// Main class with the main method
public class Main {
    public static void main(String[] args) {
        // Creating an employee object
        Employee emp = new Employee("John", "Doe", "M.", "john.doe@example.com", "1234567890", "1990-05-15",
                                    "E12345", 50000, "Software Engineer", false);

        // Creating a manager object
        Manager mgr = new Manager("Jane", "Smith", "A.", "jane.smith@example.com", "0987654321", "1985-08-25",
                                  "M54321", 90000, "Project Manager");

        // Printing employee details
        System.out.println("Employee Details:");
        emp.displayEmployeeDetails();

        // Printing manager details
        System.out.println("\nManager Details:");
        mgr.displayManagerDetails();
    }
}
