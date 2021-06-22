#include <stdio.h>
int main()
{
int i, low, high, mid, n, key=4;
int array[10]={3, 20, 4, 5,18,6, 7, 8, 11, 58} ;
low = 0;
high = n - 1;
mid = (low+high)/2;
while (low <= high) {
if(array[mid] < key)
low = mid + 1;
else if (array[mid] == key) {
printf("%d found at location %d.n", key, mid+1);
break;
}
else
high = mid - 1;
mid = (low + high)/2;
}
if(low > high)
printf("Not found! %d isn't present in the list.n", key);
return 0;
}