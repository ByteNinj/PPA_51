class Marvellous
{
    public int A;
    protected float B;
    private int c;

    public Marvellous()
    {
     A=10;
     B=10.10f;
     c=20;
    }
    void display()     //default access specifier
    {
        int i=11;
        System.out.println("Value of i is ::"+i);

    }


}


class Demo
{
    public static void main(String a[])
    {
        Marvellous mobj=new Marvellous();
        mobj.display();
    }
}