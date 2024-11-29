package TLE_Ladders.l1_800;
// Note : remove package for submission to codeforces
import java.util.Scanner;

public class a10 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-->0){
            int ans = 0;

            for (int i = 0; i < 10; i++) {

                String s = sc.nextLine();

                for (int j = 0; j <s.length() ; j++) {
                    if(s.charAt(j) == 'X'){

                        int scoreH = 0;
                        int scoreV= 0;
                       if(i>4){
                           scoreH =     5 - (i%5) ;
                       }else if(i<=4){
                           scoreH  =   1 + (i%5);
                       }

                        if(j>4){
                            scoreV =     5 - (j%5) ;
                        }else if(j<=4){
                            scoreV =   1 + (j%5);
                        }

                       ans = ans + Math.min(scoreH,scoreV);


                    }
                }
            }
            System.out.println(ans);

        }



    }
}