# Author: Ellen Avrumova
# Course: CSCI-135
# Instructor: Tong Yi & Mike Zamansky
# Assignment: Lab 4
# This is the Makefile for all parts of Lab4. 

main: main.o box.o
	g++ -o main main.o box.o

main.o: main.cpp box.h
	g++ -c main.cpp

box.o: box.cpp box.h
	g++ -c box.cpp

clean:
	rm main.o box.o

