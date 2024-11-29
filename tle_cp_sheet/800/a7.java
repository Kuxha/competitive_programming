package TLE_Ladders.l1_800;
// Note : remove package for submission to codeforces
import java.util.Scanner;

public class a7 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-->0){

            sc.nextInt();
            sc.nextInt();
            sc.nextLine();
            String s = sc.nextLine();
            String s2 = sc.nextLine();

            int ans = -1;
            if(s.contains(s2)){
                ans = 0;
            }else{
                for (int i = 0; i < 6; i++) {
                    s = s + s;
                    if(s.contains(s2)){
                        ans = i+1;
                        break;
                    }
                }
            }

            System.out.println(ans);

        }



    }
}