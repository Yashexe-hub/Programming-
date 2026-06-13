class logic
{
    public void SumofDigits(int iNo)
    {
        int iDigits = 0;
        int iSum = 0;

        while(iNo != 0)
        {
            iDigits = (iNo % 10);
            iSum = iSum + iDigits;
            iNo = iNo / 10;
        }
        System.out.println("Addition of digits is : "+iSum);
    }
}  
class assignment76
{
    public static void main(String A[])
    {
        logic lobj = new logic();
        lobj.SumofDigits(1234);
    }
}