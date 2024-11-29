package TLE_Ladders.l1_800;
// Note : remove package for submission to codeforces
import java.util.HashMap;
import java.util.Scanner;

public class a13 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-->0){
            int n = sc.nextInt();
            int a[] = new int[n];
            int max = 0;
            HashMap<Integer,Integer> count = new HashMap<>();
            for (int i = 0; i < n; i++) {

                a[i] = sc.nextInt();
                if(i == 0 ){
                    max = a[i];
                }
                max = Math.max(a[i],max);
                if(count.containsKey(a[i])){
                    count.put(a[i],count.get(a[i]) +1);
                }else{
                    count.put(a[i],1);
                }


            }


            if(count.get(max) == n){
                System.out.print("-1");
            }else{
                int countofmax = count.get(max);
                int countofrest = n - countofmax;

                System.out.println(countofrest + " " + countofmax);
                for (int i = 0; i < n; i++) {

                    if(a[i]!= max){
                        System.out.print(a[i] + " ");
                    }
                }

                System.out.println();
                for (int i = 0; i < countofmax; i++) {
                    System.out.print(max + " ");
                }




            }


            System.out.println();

        }

    }
}