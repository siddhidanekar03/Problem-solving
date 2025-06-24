package com.sunbeam;

public class program1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		   int [][] arr = new int[2][];
		   arr[0] = new int[2];
		   arr[1] = new int[3];
		   
		  arr[0][0] = 10;
		  arr[0][1] = 20;
		  arr[1][0] = 30;
		  arr[1][1] = 40;
		  arr[1][2] = 50;
		  
		  for(int i=0; i < arr.length;i++) {
			  for(int j=0; j < arr[i].length; j++) {
				  System.out.println("Array Elements: " + arr[i][j]);
			  }
		  }
		  System.out.println("For each loop ->");
		  for(int[] element : arr ) {
			  for(int e : element) {
				  System.out.println("Array elements: "+ e);
			  }
		  }
		  
	}

}
