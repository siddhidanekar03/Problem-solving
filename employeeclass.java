class Employee{
    int id;
    int salary;
    String name;

    public int getsalary(){
        return salary;
    }

    public void setname(String n){
        name=n;
    }
}
 class Cellphone{
    public void ring(){
        System.out.println("Cellphone is ringing");
    }
    public void vibrate(){
        System.out.println("Cellphone is vibrating");
    }
}

class Square{

    int side;
    public int Area(){
        int a=side*side;
        System.out.println("Area is "+a);
        return a;
    }
}

public class employeeclass {
    public static void main(String args[]){
    // Employee siddhi =new Employee();
    // siddhi.id =123;
    // siddhi.salary=347;
    // System.out.println(siddhi.getsalary());
    // System.out.println(siddhi.id);

    //     Cellphone oneplus = new Cellphone();
    //     oneplus.ring();
    //     oneplus.vibrate();
    Square s1=new Square();
    s1.side=4;
    s1.Area();

}
}

