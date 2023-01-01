class Main{
    public static void main(String[] args){
        int n = 10;
        int a =0, b=1, c;
        System.out.printf("%d %d", a, b);
    
        for(int i=2; i<= n; i++){
            c = a + b;
            System.out.printf(" %d ", c);
            a = b;
            b = c;
        }
    }
}