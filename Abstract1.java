abstract class Arithmatic
{
    abstract public int addition(int A,int B);
    abstract public int substraction(int A,int B);
    public int multiplication(int A,int B)
    {
        return A*B;
    }
}

class Marvellous extends  Arithmatic
{
     public int addition(int A,int B)
      {
       return A+B;
      }
      public int substraction(int A,int B)
      {

      return A-B;
      }
}
class Abstract1
{
    public static void main(String a[])
      {

            Marvellous mobj=new Marvellous();
            System.out.println(mobj.addition(10,11));
            System.out.println(mobj.substraction(10,11));   
            System.out.println(mobj.multiplication(10,11));
              
            

      }


}