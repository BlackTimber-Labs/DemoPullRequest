	



def operations(arr, n, k):
	arr.sort();
	i = 0; sum = 0;
	while (k > 0):

	
		while (i < n and arr[i] - sum == 0):
			i+=1;

	
		if (i < n and arr[i] - sum > 0):
			print(arr[i] - sum, end= " ");
			sum = arr[i];

		
		else:
			print(0);
		k-=1;
		
k = 5;
arr = [ 3, 6, 4, 2 ];
n = len(arr);
operations(arr, n, k);

