
import java.util.*;

class GFG
{


static void operations(int arr[], int n, int k)
{
	Arrays.sort(arr);
	int i = 0, sum = 0;
	while (k-- > 0)
	{

		
		while (i < n && arr[i] - sum == 0)
			i++;

		
		if (i < n && arr[i] - sum > 0)
		{
			System.out.print(arr[i] - sum + " ");
			sum = arr[i];
		}

		
		else
			System.out.println("0");
	}
}


public static void main(String args[])
{
	int k = 5;
	int arr[] = { 3, 6, 4, 2 };
	int n = arr.length;
	operations(arr, n, k);
}
}

