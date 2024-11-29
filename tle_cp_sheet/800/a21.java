
// Note : remove package for submission to codeforces
import java.util.Scanner;

public class a21 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();


        while(t-->0){
            int n = sc.nextInt();
            int a[]= new int[n];
            int ans = 0;
            int maxCurr = 0;

            for(int i=0;i<n;i++){
              a[i]=sc.nextInt();

            }

            for(int i=0;i<n;i++){
              if(a[i] == 0){
                  maxCurr++;
              }else{
                  ans = Math.max(ans,maxCurr);
                  maxCurr = 0;
              }
            }

            ans = Math.max(ans,maxCurr);
            System.out.println(ans);




            }
        }


}