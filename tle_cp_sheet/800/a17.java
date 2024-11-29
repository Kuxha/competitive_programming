package TLE_Ladders.l1_800;
// Note : remove package for submission to codeforces
import java.util.Scanner;

public class a17 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-->0){
            int n = sc.nextInt();
            int k = sc.nextInt();
            int x = sc.nextInt();

            if(x !=1){
                System.out.println("\nYES");
                System.out.println(n);
                for (int i = 0; i < n ; i++) {
                    System.out.print((1)+ " ");
                }
            }else{








                if(k == 2 || (k>2 && n%2 ==0) ){
                    if(n%2 == 0){
                        System.out.println("\nYES");
                        System.out.println(n/2);
                        for (int i = 0; i < n/2 ; i++) {
                            System.out.print((2)+ " ");
                        }
                    }else{
                        System.out.print("\nNO");
                    }
                }else if(k ==3 ){
                    if(n == 1 || n == 2){
                        System.out.print("\nNO");
                    }else{
                        System.out.println("\nYES");

                        if(n == 4){
                            System.out.println(2);
                            System.out.print("2 2");
                        }else {
                            if (n % 3 == 0) {
                                System.out.println(n / 3);
                                for (int i = 0; i < n / 3; i++) {
                                    System.out.print((3) + " ");
                                }
                            } else {
                                // two cases
                                if (n % 2 == 0) {
                                    System.out.println(n / 2);
                                    for (int i = 0; i < n / 2; i++) {
                                        System.out.print((2) + " ");
                                    }
                                } else {
                                    n = n - 3;

                                    System.out.println(n / 2 + 1);
                                    System.out.print(3 + " ");
                                    for (int i = 0; i < n / 2; i++) {
                                        System.out.print(3 + " ");
                                    }
                                }
                            }
                        }


                    }

                }else{


                    System.out.print("\nNO");
                }

            }
        }

    }
}