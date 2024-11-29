package TLE_Ladders.l1_800;
// Note : remove package for submission to codeforces
import java.util.Scanner;

public class a16 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-->0){
            int n = sc.nextInt();
            int a[] = new int[n];

            double min = Double.MAX_VALUE;
            int i = 1;
            a[0] = sc.nextInt();
            boolean alreadyUnsorted = false;
            for (; i < n; i++) {
                a[i] = sc.nextInt();

                if(a[i]<a[i-1]){
                    alreadyUnsorted = true;
                }
                min  = Math.min(a[i] - a[i-1],min);
            }

//            System.out.println("min = " + min);
            int ans = (int)Math.floor(min/2.0);
//            System.out.println("ans = " + ans);

            if(alreadyUnsorted){
                System.out.println(0);
            }else{
                System.out.println(ans+1);
            }





        }

    }
}