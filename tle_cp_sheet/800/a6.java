package TLE_Ladders.l1_800;
// Note : remove package for submission to codeforces
import java.util.HashMap;
import java.util.Scanner;

public class a6 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-->0){

            int n = sc.nextInt();
            int[] a = new int[n];
            HashMap<Integer,Integer> map = new HashMap<>();
            for(int i=0;i<n;i++){
                a[i]= sc.nextInt();
                if(map.containsKey(a[i])){

                    map.put(a[i],map.get(a[i])+1);

                } else {
                    map.put(a[i],1);
                }
            }


            String condition;
            if(map.size()>2){
                condition= "No";
            }else if (map.size() == 1 || map.isEmpty()){
                condition= "Yes";
            }else{

                if(map.get(a[0]) == Math.floorDiv(n,2) ){
                    condition= "Yes";
                }else{
                    condition= "No";
                }
            }

            System.out.println(condition);

        }
    }
}