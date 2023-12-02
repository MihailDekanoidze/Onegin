#ifndef SORTING_H
#define SORTING_H

int alpha(struct StringInfo* ptr, int i, int format);

int mystrcmptoward(void* str1, void * str2);

int mystrcmpbackward(void* str1, void * str2);

void printcmp(struct StringInfo* str1, StringInfo* str2);

void swap(const void* elem1, const void* elem2, size_t size);

void bubblesort(void* data, int elemsize, int length, int(*mystrcmp)(void* str1, void * str2));

int posmin(struct StringInfo* data, int begin, int length);

void selectionsort(struct StringInfo* data, int length);


#endif //SORTING_H
