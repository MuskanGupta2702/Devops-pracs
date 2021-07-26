//throws
import java.util.*;
class excep1
{
	static void A() throws ArrayIndexOutOfBoundsException
	{
		int a[]={ 2 };
		a[5]=14;
		System.out.println("Inside A.");
		throw new ArrayIndexOutOfBoundsException("demo");
	}
	public static void main(String args[])
	{
		
		try
		{
			A();
		}
		catch(ArrayIndexOutOfBoundsException e)
		{
			System.out.println("Caught " + e);
		}
		System.out.println("Main method");
	}
}