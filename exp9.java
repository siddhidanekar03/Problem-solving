interface Area {
    // Method to compute area, it will be implemented by the classes
    double computeArea();
}

// Circle class implementing Area interface
class Circle implements Area {
    double radius;

    // Constructor to initialize the radius
    Circle (double radius) {
        this.radius = radius;
    }

    // Implementing computeArea method for Circle
    public double computeArea() {
        return Math.PI * radius * radius; // Area of circle = pr²
    }
}


// Rectangle class implementing Area interface
class Rectangle implements Area {
    double length, width;

    // Constructor to initialize length and width
    Rectangle (double length, double width) {
        this.length = length;
        this.width = width;
    }

    // Implementing computeArea method for Rectangle
    public double computeArea() {
        return length * width; // Area of rectangle = length * width
    }
}

// Main class to run the program
public class AreaExample {
    public static void main (String [] args) {
        // Create Circle and Rectangle objects
        Circle circle = new Circle (5); // radius = 5
        Rectangle rectangle = new Rectangle (4, 6); // length = 4, width = 6

        // Display the areas
        System.out.println("Area of Circle: " + circle.computeArea());
        System.out.println("Area of Rectangle: " + rectangle.computeArea());
    }
}