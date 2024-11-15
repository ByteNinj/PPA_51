import java.util.Scanner;
class AgeInvalidException extends Exception
{
    public AgeInvalidException(String str)
    {    
        
        super(str);
    }
}

class ExceptionDemo5
{
    public static void main(String a[])
    { 
        int Age=0;
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter your Age::");
        Age=sc.nextInt();
        try
        {
            System.out.println("Inside try");
            if(Age<18)
            {
              
                AgeInvalidException aobj=new  AgeInvalidException("Your age is less than 18");
                throw aobj;
                //throw new  AgeInvalidException("Your age is less than 18");
             }
        }   

        catch(AgeInvalidException obj)
        {
            System.out.println("Inside catch");
            System.out.println(obj);
        }
        finally
        {
              System.out.println("Inside Finally");
        }

    }
}