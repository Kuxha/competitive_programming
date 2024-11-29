package TLE_Ladders.l1_800;
// Note : remove package for submission to codeforces
import java.util.Scanner;

public class a15 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-->0){
            int n = sc.nextInt();
            int odd = 0;
           while(n-->0){

               if(sc.nextInt()%2 !=0 ){
                   odd++;
               }
           }

           if(odd%2 == 0){
               System.out.println("YES");
           }else{
               System.out.println("NO");
           }


        }

    }
}