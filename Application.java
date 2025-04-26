import java.time.LocalDate;

class User {
    private String fname;
    private String mname;
    private String lname;
    private Address address;
    private String email;
    private String mobile;
    private LocalDate birthdate;

    public User(String fname, String mname, String lname, String email, Address address, LocalDate birthdate) {
        this.fname = fname;
        this.mname = mname;
        this.lname = lname;
        this.email = email;
        this.address = address;
        this.birthdate = birthdate;
    }

    public String getFname() {
        return fname;
    }

    public String getMname() {
        return mname;
    }

    public String getLname() {
        return lname;
    }

    public String getEmail() {
        return email;
    }

    public LocalDate getBirthdate() {
        return birthdate;
    }

    public Address getAddress() {
        return address;
    }
}

class Address {
    private String building;
    private String street;
    private String city;
    private String state;
    private String district;
    private String pin;

    public Address(String building, String street, String city, String district, String state, String pin) {
        this.building = building;
        this.street = street;
        this.city = city;
        this.state = state;
        this.district = district;
        this.pin = pin;
    }

    public String getBuilding() {
        return building;
    }

    public String getStreet() {
        return street;
    }

    public String getCity() {
        return city;
    }

    public String getState() {
        return state;
    }

    public String getDistrict() {
        return district;
    }

    public String getPin() {
        return pin;
    }
}

public class Application {
    public static void main(String[] args) {
        Address address = new Address("Shivraj Complex", "Highschool Road", "Miraj", "Sangli District", "Maharashtra", "416410");
        User user = new User("Siddhi", "Dhananjay", "Danekar", "siddhidanekar@gmail.com", address, LocalDate.of(2005, 4, 3));

        System.out.println("User Details:");
        System.out.println("Name: " + user.getFname() + " " + user.getMname() + " " + user.getLname());
        System.out.println("Email: " + user.getEmail());
        System.out.println("Birthdate: " + user.getBirthdate());

        System.out.println("Permanent Address:");
        System.out.println(user.getAddress().getBuilding() + ", " + user.getAddress().getStreet());
        System.out.println(user.getAddress().getCity() + ", " + user.getAddress().getDistrict());
        System.out.println(user.getAddress().getState() + ", " + user.getAddress().getPin());
    }
}



 

















 