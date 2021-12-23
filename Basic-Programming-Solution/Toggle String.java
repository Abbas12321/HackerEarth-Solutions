import java.util.*;
import java.util.Scanner;
class TestClass {
    public static void main(String args[] ) throws Exception {
        

        //Scanner
        Scanner s = new Scanner(System.in);
        String name = s.nextLine();                 
        char arr[]= name.toCharArray();
        int a=0; String str= " ";
        int len=name.length();
        for(int i=0;i<len;i++)
        {
          char c=name.charAt(i);
          if(c>=65 && c<=90)
          str=str+ (char)(c+32);
          else
          str=str+ (char)(c-32);
         }
         System.out.println(str);
    }
}
