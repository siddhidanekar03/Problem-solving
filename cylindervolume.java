
public class cylindervolume {
    
    public static void main(String[] args) {
     Cylinder1 myCylinder= new Cylinder1(9,12 );
     double v=myCylinder.volume();
     System.out.println(v);

        
    }
}
class Cylinder1{
  private int radius;
  private int height;

    public void setRadius(int rad){
         radius=rad;

    }

    public int getRadius(){
        return radius;
    }

    public void setHeight(int hei){
        height=hei;
    }
    public int getHeight(){
        return height;
    }

    public double volume(){
        return  3.14*radius*radius*height;
    }
    //constructor
    public  Cylinder1(int radius,int height){
       this.radius=radius;
        this.height=height;

    }
}