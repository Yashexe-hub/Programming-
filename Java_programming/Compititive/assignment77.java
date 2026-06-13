class logic
{
   public void CheckPallindrome(int iNo)
    {
        int iDigit = 0;
        int iRev = 0;
        int iTemp = iNo;

        while(iNo != 0)
        {
            
            iDigit = (iNo % 10);
            iRev = (iRev * 10) + iDigit;
            
            iNo = iNo / 10;

        }
        if(iRev == iTemp)
        {
            System.out.println("Pallindrome is : " + iTemp );
        }
        else
        {
            System.out.println("Pallindrome is : " + iTemp );
        }
    }
}   

class assignment77
{
    public static void main(String A[])
    {
        logic lobj = new logic();
        lobj.CheckPallindrome(121);
    }
}