	
# Python implementation of the approach

# Function to perform the given operation on arr[]
def operations(arr, n, k):
	arr.sort();
	i = 0; sum = 0;
	while (k > 0):

		# Skip elements which are 0
		while (i < n and arr[i] - sum == 0):
			i+=1;

		# Pick smallest non-zero element
		if (i < n and arr[i] - sum > 0):
			print(arr[i] - sum, end= " ");
			sum = arr[i];

		# If all the elements of arr[] are 0
		else:
			print(0);
		k-=1;
		
# Driver code
k = 5;
arr = [ 3, 6, 4, 2 ];
n = len(arr);
operations(arr, n, k);

