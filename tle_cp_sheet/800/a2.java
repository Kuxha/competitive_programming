package TLE_Ladders.l1_800;
// Note : remove package for submission to codeforces

import java.util.Scanner;

public class a2 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            int x= sc.nextInt();

            int a[] = new int[n];
            int stations = 0;




            for (int j = 0; j <a.length ; j++) {
                a[j] = sc.nextInt();

            }

            stations = Math.abs(a[0]);
            int lastStation = 0;
            for (int j = 1; j < a.length; j++) {
                if(a[j]>x){
                    break;
                }
                stations = Math.max(stations,Math.abs(a[j] - a[j-1]));
                lastStation = j;
            }

            stations = Math.max(stations,2*Math.abs(x-a[lastStation]));


            System.out.println(stations);

        }



        sc.close();
    }
}
