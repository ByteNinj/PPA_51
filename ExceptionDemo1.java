import java.util.Scanner;

class ExceptionDemo1
{
  public static void main(String a[])
  {
   int No1=0,No2=0, Ans=0;
   Scanner sc=new Scanner(System.in);
   System.out.println("Enter First Number:");
   No1=sc.nextInt();

     System.out.println("Enter second Number:");
   No2=sc.nextInt();
   Ans=No1/No2;
     
       System.out.println("Division is::"+Ans);
   
   }

}