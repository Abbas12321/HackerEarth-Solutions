import java.util.*;

 

public class TestClass {

   public static void main(String args[] ) throws Exception {

 

       //Scanner

       Scanner s = new Scanner(System.in);

 

       int t,i;

       t = s.nextInt();

 

       for (i=1;i<=t;i++){

           int n,j;

           

           n = s.nextInt();

           

           int arr[] = new int[n];

 

           for (j=0;j<n;j++){

               arr[j] = s.nextInt();

           }

 

           Arrays.sort(arr);

           

           int ans=99999;

 

           for (j=0;j<n-1;j++){

               //   System.out.println(j);

               // System.out.println(k);

               ans = Math.min(ans, arr[j]^arr[j+1]);

               // System.out.println(ans);

           }

           

           System.out.println(ans);

       }

   }

}
