#include "015_array.h"
#include <stdio.h>
#include <stdlib.h>

Array array_create(int init_size){
	Array a;
	a.size = init_size;
	a.array = (int *)malloc(sizeof(int)*a.size);
	return a;
} 

void array_free(Array *a) {
	free(a->array);
	a->size = 0;
	a->array = NULL;
}

int array_size(const Array *a) {
	return a->size;
}

int* array_at(Array *a, int index) {
	if(index >= a->size) {
		array_inflate(a,BLOCK_SIZE);
	}
	return &(a->array[index]);
}

void array_inflate(Array *a, int more_size) {
	int *p = (int*)malloc(sizeof(int) * (more_size + a->size));
	int i;
	for(i=0;i<a->size;i++) {
		p[i] = a->array[i];
	}
	free(a->array);
	a->array = p;
	a->size += more_size;
}

int main() {
	Array a = array_create(10);
	printf("size=%d\n", array_size(&a));
//	*array_at(&a,0) = 10;
//	printf("%d\n",*array_at(&a,0));
//	array_free(&a);
	int number = 0;
	int cnt = 0;
	while(number != -1) {
		scanf("%d",&number);
		if(number != -1) *array_at(&a,cnt++) = number;
	}
	printf("lastNumber=%d",a.array[cnt-1]);
	return 0;
}
