package TLE_Ladders.l1_800;
// Note : remove package for submission to codeforces
import java.util.Scanner;

public class a18 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-->0){
            int x = sc.nextInt();
            int k = sc.nextInt();

            if(x%k != 0){
                System.out.println(1);
                System.out.println(x);
            }else{
                System.out.println(2);
                System.out.println((k-1) + " " + (x-k+1));
            }






            }
        }


}