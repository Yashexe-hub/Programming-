
import java.util.Scanner;

class Bitwise
{

    // Position : 7
    public int OffBit(int iNo)
    {
        int iMask = 0x00000040;

        if((iMask | iNo) == iNo)
        {
            iNo = iMask ^ iNo;
        }
        
        return iNo;
    }
}

class assignment171
{

    public static void main(String A[])
    {
        Bitwise bobj = new Bitwise();
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iRet = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        iRet = bobj.OffBit(iValue);

        System.out.println("Modified number : "+iRet);
    }

}