class PrintClass{
    public static void print(char a){
        System.out.printf("printing from char method a = %c\n", a);
    }
    public static void print(int a){
        System.out.printf("printing from char method a = %d\n", a);
    }
    public static void print(float a){
        System.out.printf("printing from char method a = %f\n", a);
    }
    public static void print(String a){
        System.out.printf("printing from char method a = %s\n", a);
    }
    
}

public class Overloading {
    public static void main(String[] args) {
        PrintClass.print('a');
        PrintClass.print(12.0f);
        PrintClass.print("Hello World");
        PrintClass.print(14);
    }
}
