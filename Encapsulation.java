class Arithmatic
{
    public int no1;
    public int no2;
     
     public Arithmatic()
     {
        System.out.println("Inside Default Constructor");
        this.no1=0;
        this.no2=0;
     }

     public Arithmatic(int A,int B)
     {
        System.out.println("Inside Parameterized  Constructor");
        this.no1=A;
        this.no2=B;
     }
     int addition()
     {
        int ans=0;
        ans=this.no1+this.no2;
        return ans;

     }
     int substraction()
     {
        int ans=0;
        ans=this.no1-this.no2;
        return ans;

     }

}


class Encapsulation
{
  public static void main(String arg[])
  {

    System.out.println("Inside main function");
     Arithmatic aobj1=new Arithmatic();
     Arithmatic aobj2=new Arithmatic(11,10);
     
    int ret=0;
    ret=aobj2.addition();
    System.out.println("Addition is:"+ret);
     ret=aobj2.substraction();
    System.out.println("Substraction is:"+ret);
  
  

   }
}