main: main.o box.o checkerboard.o checkerboard3x3.o cross.o lower.o trapezoid.o upper.o
	g++ -o main main.o box.o checkerboard.o checkerboard3x3.o cross.o lower.o trapezoid.o upper.o

main.o: main.cpp box.h checkerboard.h checkerboard3x3.h cross.h lower.h trapezoid.h upper.h
	g++ -c main.cpp

box.o: box.cpp box.h
	g++ -c box.cpp

checkerboard.o: checkerboard.cpp checkerboard.h
	g++ -c checkerboard.cpp

checkerboard3x3.o: checkerboard3x3.cpp checkerboard3x3.h
	g++ -c checkerboard3x3.cpp

cross.o: cross.cpp cross.h
	g++ -c cross.cpp

lower.o: lower.cpp lower.h
	g++ -c lower.cpp

trapezoid.o: trapezoid.cpp trapezoid.h
	g++ -c trapezoid.cpp

upper.o: upper.cpp upper.h
	g++ -c upper.cpp


clean:
	rm -f main.o box.o checkerboard.o checkerboard3x3.o cross.o lower.o trapezoid.o upper.o