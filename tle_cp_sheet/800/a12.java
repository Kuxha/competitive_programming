package TLE_Ladders.l1_800;
// Note : remove package for submission to codeforces
import java.util.ArrayList;
import java.util.Scanner;

public class a12 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();


        while(t-->0){
            int n = sc.nextInt();
            int a[] = new int[n];

            for (int i = 0; i < n; i++) {
                a[i ] = sc.nextInt();
            }

            ArrayList<Integer> ans = new ArrayList<>();
            int num = 0 ;

            for (int i = 0; i < n; i++) {

                if(i == 0 ){
                    ans.add(a[i]);
                    num++;
                }else{
                    if(a[i-1]<=a[i]){
                        ans.add(a[i]);
                        num++;
                    }else{
                        ans.add(1);
                        ans.add(a[i]);
                        num = num+2;
                    }


                }

            }

            System.out.println(num);
            for (int i = 0; i < num; i++) {
                System.out.print(ans.get(i) + " ");
            }
            System.out.println();
        }


    }
}