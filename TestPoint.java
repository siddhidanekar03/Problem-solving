package tester;
import com.app.geometry.Point2D;
import java.util.Scanner;
public class TestPoint {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter x and y for point 1: ");
		double x1 = sc.nextDouble();
		double y1 = sc.nextDouble();
		
		System.out.println("Enter x and y for point 2: ");
		double x2 = sc.nextDouble();
		double y2 = sc.nextDouble();
		
		Point2D p1 = new Point2D(x1, y1);
		Point2D p2 = new Point2D(x1, y2);
		
		System.out.println("Point 1: " + p1.getDetails());
		System.out.println("Point 2: " + p2.getDetails());
		
		if(p1.isEqual(p2)) {
			System.out.println("Points are Same");
		}else {
			System.out.println("Points are different");
		}
		double distance = p1.calculateDistance(p2);
		
		System.out.println("Distance between two points: " + distance);
		
		
		
	}

}
