#ifndef PROCESSING_TEXT_H
#define PROCESSING_TEXT_H

struct StringInfo {
    char* address;
    int size;
};

int StringCount(char* buffer, int charread);

struct TextInfo Lines(TextInfo);

bool isstr(char* begin);

int CountSort(struct StringInfo* lines, int stringcount);

struct TextInfo Needsort (TextInfo);

#endif //PROCESSING_TEXT_H
