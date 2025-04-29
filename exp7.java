import java.util.*;

class exp7 {
    String employeeId;
    String password;

    String[] authData = {
        "E001, password123",
        "M001, adminpass"
    };

    String[] empDetails = {
        "E001, John,Employee",
        "M001, Alice,Manager"
    };

    public void setEmployeeId(String id) {
        this.employeeId = id;
    }

    public void setPassword(String pwd) {
        this.password = pwd;
    }

    public boolean checkAuthentication() {
        for (String line : authData) {
            String[] parts = line.split(",");
            if (parts.length == 2 &&
                parts[0].trim().equals(employeeId) &&
                parts[1].trim().equals(password)) {
                return true;
            }
        }
        return false;
    }

    public Object createEmployee() {
        for (String line : empDetails) {
            String[] parts = line.split(",");
            if (parts.length == 3 &&
                parts[0].trim().equals(employeeId)) {
                String name = parts[1].trim();
                String type = parts[2].trim();
                if (type.equalsIgnoreCase("Manager")) {
                    return new Manager(employeeId, name);
                } else {
                    return new Employee(employeeId, name);
                }
            }
        }
        return null;
    }

    public void login() {
        if (checkAuthentication()) {
            Object obj = createEmployee();
            if (obj instanceof Manager) {
                System.out.println("Login successful. Welcome Manager " + ((Manager) obj).name);
            } else if (obj instanceof Employee) {
                System.out.println("Login successful. Welcome Employee " + ((Employee) obj).name);
            } else {
                System.out.println("Login successful but employee details not found.");
            }
        } else {
            System.out.println("Login failed. Invalid ID or password.");
        }
    }
}

class Employee {
    String id;
    String name;

    Employee(String id, String name) {
        this.id = id;
        this.name = name;
    }
}

class Manager {
    String id;
    String name;

    Manager(String id, String name) {
        this.id = id;
        this.name = name;
    }
}

public class Main2{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        exp7 login = new exp7(); // ? Corrected to use class name exp7

        System.out.print("Enter Employee ID: ");
        String id = scanner.nextLine();
        login.setEmployeeId(id);

        System.out.print("Enter Password: ");
        String pwd = scanner.nextLine();
        login.setPassword(pwd);

        login.login();
        scanner.close();
    }
}
