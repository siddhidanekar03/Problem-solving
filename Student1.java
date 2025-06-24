package com.sunbeam;
import java.util.Scanner;

class Student1 {
	int rollno;
	String name;
	double marks;

	
	public Student1() {
	}

	

	public void accept(Scanner sc) {
		System.out.print("Enter the Student Roll no. : ");
		this.rollno = sc.nextInt();
		sc.nextLine();
		System.out.print("Enter the Student Name : ");
		this.name = sc.nextLine();
		System.out.print("Enter the Student Marks : ");
		this.marks = sc.nextDouble();
	}

	public void display() {
		System.out.println("Roll no.: " + rollno);
		System.out.println("Name : " + name);
		System.out.println("Marks: " + marks);
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Student1[] arr = new Student1[5];

		for (int i = 0; i < arr.length; i++) {
			arr[i] = new Student1(); 
			System.out.println("Enter details for Student " + (i + 1) + ":");
			arr[i].accept(sc);
			System.out.println("----------------");
		}

		for (int i = 0; i < arr.length; i++) {
			arr[i].display();
			System.out.println("----------------");
		}

		sc.close();
	}
}
