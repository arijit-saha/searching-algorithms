#include<stdio.h>
#include<conio.h>
int linear_search(int arr[], int n, int item) {
	int i;
	for (int i = 0; i < n; ++i)
	{
		if (item == arr[i]) {
			return(i+1);
		}
	}
	return 0;
}

void main() {
	int arr[20], n, i, item, pos;
	clrscr();
	printf("How many elements to be put in array : \n");
	scanf("%d",&n);

	for (int i = 0; i < n; ++i) {
		printf("Enter elements %d : \n",i+1);
		scanf("%d",&arr[i]);
	}
	prinf("Enter the elements to be searched : ");
	scanf("%d",&item);
	pos = linear_search(arr, n, item);

	if (pos>0)
		prinf("%d found at %d position\n",item, pos);
	else
		printf("%d not found\n",item);
}
