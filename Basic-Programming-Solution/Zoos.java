/* IMPORTANT: Multiple classes and nested static classes are supported */


 

import java.util.*;


// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail

class Zoo {
    public static int x=0;
       public static int y=0;
    public static void main(String args[] ) throws Exception {
       
        Scanner s = new Scanner(System.in);
        String name = s.nextLine();
        char ch[]=new char[20]; 
         ch=name.toCharArray();
        for(int i=0;i<ch.length;i++)
        {
            if(ch[i]=='z'){
               
                x=x+1;
            }
            else if(ch[i]=='o'){
                y=y+1;
                
            }
        }
            int end=2*x;
            if(end==y){
                System.out.println("Yes");
            }
            else{
                System.out.println("No");
            }

        
        

           

        

        // Write your code here

    }
}
