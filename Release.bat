g++ InputText.cpp -c
g++ ProcessingText.cpp -c
g++ mystrcmptoward.cpp -c
g++ mystrcmpbackward.cpp -c
g++ swap.cpp -c
g++ bubblesort.cpp -c
g++ main.cpp -c

g++ InputText.o ProcessingText.o mystrcmptoward.o mystrcmpbackward.o  swap.o bubblesort.o main.o -o release.exe
