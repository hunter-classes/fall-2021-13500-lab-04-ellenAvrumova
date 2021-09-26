# Author: Ellen Avrumova
# Course: CSCI-135
# Instructor: Tong Yi & Mike Zamansky
# Assignment: Lab 4
# This is the Makefile for all parts of Lab4. 

main: main.o box.o checkerboard.o cross.o lower.o
	g++ -o main main.o box.o checkerboard.o cross.o lower.o

main.o: main.cpp shapes.h
	g++ -c main.cpp

box.o: box.cpp shapes.h
	g++ -c box.cpp

checkerboard.o: checkerboard.cpp shapes.h
	g++ -c checkerboard.cpp

cross.o: cross.cpp shapes.h
	g++ -c cross.cpp

lower.o: lower.cpp shapes.h
	g++ -c lower.cpp

clean:
	rm main.o box.o checkerboard.o cross.o lower.o


