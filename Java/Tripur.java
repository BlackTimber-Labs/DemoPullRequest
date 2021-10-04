// Java implementation of the approach
import java.util.*;

class GFG
{

// Function to perform the given operation on arr[]
static void operations(int arr[], int n, int k)
{
	Arrays.sort(arr);
	int i = 0, sum = 0;
	while (k-- > 0)
	{

		// Skip elements which are 0
		while (i < n && arr[i] - sum == 0)
			i++;

		// Pick smallest non-zero element
		if (i < n && arr[i] - sum > 0)
		{
			System.out.print(arr[i] - sum + " ");
			sum = arr[i];
		}

		// If all the elements of arr[] are 0
		else
			System.out.println("0");
	}
}

// Driver code
public static void main(String args[])
{
	int k = 5;
	int arr[] = { 3, 6, 4, 2 };
	int n = arr.length;
	operations(arr, n, k);
}
}

// This code is contributed by Princi Singh
