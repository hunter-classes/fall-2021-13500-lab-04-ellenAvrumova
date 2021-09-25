# Author: Ellen Avrumova
# Course: CSCI-135
# Instructor: Tong Yi & Mike Zamansky
# Assignment: Lab 4
# This is the Makefile for all parts of Lab4. 

main: main.o box.o checkerboard.o
	g++ -o main main.o box.o checkerboard.o

main.o: main.cpp shapes.h
	g++ -c main.cpp

box.o: box.cpp shapes.h
	g++ -c box.cpp

checkerboard.o: checkerboard.cpp shapes.h
	g++ -c checkerboard.cpp

clean:
	rm main.o box.o checkerboard.o

