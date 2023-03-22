#include <stdio.h>

void bubbleSort(int *array, int n)
{
	int i, j, temp;
    int count;
	for (i=0;i<n-1;++i)
	{
        count = 0;
		for (j=0;j<n-i-1;++j)
		{
			if (array[j] > array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
                count++;
			}
	    }
        printf("%d\n", count);
	}
    
}

int main(void)
{
    int array[] = {97,16,45,63,13,22,7,58,72};
    bubbleSort(array, 9);
    for(int i=0;i<9;i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}