

public class UrlaBariCSCI {
    public static void main(String[] args) {
        // ClassName objectName = new ClassName();
        Student std = new Student();
        std.setRollNo(1);
        System.out.println(std.getRollNo());
    }
}

class Student{
    private int rollNo;
    private String name;
    private String className;
    private String password;

    public void setRollNo(int rollNo){
        this.rollNo = rollNo;
    }
    public int getRollNo(){
        return rollNo;
    }
   
    public void setPassword(String value){
        password = value;
    }
    public String getPassword(){
        return password;
    }
}