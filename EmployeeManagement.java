import java.util.*;

public class EmployeeManagement {

    static class EmployeeRecord {
        String employeeID;
        String designation;
        float leavesTotal;
        float leavesAvailable;
        float leavesUsed;

        public EmployeeRecord(String employeeId, String designation, float leavesTotal, float leavesAvailable, float leavesUsed) {
            this.employeeID = employeeId;
            this.designation = designation;
            this.leavesTotal = leavesTotal;
            this.leavesAvailable = leavesAvailable;
            this.leavesUsed = leavesUsed;
        }

        public String toString() {
            return "Employee: " + employeeID + ", Designation: " + designation + ", Total Leaves: " + leavesTotal + ", Available: " + leavesAvailable + ", Used: " + leavesUsed;
        }
    }

    static class EmployeeLeaveRecord {
        String leaveId;
        Date startDate;
        Date endDate;
        int days;
        String status;

        public EmployeeLeaveRecord(String leaveId, Date startDate, Date endDate, int days, String status) {
            this.leaveId = leaveId;
            this.startDate = startDate;
            this.endDate = endDate;
            this.days = days;
            this.status = status;
        }

        public String toString() {
            return "LeaveID: " + leaveId + ", Start: " + startDate + ", End: " + endDate + ", Days: " + days + ", Status: " + status;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<EmployeeRecord> employeeList = new ArrayList<>();
        ArrayList<EmployeeLeaveRecord> leaveList = new ArrayList<>();

        System.out.println("Enter number of employees: ");
        int n = sc.nextInt();
        sc.nextLine();

        for (int i = 0; i < n; i++) {
            System.out.println("Enter details for employee " + (i + 1) + ":");
            System.out.println("Employee ID: ");
            String id = sc.nextLine();
            System.out.println("Designation: ");
            String designation = sc.nextLine();
            System.out.println("Total leaves: ");
            float total = sc.nextFloat();
            System.out.println("Leaves Available: ");
            float available = sc.nextFloat();
            System.out.println("Leaves Used: ");
            float used = sc.nextFloat();
            sc.nextLine();  // consume the leftover newline character

            EmployeeRecord emp = new EmployeeRecord(id, designation, total, available, used);
            employeeList.add(emp);

            System.out.print("Leave Id: ");
            String leaveId = sc.nextLine();
            System.out.print("Start Date (yyyy-mm-dd): ");
            String sDate = sc.nextLine();
            Date startDate = java.sql.Date.valueOf(sDate);
            System.out.print("End Date (yyyy-mm-dd): ");
            String eDate = sc.nextLine();
            Date endDate = java.sql.Date.valueOf(eDate);
            System.out.print("Number of leave days: ");
            int days = sc.nextInt();
            sc.nextLine();  // consume the leftover newline character
            System.out.print("Leave Status: ");
            String status = sc.nextLine();

            EmployeeLeaveRecord leave = new EmployeeLeaveRecord(leaveId, startDate, endDate, days, status);
            leaveList.add(leave);
        }

        System.out.println("\n----Employee Records-----");
        for (EmployeeRecord e : employeeList) {
            System.out.println(e);
        }

        System.out.println("\n----Leave Records-----");
        for (EmployeeLeaveRecord l : leaveList) {
            System.out.println(l);
        }

        sc.close();
    }
}