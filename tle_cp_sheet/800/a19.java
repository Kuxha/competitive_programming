package TLE_Ladders.l1_800;
// Note : remove package for submission to codeforces
import java.util.Scanner;

public class a19 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();


        while(t-->0){
            int n = sc.nextInt();


            int neg1s = 0;
            int pos1s = 0;

            for(int i=0;i<n;i++){
              if(sc.nextInt() == 1){
                  pos1s++;
              }else{
                  neg1s++;
              }
            }

            // Rules
            // Neg1s always has to be even
            // Pos1s always has to be more than neg1s or equal
            // first check if more or not
            int ans = 0;
            if(neg1s>pos1s){
                double diff = neg1s - pos1s;

                diff = Math.ceil(diff/2.0);
                neg1s = neg1s - (int)diff;
                pos1s = pos1s + (int)diff;

                ans = (int)diff;

            }

            if(neg1s %2 !=0){
                ans++;
            }

            System.out.println(ans);



            }
        }


}