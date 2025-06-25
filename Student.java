package com.sunbeam;

 class Student {
	int rollno;
	String name;
	double marks;
	

	public Student(int rollno, String name, double marks) {
		
		this.rollno = rollno;
		this.name = name;
		this.marks = marks;
	}
	
	public void display() {
		System.out.println("Roll no.: " + rollno);
		System.out.println("Name : " + name);
		System.out.println("Marks: " + marks);
		
	}


	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Student [] arr = new Student[5];
		arr[0] = new Student(1, "Neha", 80);
		arr[1] = new Student(2, "Reva", 50);
		arr[2] = new Student(3, "Shreya", 70);
		arr[3] = new Student(4, "Riya", 60);
		arr[4] = new Student(5, "Siya", 90);
		
		for(int i=0; i < arr.length;i++) {
			  
			 arr[i].display();
			 System.out.println("----------------");
		  }
		

	}

}
