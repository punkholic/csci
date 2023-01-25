/*
 * class ClassName{
 *  // class member
 * }
 * 
 */
class Animal{
    private int leg;
    private int eye;
    private String breed;

   
    public String getBreed() {
        return breed;
    }
    public int getEye() {
        return eye;
    }
    public int getLeg() {
        return leg;
    }
    public void setBreed(String breed) {
        this.breed = breed;
    }
    public void setEye(int eye) {
        this.eye = eye;
    }
    public void setLeg(int leg) {
        this.leg = leg;
    }
    void printInfo(){
        System.out.println("leg = " + leg + ", eye = "+ eye + ", breed = " + breed);
    }
}


public class Test {
    public static void main(String[] args) {
        // ClassName objectName = new ClassName();
        Animal animal1 = new Animal();
        animal1.setBreed("bird");
        animal1.setLeg(2);
        animal1.setEye(2);
        animal1.printInfo();
    }
}