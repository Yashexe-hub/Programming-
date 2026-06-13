class Logic
{
    public void PrintTable(int a)
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt <= 10; iCnt++)
        {
            System.out.println(a * iCnt);
        }
    }
}

class assignment80
{
    public static void main(String A[]) 
    {
        Logic lobj = new Logic();
        lobj.PrintTable(5);
    }
}