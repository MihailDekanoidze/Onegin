#ifndef INPUT_TEXT_H
#define INPUT_TEXT_H

struct TextInfo {
                    void* buffer;
                    int elemcount;
                };

int fsize(FILE* file);

struct TextInfo InputText(FILE* file);

void charprint(struct TextInfo text);

#endif //INPUT_TEXT_H