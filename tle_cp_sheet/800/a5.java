package TLE_Ladders.l1_800;
// Note : remove package for submission to codeforces
import java.util.Scanner;

public class a5 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            int a[] = new int[n];
            for (int j = 0; j <a.length ; j++) {
                a[j] = sc.nextInt();
            }
            if(a[0]!=1){
                System.out.println("NO");
            }else{
                System.out.println("YES");
            }
        }
        sc.close();
    }
}