package TLE_Ladders.l1_800;
// Note : remove package for submission to codeforces
import java.util.Scanner;

public class a9 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-->0){

            int n = sc.nextInt();
            int ans  = 0;

            for(int i=0;i<n-1;i++){
                ans =  ans + sc.nextInt();
            }
            System.out.println(-ans);
        }
    }
}