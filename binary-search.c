#include<stdio.h>
#include<conio.h>
int binary_search(int arr[], int n, int item) {
	int start, end, middle, i, pos;
	start = 0;
	end = n-1;
	middle = (start+end)/2;
	while(start<=end) {
		if (item == arr[middle])
			return (middle+1);
		else if (item > arr[middle])
			start = middle+1;
		else if (item < arr[middle])
			end = middle-1;
		middle = (start+end)/2;
	}
	return 0;
}

void main() {
	int arr[20], n, i, item, pos;
	clrscr();
	printf("How many elements to be put in the array : \n");
	scanf("%d",&n);
	for (int i = 0; i < n; ++i) {
		printf("Enter elements %d : ",i+1);
		scanf("%d", &arr[i]);
	}
	printf("Enter the elements to be searched : ");
	scanf("%d",&item);
	pos = binary_search(arr, n, item);

	if (pos>0)
		printf("%d found at %d position\n",item,pos);
	else
		printf("%d not found\n",item);
getch();
}
