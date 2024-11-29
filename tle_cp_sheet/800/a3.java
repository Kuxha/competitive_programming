package TLE_Ladders.l1_800;
// Note : remove package for submission to codeforces
import java.util.Scanner;

public class a3 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            sc.nextLine();
            String s = sc.nextLine();
            int ans = 0;

            int dotcount = 0;

            for (int j = 0; j <n ; j++) {
                if(s.charAt(j) == '.'){
                    dotcount++;
                }
            }

            boolean threedots = false;
            if(s.contains("...")){
                threedots = true;
            }

            if(threedots){
                ans = 2;
            }else{
                ans = dotcount;
            }

            System.out.println(ans);




        }



        sc.close();
    }
}
