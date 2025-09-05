import java.util.Scanner;

public class A2013_CF_ZhansBlender {
    public static void main( String[] args ){
        
        // create the scanner
        Scanner input = new Scanner(System.in);
        // main loop
        int t = input.nextInt();
        while (t--){
            int a, b, c;
            a = input.nextInt();
            b = input.nextInt();
            c = input.nextInt();
            System.out.println(a / (double)Math.min(b, c));
        }
    }    
}
