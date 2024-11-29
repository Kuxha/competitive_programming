package TLE_Ladders.l1_800;
// Note : remove package for submission to codeforces
import java.util.Scanner;

public class a11 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int ans = Integer.MAX_VALUE;
        while(t-->0){
            int x = sc.nextInt();
             ans = Math.min(Math.abs(x),ans);
        }
        System.out.println(ans);
    }
}