class Command
{
public static void main(String a[])
 {
    System.out.println("Number of command line Arguments:"+a.length);
     //System.out.println(a[0]);
     // System.out.println(a[1]);
     // System.out.println(a[2]);  
     for(int iCnt=0;iCnt<a.length;iCnt++)
     {
     System.out.println(a[iCnt]);
     }

 }

}

//java Command.java
//java Command hello 21 Marvellous