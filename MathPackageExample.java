interface Arithmetic{
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
}



interface Statistical {
    double mean(double[] data);
    double median(double[] data);
    double variance(double[] data);
}

interface Trigonometric {
    double sine(double angle);
    double cosine(double angle);
    double tangent(double angle);
}


class MathOperations implements Arithmetic, Statistical, Trigonometric {

    
    public double add(double a, double b) {
        return a + b;
    }

    public double subtract(double a, double b) {
        return a - b;
    }

    public double multiply(double a, double b) {
        return a * b;
    }

    public double divide(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            System.out.println("Error! Division by zero.");
            return Double.NaN;
        }
    }


    public double mean(double[] data) {
        double sum = 0;
        for (double num : data) {
            sum += num;
        }
        return sum / data.length;
    }

    public double median(double[] data) {
        java.util.Arrays.sort(data);
        int middle = data.length / 2;
        if (data.length % 2 == 0) {
            return (data[middle - 1] + data[middle]) / 2.0;
        } else {
            return data[middle];
        }
    }

    public double variance(double[] data) {
        double mean = mean(data);
        double sumSquaredDifferences = 0;
        for (double num : data) {
            sumSquaredDifferences += Math.pow(num - mean, 2);
        }
        return sumSquaredDifferences / data.length;
    }

    
    public double sine(double angle) {
        return Math.sin(Math.toRadians(angle));
    }

    public double cosine(double angle) {
        return Math.cos(Math.toRadians(angle));
    }

    public double tangent(double angle) {
        return Math.tan(Math.toRadians(angle));
    }
}

public class MathPackageExample {
    public static void main(String[] args) {
        MathOperations mathOps = new MathOperations();

        
        System.out.println("Arithmetic Operations:");
        System.out.println("Add: " + mathOps.add(10, 5));
        System.out.println("Subtract: " + mathOps.subtract(10, 5));
        System.out.println("Multiply: " + mathOps.multiply(10, 5));
        System.out.println("Divide: " + mathOps.divide(10, 5));

        
        double [] data = {10, 20, 30, 40, 50};
        System.out.println("\nStatistical Operations:");
        System.out.println("Mean: " + mathOps.mean(data));
        System.out.println("Median: " + mathOps.median(data));
        System.out.println("Variance: " + mathOps.variance(data));

        
        System.out.println("\nTrigonometric Operations:");
        System.out.println("Sine of 30°: " + mathOps.sine(30));
        System.out.println("Cosine of 45°: " + mathOps.cosine(45));
        System.out.println("Tangent of 60°: " + mathOps.tangent(60));
    }
 }
