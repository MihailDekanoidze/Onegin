#ifndef PROCESSING_TEXT_H
#define PROCESSING_TEXT_H

struct StringInfo {
    char* address;
    int size;
};

int StringCount(char* buffer, int charread);

struct TextInfo Lines(char* buffer, int charread);

bool isstr(char* begin);

int CountSort(struct StringInfo* lines, int stringcount);

struct TextInfo Needsort (struct StringInfo* lines, int stringcount);

#endif //PROCESSING_TEXT_H
