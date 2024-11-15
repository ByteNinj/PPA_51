import java.io.*;


class ExceptionDemo6
{  
     
     

    public static void main(String a[])
    { 
        try
        {
      BufferedReader bobj=new BufferedReader(new InputStreamReader(System.in)) ;
      System.out.println("Enter your name:");   
       String name=bobj.readLine();

     System.out.println("Enter your Age:");   
     int Age=Integer.parseInt(bobj.readLine());
     
      System.out.println(" your Name:"+name);  
      System.out.println(" your Age:"+Age);  

          }

       catch(Exception Obj)
       {

       }

    }

}