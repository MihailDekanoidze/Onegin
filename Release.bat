g++ source\InputText.cpp -c -o source\InputText.o
g++ source\ProcessingText.cpp -c -o source\ProcessingText.o
g++ source\mystrcmptoward.cpp -c -o source\mystrcmptoward.o
g++ source\mystrcmpbackward.cpp -c -o source\mystrcmpbackward.o
g++ source\swap.cpp -c -o source\swap.o
g++ source\bubblesort.cpp -c -o source\bubblesort.o
g++ source\main.cpp -c -o source\main.o

g++ .\source\InputText.o .\source\ProcessingText.o .\source\mystrcmptoward.o .\source\mystrcmpbackward.o  .\source\swap.o .\source\bubblesort.o .\source\main.o -o release.exe
