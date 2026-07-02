
import java.util.*;

class Bitwise 
{
    public int OnBit(int iNo, int iPos)
    {
        int iMask = 0x1;

        iMask = iMask<<(iPos - 1);

        if(!((iMask | iNo) == iNo))
        {
            iNo = iMask ^ iNo;
        }

        return iNo;

    }
}

class assignment178
{
    public static void main(String A[])
    {
        Bitwise bobj = new Bitwise();
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iLocation = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        System.out.println("Enter location of bit : ");
        iLocation = sobj.nextInt();
        
        iRet = bobj.OnBit(iValue, iLocation);

        System.out.println("Modified number : "+iRet);
        

    }
}